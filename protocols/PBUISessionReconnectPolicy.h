
@protocol PBUISessionReconnectPolicy <NSObject>

@required

- (void)sessionDidDisconnect;
- (double)sessionReconnectDelay;

@end
