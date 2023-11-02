
@interface PHAWorkerWarmer : NSObject {
    PHAWorker * _lastActiveWorker;
    PHAJobConstraints * _lastConstraints;
    NSMutableSet * _workers;
}

@property (nonatomic, retain) PHAWorker *lastActiveWorker;
@property (nonatomic, retain) PHAJobConstraints *lastConstraints;
@property (nonatomic, readonly) NSMutableSet *workers;

+ (unsigned long long)stateCode;

- (void).cxx_destruct;
- (bool)_cooldownWorkerIfWarmed:(id)arg1;
- (void)_warmupWorkerIfCooled:(id)arg1 withProgressBlock:(id /* block */)arg2;
- (id)init;
- (id)lastActiveWorker;
- (id)lastConstraints;
- (void)recordConstraintChange:(id)arg1;
- (void)reportNoMoreJobsExpected;
- (void)setActiveWorker:(id)arg1 withJob:(id)arg2;
- (void)setLastActiveWorker:(id)arg1;
- (void)setLastConstraints:(id)arg1;
- (id)statusAsDictionary;
- (id)workers;

@end
