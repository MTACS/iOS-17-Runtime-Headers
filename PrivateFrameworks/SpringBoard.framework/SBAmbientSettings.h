
@interface SBAmbientSettings : PTSettings {
    bool  _enableSuppression;
    long long  _idleTimerDuration;
    long long  _idleTimerWarnMode;
    long long  _suppressedIdleTimerDuration;
    long long  _suppressedIdleTimerWarnMode;
}

@property (nonatomic) bool enableSuppression;
@property (nonatomic) long long idleTimerDuration;
@property (nonatomic) long long idleTimerWarnMode;
@property (nonatomic) long long suppressedIdleTimerDuration;
@property (nonatomic) long long suppressedIdleTimerWarnMode;

+ (id)settingsControllerModule;

- (bool)enableSuppression;
- (long long)idleTimerDuration;
- (long long)idleTimerWarnMode;
- (void)setDefaultValues;
- (void)setEnableSuppression:(bool)arg1;
- (void)setIdleTimerDuration:(long long)arg1;
- (void)setIdleTimerWarnMode:(long long)arg1;
- (void)setSuppressedIdleTimerDuration:(long long)arg1;
- (void)setSuppressedIdleTimerWarnMode:(long long)arg1;
- (long long)suppressedIdleTimerDuration;
- (long long)suppressedIdleTimerWarnMode;

@end
