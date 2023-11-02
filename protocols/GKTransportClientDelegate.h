
@protocol GKTransportClientDelegate

@required

- (void)connectionDidChangeWithState:(int)arg1 playerID:(NSString *)arg2;
- (void)connectionDidFailWithError:(NSError *)arg1;
- (void)transportDidFailWithError:(NSError *)arg1;
- (void)transportDidReceivePacket:(GKMatchPacket *)arg1 fromPlayerID:(NSString *)arg2 remoteRecipientID:(NSString *)arg3;
- (void)transportDidUpdateWithInfo:(NSDictionary *)arg1;

@optional

- (void)relayDidReceivePushData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@end
