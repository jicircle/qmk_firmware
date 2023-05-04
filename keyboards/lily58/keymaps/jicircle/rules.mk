BOOTLOADER = caterina

MAGIC_ENABLE = yes			# Save space by not PROCESS_MAGIC, which is bootmagic with out the boot (+634)
LTO_ENABLE = yes			# Save space by link time optimization

EXTRAKEY_ENABLE = yes			# Audio control and System control (+450)
NKRO_ENABLE = yes			# 6KRO by default. NKRO works if enabled (+328)
COMBO_ENABLE = no			# Tap combo chording (+952)
VIA_ENABLE = yes			# VIA_ENABLE with the keymap (+2300). Note: VIA is required as non-via layouts were removed to save space.
DEBOUNCE_TYPE = sym_eager_pk
WPM_ENABLE = yes