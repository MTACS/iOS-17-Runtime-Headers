
@interface WFRunJavaScriptOnWebPageAction : WFAction <WFRemoteQuarantinePolicyEvaluatorDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_getErrorFromScript:(id)arg1;
- (void)evaluateQuarantineWithJavaScript:(id)arg1 webPageURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getWebPageFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)invalidJavaScriptErrorWithSyntaxErrorString:(id)arg1;
- (id)missingCompletionError;
- (id)name;
- (id)noWebPageProvidedError;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)userInterfaceToPresentAlertForEvaluator:(id)arg1;

@end
