
@protocol DEDPairingProtocol <NSObject>

@required

- (void)promptPINForDevice:(DEDDevice *)arg1;
- (void)successPINForDevice:(DEDDevice *)arg1;

@end
