
@protocol TVRMSPairingSessionDelegate <NSObject>

@required

- (void)pairingSession:(id <TVRMSPairingSession>)arg1 didPairWithServiceNetworkName:(NSString *)arg2 pairingGUID:(NSString *)arg3;
- (void)pairingSessionDidFail:(id <TVRMSPairingSession>)arg1;

@optional

- (void)pairingSession:(id <TVRMSPairingSession>)arg1 didBeginPairingWithPasscode:(NSString *)arg2;

@end
