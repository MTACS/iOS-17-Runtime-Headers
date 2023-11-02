
@protocol PHATask <NSObject>

@required

- (bool)currentPlatformIsSupported;
- (NSString *)incrementalKey;
- (NSString *)name;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(PGManager *)arg1 progressReporter:(MAProgressReporter *)arg2 error:(id*)arg3;
- (bool)shouldRunWithGraphManager:(PGManager *)arg1;
- (NSArray *)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@optional

- (bool)didProduceContent;
- (double)incrementalWindow;
- (bool)runWithGraphManager:(PGManager *)arg1 withIncrementalChange:(PGGraphUpdate *)arg2 progressReporter:(MAProgressReporter *)arg3 error:(id*)arg4;
- (bool)shouldRunIncrementallyWithGraphManager:(PGManager *)arg1 incrementalChange:(PGGraphUpdate *)arg2 timeIntervalSinceNonIncrementalRun:(double)arg3;
- (unsigned long long)version;

@end
