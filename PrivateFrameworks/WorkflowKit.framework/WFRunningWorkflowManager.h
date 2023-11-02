
@interface WFRunningWorkflowManager : NSObject <WFApplicationStateObserver> {
    id /* block */  _demoResetBlock;
    NSMutableOrderedSet * _runningWorkflowControllerSet;
    NSHashTable * _workflowControllerAssertionTable;
}

@property (nonatomic, copy) id /* block */ demoResetBlock;
@property (nonatomic, readonly) NSMutableOrderedSet *runningWorkflowControllerSet;
@property (nonatomic, readonly) NSArray *runningWorkflowControllers;
@property (nonatomic, readonly) NSArray *runningWorkflows;
@property (nonatomic, readonly) NSHashTable *workflowControllerAssertionTable;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)dealloc;
- (id /* block */)demoResetBlock;
- (id)init;
- (id)runningWorkflowControllerSet;
- (id)runningWorkflowControllers;
- (id)runningWorkflows;
- (void)setDemoResetBlock:(id /* block */)arg1;
- (void)updateAssertions;
- (void)updateRunningWorkflowCount;
- (id)workflowControllerAssertionTable;
- (void)workflowControllerDidStart:(id)arg1;
- (void)workflowControllerDidStop:(id)arg1;

@end
