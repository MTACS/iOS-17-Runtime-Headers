
@protocol TVRMSDAAPTouchRemoteManagerDelegate <NSObject>

@required

- (void)touchRemoteManagerDidDisconnect:(TVRMSDAAPTouchRemoteManager *)arg1;
- (void)touchRemoteManagerKeyboardEditingSessionDidBegin:(TVRMSDAAPTouchRemoteManager *)arg1;
- (void)touchRemoteManagerKeyboardEditingSessionDidEnd:(TVRMSDAAPTouchRemoteManager *)arg1;
- (void)touchRemoteManagerKeyboardEditingSessionDidUpdate:(TVRMSDAAPTouchRemoteManager *)arg1;

@end
