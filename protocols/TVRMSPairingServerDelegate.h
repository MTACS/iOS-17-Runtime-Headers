
@protocol TVRMSPairingServerDelegate <NSObject>

@required

- (void)pairingServer:(TVRMSPairingServer *)arg1 didPairWithService:(NSString *)arg2 pairingGUID:(NSString *)arg3;
- (void)pairingServerDidFail:(TVRMSPairingServer *)arg1;

@optional

- (void)pairingServer:(TVRMSPairingServer *)arg1 didFailToPairWithService:(NSString *)arg2;

@end
