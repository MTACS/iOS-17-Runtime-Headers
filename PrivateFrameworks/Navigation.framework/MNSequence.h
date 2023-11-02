
@interface MNSequence : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _steps;
    geo_isolater * _stepsIsolater;
}

- (void).cxx_destruct;
- (void)_runNextStepWithPreviousStepResult:(id)arg1;
- (void)addStep:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (void)start;

@end
