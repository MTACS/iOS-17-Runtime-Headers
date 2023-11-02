
@protocol HMDPrimaryResidentChangeMonitorDataSource <NSObject>

@required

- (HMDDevice *)confirmedPrimaryResidentDeviceForPrimaryResidentChangeMonitor:(HMDPrimaryResidentChangeMonitor *)arg1;
- (bool)hasResidentDevicesForPrimaryResidentChangeMonitor:(HMDPrimaryResidentChangeMonitor *)arg1;

@end
