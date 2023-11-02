
@interface SBIdleTimerAggregateClientConfiguration : NSObject <BSDescriptionProviding> {
    SBIdleTimerConfigurationDisablesTimerSetting * _disableTimerSetting;
    SBIdleTimerTimeoutPrecedenceSettings * _maxExpirationTimeoutSettings;
    SBIdleTimerTimeoutPrecedenceSettings * _minExpirationTimeoutSettings;
    SBIdleTimerTimeoutRange * _resolvedExpirationTimeoutRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBIdleTimerConfigurationDisablesTimerSetting *disableTimerSetting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIdleTimerTimeoutPrecedenceSettings *maxExpirationTimeoutSettings;
@property (nonatomic, readonly) SBIdleTimerTimeoutPrecedenceSettings *minExpirationTimeoutSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)disableTimerSetting;
- (id)expirationTimeoutIntervalRangeForPrecedence:(unsigned long long)arg1;
- (id)maxExpirationTimeoutSettings;
- (id)minExpirationTimeoutSettings;
- (id)resolvedExpirationTimeoutRange;
- (void)setDisablesTimerWithPrecedence:(unsigned long long)arg1;
- (void)setMaxExpirationTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2;
- (void)setMaxExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;
- (void)setMinExpirationTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2;
- (void)setMinExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
