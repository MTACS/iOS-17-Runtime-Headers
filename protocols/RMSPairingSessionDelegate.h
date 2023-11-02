
@protocol RMSPairingSessionDelegate <NSObject>

@required

- (void)pairingSession:(id <RMSPairingSession>)arg1 didPairWithServiceNetworkName:(NSString *)arg2 pairingGUID:(NSString *)arg3;
- (void)pairingSessionDidFail:(id <RMSPairingSession>)arg1;

@optional

- (void)pairingSession:(id <RMSPairingSession>)arg1 didBeginPairingWithPasscode:(NSString *)arg2;

@end
