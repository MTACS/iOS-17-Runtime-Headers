
@protocol SAMonitoringSessionManagerClientProtocol <NSObject, SABluetoothScanRequestProtocol, SALocationRequestProtocol>

@optional

- (void)notifySeparationsForDevices:(NSArray *)arg1 withLocation:(CLLocation *)arg2 withContext:(NSDictionary *)arg3;
- (void)updatedMonitoringState:(unsigned long long)arg1 forDeviceUUID:(NSUUID *)arg2;

@end
