
@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (bool)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (double)incrementalWindow;
- (double)period;
- (int)priority;
- (bool)shouldRunIncrementallyWithGraphManager:(id)arg1 incrementalChange:(id)arg2 timeIntervalSinceNonIncrementalRun:(double)arg3;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
