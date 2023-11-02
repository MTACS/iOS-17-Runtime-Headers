
@interface MFActivityCondition : NSObject <MFActivityCondition, MFActivityConditionBuilder> {
    EFCancelationToken * _cancellationToken;
    long long  _maxThermalPressureLevel;
    float  _minBatteryLevel;
    bool  _requireExternalPower;
    bool  _requireLowPowerModeDisabled;
    bool  _requireScreenLocked;
    bool  _requireWiFi;
    bool  _satisfied;
    <EFScheduler> * _scheduler;
}

@property (nonatomic, retain) EFCancelationToken *cancellationToken;
@property (nonatomic, readonly) EFObservable *conditionsObservable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxThermalPressureLevel;
@property (nonatomic) float minBatteryLevel;
@property (nonatomic) bool requireExternalPower;
@property (nonatomic) bool requireLowPowerModeDisabled;
@property (nonatomic) bool requireScreenLocked;
@property (nonatomic) bool requireWiFi;
@property (getter=isSatisfied, nonatomic) bool satisfied;
@property (nonatomic, retain) <EFScheduler> *scheduler;
@property (readonly) Class superclass;

+ (id)alwaysSatisfiedCondition;

- (void).cxx_destruct;
- (bool)_isValidConfiguration;
- (id)cancellationToken;
- (id)conditionsObservable;
- (void)dealloc;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (bool)isSatisfied;
- (long long)maxThermalPressureLevel;
- (float)minBatteryLevel;
- (bool)requireExternalPower;
- (bool)requireLowPowerModeDisabled;
- (bool)requireScreenLocked;
- (bool)requireWiFi;
- (id)scheduler;
- (void)setCancellationToken:(id)arg1;
- (void)setMaxThermalPressureLevel:(long long)arg1;
- (void)setMinBatteryLevel:(float)arg1;
- (void)setRequireExternalPower:(bool)arg1;
- (void)setRequireLowPowerModeDisabled:(bool)arg1;
- (void)setRequireScreenLocked:(bool)arg1;
- (void)setRequireWiFi:(bool)arg1;
- (void)setSatisfied:(bool)arg1;
- (void)setScheduler:(id)arg1;

@end
