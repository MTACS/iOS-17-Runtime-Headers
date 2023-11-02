
@interface APUILinkSuggestionView : APUISuggestionView <WFWorkflowRunnerClientDelegate> {
    ATXLinkActionContainer * _linkAction;
    UITapGestureRecognizer * _tapRecognizer;
    WFWorkflowRunnerClient * _workflowRunnerClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_tapRecognized:(id)arg1;
- (void)layoutSuggestion:(id)arg1;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end
