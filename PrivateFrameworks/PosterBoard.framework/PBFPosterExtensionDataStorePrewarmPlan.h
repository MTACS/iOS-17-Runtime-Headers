
@interface PBFPosterExtensionDataStorePrewarmPlan : NSObject <NSCopying, NSMutableCopying> {
    double  _defaultPhaseTimeoutInterval;
    NSString * _identifier;
    NSDictionary * _phaseToExecutionBlock;
    NSDictionary * _phaseToPrewarmTimeout;
    NSOrderedSet * _prewarmPhasePlan;
}

@property double defaultPhaseTimeoutInterval;
@property (copy) NSString *identifier;
@property (copy) NSDictionary *phaseToExecutionBlock;
@property (copy) NSDictionary *phaseToPrewarmTimeout;
@property (copy) NSOrderedSet *prewarmPhasePlan;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultPhaseTimeoutInterval;
- (id /* block */)executionBlockForPhase:(id)arg1;
- (id)identifier;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)phaseToExecutionBlock;
- (id)phaseToPrewarmTimeout;
- (id)prewarmPhasePlan;
- (void)setDefaultPhaseTimeoutInterval:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPhaseToExecutionBlock:(id)arg1;
- (void)setPhaseToPrewarmTimeout:(id)arg1;
- (void)setPrewarmPhasePlan:(id)arg1;
- (double)timeoutIntervalForPhase:(id)arg1;

@end
