
@interface WFToggleDoNotDisturbAction : WFHandleCustomIntentAction

- (id)appIdentifier;
- (id)appResource;
- (id)contentDestinationWithError:(id*)arg1;
- (void)generatePopulatedIntentFromInput:(id)arg1 processedParameters:(id)arg2 completion:(id /* block */)arg3;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;

@end
