
@protocol ICPeerInputStreamDelegate <NSObject>

@required

- (void)didDisconnectInputStream:(ICPeerInputStream *)arg1;
- (void)handleMessage:(NSData *)arg1 fromInputStream:(ICPeerInputStream *)arg2;

@end
