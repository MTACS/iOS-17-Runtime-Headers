
@interface INHandleIntentForwardingAction : INIntentForwardingAction

+ (Class)responseClass;

- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)arg1;
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(id /* block */)arg2;

@end
