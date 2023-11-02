
@interface WFRunSSHScriptAction : WFAction <NMSSHSessionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)authenticateAndRunAsynchronouslyWithInput:(id)arg1 session:(id)arg2;
- (void)finishRunningSSHScriptWithError:(id)arg1;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)session:(id)arg1 didDisconnectWithError:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
