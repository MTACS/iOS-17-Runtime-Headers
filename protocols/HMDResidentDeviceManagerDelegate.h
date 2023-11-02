
@protocol HMDResidentDeviceManagerDelegate <NSObject>

@required

- (void)residentDeviceManager:(id <HMDResidentDeviceManager>)arg1 didUpdatePrimaryResident:(HMDResidentDevice *)arg2 previousPrimaryResident:(HMDResidentDevice *)arg3;
- (void)residentDeviceManager:(id <HMDResidentDeviceManager>)arg1 didUpdateResidentAvailable:(bool)arg2;
- (void)residentDeviceManagerDidUpdateResidents:(id <HMDResidentDeviceManager>)arg1;

@end
