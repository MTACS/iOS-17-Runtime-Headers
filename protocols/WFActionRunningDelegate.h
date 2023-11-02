
@protocol WFActionRunningDelegate <WFActionParameterInputProvider>

@optional

- (void)action:(WFAction *)arg1 didDecideRunningProgressIsAllowed:(bool)arg2;
- (void)action:(WFAction *)arg1 didGenerateReversalState:(id <WFActionReversalState>)arg2;
- (void)action:(void *)arg1 handleTestingEvent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WFAction *, WFActionTestingEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (<WFActionReversalState> *)actionReversalStateForAction:(WFAction *)arg1;
- (WFContentItemCache *)contentItemCache;
- (WFWorkflowRunningContext *)currentRunningContextForAction:(WFAction *)arg1;
- (WFSmartPromptsExfiltrationLogger *)exfiltrationLogger;
- (WFControlFlowAttributionTracker *)flowTracker;
- (bool)isTesting;
- (NSXPCListenerEndpoint *)remoteDialogPresenterEndpointForRunWorkflowAction:(WFAction *)arg1;
- (bool)shouldDisablePrivacyPrompts;

@end
