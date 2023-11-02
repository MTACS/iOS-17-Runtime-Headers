
@protocol TCSClientXPC <NSObject>

@required

- (void)applicationWillEnterForeground;
- (void)callConnected:(TCSCall *)arg1;
- (void)callStatusChanged:(TCSCall *)arg1;
- (void)remoteUplinkMuteChanged:(TCSCall *)arg1;

@end
