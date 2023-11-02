
@protocol SFContinuityScannerClient <NSObject>

@required

- (void)foundDeviceWithDevice:(SFPeerDevice *)arg1;
- (void)lostDeviceWithDevice:(SFPeerDevice *)arg1;
- (void)pairedDevicesChanged:(NSSet *)arg1;
- (void)receivedAdvertisement:(SFActivityAdvertisement *)arg1;

@end
