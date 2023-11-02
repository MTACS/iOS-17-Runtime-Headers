
@interface SBAbstractSystemActionExecutor : NSObject <SBSystemActionExecuting> {
    NSMutableArray * _executionCompletions;
    double  _executionEndTime;
    double  _executionStartTime;
    SBSystemAction * _systemAction;
}

@property (nonatomic, readonly) bool canBeExecuted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting, nonatomic, readonly) bool executing;
@property (nonatomic, readonly) double executionEndTime;
@property (nonatomic, readonly) double executionStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBSystemAction *systemAction;

- (void).cxx_destruct;
- (id)_beginInteractiveExecutionWithContext:(id)arg1 error:(out id*)arg2;
- (bool)_canBeExecuted;
- (void)_cancelPreviewing;
- (void)_finishExecutingWithResult:(id)arg1;
- (bool)_isExecuting;
- (id)_previewWithCoordinator:(id)arg1;
- (bool)canBeExecuted;
- (void)cancelPreviewing;
- (id)executeWithContext:(id)arg1 completion:(id /* block */)arg2;
- (double)executionEndTime;
- (double)executionStartTime;
- (id)initWithSystemAction:(id)arg1;
- (bool)isExecuting;
- (id)previewWithCoordinator:(id)arg1;
- (id)systemAction;

@end
