
@interface WFTriggerEventRunner : NSObject <WFWorkflowRunnerClientDelegate> {
    <WFDatabaseProvider> * _databaseProvider;
    <WFTriggerEventRunnerDelegate> * _delegate;
    WFWorkflowRunEvent * _inProgressRunEvent;
    WFWorkflowRunnerClient * _inProgressRunnerClient;
    WFConfiguredTrigger * _inProgressTrigger;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <WFTriggerEventRunnerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWorkflowRunEvent *inProgressRunEvent;
@property (nonatomic, retain) WFWorkflowRunnerClient *inProgressRunnerClient;
@property (nonatomic, retain) WFConfiguredTrigger *inProgressTrigger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)databaseProvider;
- (id)delegate;
- (id)inProgressRunEvent;
- (id)inProgressRunnerClient;
- (id)inProgressTrigger;
- (id)initWithDatabaseProvider:(id)arg1 delegate:(id)arg2;
- (bool)isRunningWorkflowWithIdentifier:(id)arg1;
- (void)logPowerLogEventForConfiguredTrigger:(id)arg1 workflowReference:(id)arg2;
- (void)setInProgressRunEvent:(id)arg1;
- (void)setInProgressRunnerClient:(id)arg1;
- (void)setInProgressTrigger:(id)arg1;
- (bool)startRunningWorkflow:(id)arg1 forTrigger:(id)arg2 eventInfo:(id)arg3;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;

@end
