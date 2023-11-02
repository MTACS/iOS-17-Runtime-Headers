
@interface PHAGraphForceGraphRebuildTask : PHAGraphRebuildTask

- (bool)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)name;
- (double)period;
- (int)priority;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)taskClassDependencies;

@end
