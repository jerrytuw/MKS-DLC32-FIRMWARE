# MKS-DLC32-FIRMWARE
The source code of MKS DLC32.

## 🔧 This Fork Improvements
- ( Verified the PWM spindle now respects the standard GRBL `$32` (Laser Mode) setting )
- Added consolidated changes proposed by @kpatel122
    - Fixed language bug that shows 'Text' for all labels. Added English co… 355e245
    - Removed set_language_btn_style which was causing issues 9d173ca
    - Update Grbl.cpp 48a55c6
- Changed texts from "Knife" to "Probe"
- Added SOFTSTOP and SHOW_PRINTPOS options
    - SOFTSTOP adds button to STOP popup for soft stop, without losing work position
    - SHOW_PRINTPOS shows work coordinates instead of overrides during SD card print
- Changed icons for XY and Z Clear (just to test)
- Activated touch beep


## 🔧 Fork Improvements from https://github.com/barnstorm/MKS-DLC32-FIRMWARE

This fork adds the following enhancements to the original MKS DLC32 firmware:

### ✨ Runtime Laser/CNC Mode Switching via `$32`

**No more reflashing to switch between laser and CNC modes!**

- The PWM spindle now respects the standard GRBL `$32` (Laser Mode) setting
- Toggle between modes at runtime: `$32=0` (CNC) / `$32=1` (Laser)
- When `$32=1`: Enables laser-specific behavior (no spinup delays, dynamic power modulation, M4 support)
- When `$32=0`: Standard CNC spindle behavior with spin-up/down delays
- Works with LightBurn, LaserGRBL, UGS, and other GRBL senders
- Single unified firmware for both use cases

### 🐛 Bug Fixes

- **CoreXY Build**: Added missing `DEFAULT_BEEP_STATUS` and `DEFAULT_LANGUAGE_STATUS` defines
- **CoreXY Build**: Fixed partition file reference to use standard `huge_app.csv`
- **UI Language**: Fixed language initialization using assignment (`=`) instead of comparison (`==`)
- **UI Language**: Defaulted all languages to English (Chinese/German strings not yet implemented)

## Environment construction:

- vscode

- platformIO

PlatformIOc needs to be installed on vscode.

Open Firmware with vscode, and platformIO will be started, In the platform.ini file，

`default_envs = mks_dlc32_v2_1` 

Note:We will make a pin suitable for V1.0，Settings corresponding to the selection of coreXY.

Then compile and download.

