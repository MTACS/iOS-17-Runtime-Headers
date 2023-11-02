
@protocol HMDAccessoryFirmwareUpdatePolicy <HMFLogging>

@required

- (HMDHAPAccessory *)accessory;
- (void)configure;
- (bool)status;

@end
