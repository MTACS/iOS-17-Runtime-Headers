
@interface WFDeletePhotosAction : WFHandleCustomIntentAction

- (id)contentDestinationWithError:(id*)arg1;
- (bool)inputPassthrough;
- (bool)populatesInputFromInputParameter;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;

@end
