
@interface WFTranslateTextAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)translateText:(id)arg1 fromLocale:(id)arg2 toLocale:(id)arg3 translator:(id)arg4 completionBlock:(id /* block */)arg5;

@end
