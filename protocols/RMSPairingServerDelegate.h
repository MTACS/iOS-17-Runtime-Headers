
@protocol RMSPairingServerDelegate <NSObject>

@required

- (void)pairingServer:(RMSPairingServer *)arg1 didPairWithService:(NSString *)arg2 pairingGUID:(NSString *)arg3;
- (void)pairingServerDidFail:(RMSPairingServer *)arg1;

@optional

- (void)pairingServer:(RMSPairingServer *)arg1 didFailToPairWithService:(NSString *)arg2;

@end
