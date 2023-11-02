
@protocol SBBacklightControllerContextProviding <NSObject>

@required

- (SBHIDUISensorModeController *)HIDUISensorModeController;
- (BLSBacklight *)blsBacklight;
- (SBIdleTimerDefaults *)idleTimerDefaults;
- (SBLockScreenManager *)lockScreenManager;
- (SBProximitySensorManager *)proximitySensorManager;
- (SBScreenSleepCoordinator *)screenSleepCoordinator;
- (SBScreenWakeAnimationController *)screenWakeAnimationController;
- (SBWakeLogger *)wakeLogger;

@end
