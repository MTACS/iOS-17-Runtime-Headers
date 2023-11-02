
@interface INStopSendingUpdatesForwardingAction : INIntentForwardingAction

+ (Class)responseClass;

- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(id /* block */)arg2;

@end
