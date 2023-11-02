
@protocol SFContinuityScanManagerObserver <NSObject>

@required

- (void)scanManager:(SFContinuityScanManager *)arg1 foundDeviceWithDevice:(SFPeerDevice *)arg2;
- (void)scanManager:(SFContinuityScanManager *)arg1 lostDeviceWithDevice:(SFPeerDevice *)arg2;
- (void)scanManager:(SFContinuityScanManager *)arg1 pairedDevicesChanged:(NSSet *)arg2;
- (void)scanManager:(SFContinuityScanManager *)arg1 receivedAdvertisement:(SFActivityAdvertisement *)arg2;

@end
