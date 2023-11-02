
@interface WFRemoteExecutionOutgoingStopSession : WFRemoteExecutionSession

- (void)finishWithError:(id)arg1;
- (id)initWithService:(id)arg1 request:(id)arg2;
- (bool)sendToDestinations:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
