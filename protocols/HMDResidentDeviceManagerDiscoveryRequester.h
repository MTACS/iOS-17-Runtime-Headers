
@protocol HMDResidentDeviceManagerDiscoveryRequester <NSObject>

@required

- (void)residentDeviceManager:(id <HMDResidentDeviceManager>)arg1 didCompleteDiscoveryWithPrimaryResidentDevice:(HMDResidentDevice *)arg2 error:(NSError *)arg3;

@end
