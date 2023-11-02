
@protocol NEExtensionAppPushProviderProtocol <NEExtensionProviderProtocol>

@required

- (void)reportIncomingCall:(NSDictionary *)arg1;
- (void)reportPushToTalkMessage:(NSDictionary *)arg1;
- (void)sendOutgoingCallMessage:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendTimerEvent;
- (void)setProviderConfiguration:(NSDictionary *)arg1;
- (void)startConnectionWithProviderConfig:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopWithReason:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
