
@interface PHAUserBehaviorEnrichmentTask : PHAEnrichmentTask

- (id)enrichmentProcessor;
- (double)period;
- (int)priority;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
