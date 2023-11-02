
@interface SBBacklightControllerDefaultContext : NSObject <SBBacklightControllerContextProviding>

@property (nonatomic, readonly) SBHIDUISensorModeController *HIDUISensorModeController;
@property (nonatomic, readonly) BLSBacklight *blsBacklight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIdleTimerDefaults *idleTimerDefaults;
@property (nonatomic, readonly) SBLockScreenManager *lockScreenManager;
@property (nonatomic, readonly) SBProximitySensorManager *proximitySensorManager;
@property (nonatomic, readonly) SBScreenSleepCoordinator *screenSleepCoordinator;
@property (nonatomic, readonly) SBScreenWakeAnimationController *screenWakeAnimationController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBWakeLogger *wakeLogger;

- (id)HIDUISensorModeController;
- (id)blsBacklight;
- (id)idleTimerDefaults;
- (id)lockScreenManager;
- (id)proximitySensorManager;
- (id)screenSleepCoordinator;
- (id)screenWakeAnimationController;
- (id)wakeLogger;

@end
