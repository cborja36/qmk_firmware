// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define QUICK_TAP_TERM 0
#define TAPPING_FORCE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 200  // in order to prevent keybaoard not waking up
