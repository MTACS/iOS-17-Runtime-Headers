
@interface WFSpringBoardWorkflowRunnerClient : WFWorkflowRunnerClient <WFWorkflowRunnerClientDelegate> {
    WFSpringBoardWebClipMetadata * _metadata;
    WFSpringBoardWorkflowRunnerClient * _retainedSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFSpringBoardWebClipMetadata *metadata;
@property (nonatomic, retain) WFSpringBoardWorkflowRunnerClient *retainedSelf;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithWebClipMetadata:(id)arg1;
- (id)initWithWorkflowIdentifier:(id)arg1;
- (id)metadata;
- (id)retainedSelf;
- (void)setMetadata:(id)arg1;
- (void)setRetainedSelf:(id)arg1;
- (void)showSingleStepCompletionWithCompletion:(id /* block */)arg1;
- (void)start;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;

@end
