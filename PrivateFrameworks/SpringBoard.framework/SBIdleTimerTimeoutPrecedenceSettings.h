
@interface SBIdleTimerTimeoutPrecedenceSettings : NSObject <BSDescriptionProviding> {
    double  _criticalTimeout;
    double  _highTimeout;
    double  _normalTimeout;
}

@property (nonatomic, readonly) double criticalTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double greatestTimeout;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double highTimeout;
@property (nonatomic, readonly) unsigned long long highestPrecedence;
@property (nonatomic, readonly) double leastTimeout;
@property (nonatomic, readonly) double normalTimeout;
@property (readonly) Class superclass;

- (double)_intervalForPrecedence:(unsigned long long)arg1;
- (void)_setTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2;
- (void)_setTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2;
- (void)_setTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;
- (double)criticalTimeout;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)greatestTimeout;
- (double)highTimeout;
- (unsigned long long)highestPrecedence;
- (double)leastTimeout;
- (double)normalTimeout;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
