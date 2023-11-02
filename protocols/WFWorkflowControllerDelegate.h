
@protocol WFWorkflowControllerDelegate <NSObject>

@optional

- (NSXPCListenerEndpoint *)remoteDialogPresenterEndpointForController:(WFWorkflowController *)arg1;
- (<WFUserInterfaceHost> *)userInterfaceForWorkflowController:(WFWorkflowController *)arg1;
- (void)workflowController:(WFWorkflowController *)arg1 actionDidRequestWorkflowExit:(WFAction *)arg2;
- (<WFActionReversalState> *)workflowController:(WFWorkflowController *)arg1 actionReversalStateForAction:(WFAction *)arg2;
- (void)workflowController:(WFWorkflowController *)arg1 didDecideRunningProgressIsAllowed:(bool)arg2 forAction:(WFAction *)arg3;
- (void)workflowController:(WFWorkflowController *)arg1 didFinishRunningWithError:(NSError *)arg2 cancelled:(bool)arg3;
- (void)workflowController:(WFWorkflowController *)arg1 didGenerateReversalState:(id <WFActionReversalState>)arg2 forAction:(WFAction *)arg3;
- (void)workflowController:(WFWorkflowController *)arg1 didRunAction:(WFAction *)arg2;
- (void)workflowController:(void *)arg1 didRunAction:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: WFWorkflowController *, WFAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)workflowController:(void *)arg1 handleTestingEvent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WFWorkflowController *, WFActionTestingEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)workflowController:(void *)arg1 handleUnsupportedEnvironmentForAction:(void *)arg2 currentState:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: WFWorkflowController *, WFAction *, WFWorkflowControllerState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*
- (bool)workflowController:(void *)arg1 handleUnsupportedUserInterfaceForAction:(void *)arg2 currentState:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WFWorkflowController *, WFAction *, WFWorkflowControllerState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<WFActionParameterInputProvider> *)workflowController:(WFWorkflowController *)arg1 parameterInputProviderForAction:(WFAction *)arg2;
- (void)workflowController:(void *)arg1 prepareToRunAction:(void *)arg2 withInput:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: WFWorkflowController *, WFAction *, WFContentCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)workflowControllerIsTesting:(WFWorkflowController *)arg1;
- (void)workflowControllerWillRun:(WFWorkflowController *)arg1;

@end
