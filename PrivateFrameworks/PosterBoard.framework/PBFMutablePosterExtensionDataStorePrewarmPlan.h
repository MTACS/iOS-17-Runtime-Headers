
@interface PBFMutablePosterExtensionDataStorePrewarmPlan : PBFPosterExtensionDataStorePrewarmPlan

@property (copy) NSString *identifier;
@property (copy) NSOrderedSet *prewarmPhasePlan;

- (void)appendPrewarmPhase:(id)arg1;
- (void)removePrewarmPhase:(id)arg1;
- (void)setExecutionBlock:(id /* block */)arg1 forPhase:(id)arg2;
- (void)setTimeoutInterval:(double)arg1 forPhase:(id)arg2;

@end
