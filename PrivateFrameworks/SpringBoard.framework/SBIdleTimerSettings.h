
@interface SBIdleTimerSettings : PTSettings {
    bool  _disableIdleTimer;
    double  _unlockedIdleTimerCap;
}

@property (nonatomic) bool disableIdleTimer;
@property (nonatomic) double unlockedIdleTimerCap;

+ (id)settingsControllerModule;

- (bool)disableIdleTimer;
- (void)setDefaultValues;
- (void)setDisableIdleTimer:(bool)arg1;
- (void)setUnlockedIdleTimerCap:(double)arg1;
- (double)unlockedIdleTimerCap;

@end
