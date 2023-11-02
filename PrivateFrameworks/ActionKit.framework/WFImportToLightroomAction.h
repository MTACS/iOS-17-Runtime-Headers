
@interface WFImportToLightroomAction : WFHandleCustomIntentAction

- (id)contentDestinationWithError:(id*)arg1;
- (id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4;
- (void)initializeParameters;
- (bool)populatesInputFromInputParameter;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;

@end
