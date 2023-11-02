
@protocol HKDeviceQueryClientInterface <HKQueryClientInterface>

@required

- (void)clientRemote_deliverDevices:(NSArray *)arg1 done:(bool)arg2 reset:(bool)arg3 query:(NSUUID *)arg4;

@end
