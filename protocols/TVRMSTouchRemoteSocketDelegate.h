
@protocol TVRMSTouchRemoteSocketDelegate <NSObject>

@required

- (void)touchRemoteSocketDidConnect:(TVRMSTouchRemoteSocket *)arg1;
- (void)touchRemoteSocketDidDisconnect:(TVRMSTouchRemoteSocket *)arg1;

@end
