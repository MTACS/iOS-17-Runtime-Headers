
@protocol HMDAccessoryFirmwareUpdateManagerWingman

@required

- (UARPController *)defaultUARPController;
- (UARPController *)matterUARPController;
- (HMDAccessoryFirmwareUpdateSession *)newAccessoryFirmwareUpdateSessionWithHAPAccessory:(HMDHAPAccessory *)arg1 uarpAccessory:(UARPAccessory *)arg2 accessoryFirmwareUpdateManager:(HMDAccessoryFirmwareUpdateManager *)arg3 logEventManager:(HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *)arg4;
- (double)registerDelay;

@end
