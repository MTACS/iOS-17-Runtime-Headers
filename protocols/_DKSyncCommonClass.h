
@protocol _DKSyncCommonClass <_DKSyncRemoteStorage>

@required

- (RPCompanionLinkClient *)client;
- (void)handleAvailabilityFailureWithPeer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: _DKSyncPeer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handshakeWithDuetSyncPeer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: _DKSyncPeer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSString *, NSError *, void*
- (void)handshakeWithDuetSyncPeer:(_DKSyncPeer *)arg1 orError:(NSError *)arg2;
- (bool)isTransportActiveForPeer:(_DKSyncPeer *)arg1;
- (NSString *)myDeviceID;
- (void)sendRequestID:(void *)arg1 request:(void *)arg2 peer:(void *)arg3 highPriority:(void *)arg4 options:(void *)arg5 responseHandler:(void *)arg6; // needs 6 arg types, found 13: NSString *, NSDictionary *, _DKSyncPeer *, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (void)setDeviceID:(NSString *)arg1;
- (NSError *)transformCaughtObject:(id)arg1 existingError:(NSError *)arg2;
- (NSError *)transformResponseError:(NSError *)arg1;

@end
