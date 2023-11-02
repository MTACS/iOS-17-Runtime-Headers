
@interface SBAttentionAwarenessSettings : SBUISettings <MCProfileConnectionObserver> {
    bool  _allowsAttentionAwareAutoLock;
    struct AWNotification_s { } * _attentionAwarenessToken;
    double  _dimInterval;
    bool  _isObservingDataSources;
    double  _sampleInterval;
    bool  _shouldUseAttentionSensor;
    double  _sleepInterval;
    bool  _supportsAttentionSensor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dimInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) double sampleInterval;
@property (nonatomic) bool shouldUseAttentionSensor;
@property (nonatomic) double sleepInterval;
@property (readonly) Class superclass;

+ (bool)attentionSensorSupported;
+ (id)settingsControllerModule;

- (void)dealloc;
- (double)dimInterval;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (double)sampleInterval;
- (void)setDefaultValues;
- (void)setDimInterval:(double)arg1;
- (void)setSampleInterval:(double)arg1;
- (void)setShouldUseAttentionSensor:(bool)arg1;
- (void)setSleepInterval:(double)arg1;
- (bool)shouldUseAttentionSensor;
- (double)sleepInterval;

@end
