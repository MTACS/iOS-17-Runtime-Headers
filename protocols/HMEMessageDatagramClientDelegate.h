
@protocol HMEMessageDatagramClientDelegate <HMERouterClientDelegate>

@required

- (void)client:(void *)arg1 fetchWithFilters:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: HMEMessageDatagramClient *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSDictionary *, NSError *, void*
- (void)client:(void *)arg1 sendChangeRegistrationsWithAddedFilters:(void *)arg2 removedFilters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HMEMessageDatagramClient *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)client:(void *)arg1 sendConnectWithAddedFilters:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: HMEMessageDatagramClient *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSDictionary *, NSError *, void*
- (void)clientDidConnect:(HMEMessageDatagramClient *)arg1 serverIdentifier:(NSUUID *)arg2;
- (void)clientDidDisconnect:(HMEMessageDatagramClient *)arg1;
- (void)sendDisconnectForClient:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMEMessageDatagramClient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendKeepAliveForClient:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMEMessageDatagramClient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
