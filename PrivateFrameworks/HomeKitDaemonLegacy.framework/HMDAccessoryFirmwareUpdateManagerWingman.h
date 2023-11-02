
@interface HMDAccessoryFirmwareUpdateManagerWingman : NSObject <HMDAccessoryFirmwareUpdateManagerWingman> {
    UARPController * _defaultUARPController;
    UARPController * _matterUARPController;
    double  _registerDelay;
}

@property (nonatomic, readonly) UARPController *defaultUARPController;
@property (nonatomic, readonly) UARPController *matterUARPController;
@property (nonatomic, readonly) double registerDelay;

- (void).cxx_destruct;
- (id)defaultUARPController;
- (id)init;
- (id)matterUARPController;
- (id)newAccessoryFirmwareUpdateSessionWithHAPAccessory:(id)arg1 uarpAccessory:(id)arg2 accessoryFirmwareUpdateManager:(id)arg3 logEventManager:(id)arg4;
- (double)registerDelay;

@end
