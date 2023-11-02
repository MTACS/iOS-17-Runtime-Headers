
@interface PHAGraphConsistencyTask : NSObject <PGGraphUpdateListener, PHATask> {
    MAProgressReporter * _progressReporter;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    PGGraphUpdateManager * _updateManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProduceContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (bool)currentPlatformIsSupported;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;
- (id)incrementalKey;
- (void)markTaskAsCompleted;
- (id)name;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
