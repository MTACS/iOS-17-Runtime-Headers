
@protocol DNDSMeDeviceServiceListener <NSObject>

@required

- (void)meDeviceService:(DNDSMeDeviceService *)arg1 didReceiveMeDeviceStateUpdate:(DNDMeDeviceState *)arg2;

@end
