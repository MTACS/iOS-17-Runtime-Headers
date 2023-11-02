
@interface CSLockScreenIdleTimerSettings : PTSettings {
    bool  _increaseNotificationScrollLogging;
    double  _unlockSlideForIdleTimerDisabledPercentage;
    double  _unlockSlideForIdleTimerDisabledPercentageIPad;
}

@property (nonatomic) bool increaseNotificationScrollLogging;
@property (nonatomic) double unlockSlideForIdleTimerDisabledPercentage;
@property (nonatomic) double unlockSlideForIdleTimerDisabledPercentageIPad;

+ (id)settingsControlModule;

- (bool)increaseNotificationScrollLogging;
- (void)setDefaultValues;
- (void)setIncreaseNotificationScrollLogging:(bool)arg1;
- (void)setUnlockSlideForIdleTimerDisabledPercentage:(double)arg1;
- (void)setUnlockSlideForIdleTimerDisabledPercentageIPad:(double)arg1;
- (double)unlockSlideForIdleTimerDisabledPercentage;
- (double)unlockSlideForIdleTimerDisabledPercentageIPad;

@end
