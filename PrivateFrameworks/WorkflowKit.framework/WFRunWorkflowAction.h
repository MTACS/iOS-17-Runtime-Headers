
@interface WFRunWorkflowAction : WFAction <WFWorkflowControllerDelegate> {
    WFWorkflowController * _workflowController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) WFWorkflowController *workflowController;

- (void).cxx_destruct;
- (bool)canOfferSuggestionsForParameterWithKey:(id)arg1;
- (void)cancel;
- (id)contentDestinationWithError:(id*)arg1;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getHandoffWorkflowControllerState:(id /* block */)arg1;
- (id)getWorkflowWithError:(id*)arg1;
- (bool)isProgressIndeterminate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performWithSandboxExtensions:(id /* block */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setHandoffWorkflowControllerState:(id)arg1;
- (void)setWorkflowController:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)stop;
- (id)userInterfaceForWorkflowController:(id)arg1;
- (id)workflowController;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(bool)arg3;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (bool)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)workflowNameFromParameter;

@end
