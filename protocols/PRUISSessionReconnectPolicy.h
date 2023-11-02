
@protocol PRUISSessionReconnectPolicy <NSObject>

@required

- (void)sessionDidDisconnect;
- (double)sessionReconnectDelay;

@end
