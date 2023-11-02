
@protocol HMDPrimaryResidentDiscoveryManagerDelegate

@required

- (void)discoveryManager:(id <HMDPrimaryResidentDiscoveryManager>)arg1 didCompleteDiscoveryWithPrimaryResidentDevice:(HMDResidentDevice *)arg2 primaryResidentGenerationID:(NSUUID *)arg3 error:(NSError *)arg4;

@end
