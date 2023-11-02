
@protocol WFIntentExecutorDelegate <NSObject>

@optional

- (void)intentExecutor:(WFIntentExecutor *)arg1 receivingRideStatusDidReceiveError:(NSError *)arg2;
- (void)intentExecutor:(WFIntentExecutor *)arg1 receivingRideStatusDidReceiveUpdate:(INGetRideStatusIntentResponse *)arg2;
- (void)intentExecutor:(void *)arg1 showConfirmationForInteraction:(void *)arg2 confirmationRequired:(void *)arg3 authenticationRequired:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: WFIntentExecutor *, INInteraction *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)intentExecutor:(void *)arg1 showConfirmationForSlot:(void *)arg2 item:(void *)arg3 intent:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: WFIntentExecutor *, <WFIntentParameterDescription> *, id, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)intentExecutorRequestsContinueInApp:(WFIntentExecutor *)arg1;

@end
