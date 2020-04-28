/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define FIRMWARE_VERSION u8"o9Jye/latest"

#undef TAPPING_TERM
// Short TAPPING_TERM makes layer switch snappy.
#define TAPPING_TERM 120
// Retro tapping is important with such a short TAPPING_TERM, otherwise som taps are missed.
#define RETRO_TAPPING
// With such a short TAPPING_TERM, "sequential" taps are basically impossible to register.
#define TAPPING_FORCE_HOLD
