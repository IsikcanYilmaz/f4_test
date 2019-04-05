
#define NUM_OSCILLATORS 4
#define PI 3.14159265358979323846
#define TAU (2.0 * PI)
#define BUF_SIZE_DIV4 160
#define BUF_SIZE_DIV2 (2*BUF_SIZE_DIV4)
#define BUF_SIZE (2*BUF_SIZE_DIV2)

#define MIDI_TO_FREQ(x) 440 * 2^((x-69)/12)

#include "main.h"
#include "oscillator.h"

extern Oscillator_t osc1;

extern uint16_t counters[NUM_OSCILLATORS];
extern int16_t signal[256];
extern int nsamples;
extern uint16_t i2s_buffer[BUF_SIZE];

void synth_init();
void play_note(uint8_t note, uint8_t velocity);
void synth_output();
void note_on(uint8_t key, uint8_t vel);
void note_off(uint8_t key);
void test_tone();
void make_sound(uint16_t begin, uint16_t end);
void update_lfos();
float wave_compute(uint8_t sound, float freq);

void mixer();

void make_sound_osc();

void test_synth_output();
void test_bump_pitch(bool up);
void test_dma_half_transfer1();
void test_dma_half_transfer2();
