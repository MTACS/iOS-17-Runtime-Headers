
@protocol RMSTouchRemoteSocketDelegate <NSObject>

@required

- (void)touchRemoteSocketDidConnect:(RMSTouchRemoteSocket *)arg1;
- (void)touchRemoteSocketDidDisconnect:(RMSTouchRemoteSocket *)arg1;

@end
