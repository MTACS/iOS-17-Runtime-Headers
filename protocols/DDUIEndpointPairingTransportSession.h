
@protocol DDUIEndpointPairingTransportSession <NSObject>

@required

- (void)activateWithErrorHandler:(void *)arg1 messageHandler:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 18: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, id /* block */, void*, void, id /* block */, NSDictionary *, void*, id /* block */, void*, void, id /* block */, <DDUIEndpointPairingTransportSession> *, void*
- (void)generateNetworkEndpointIdentifierForRemoteDevice:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (void)invalidate;
- (<DDUIDevice> *)remoteDevice;
- (void)sendMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendMessage:(void *)arg1 withTimeout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSString *)sessionID;
- (void)setSessionID:(NSString *)arg1;

@end
