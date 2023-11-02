
@protocol HMDPrimaryResidentCapabilitiesAggregatorDelegate <NSObject>

@required

- (void)aggregator:(void *)arg1 accessoryCapabilitiesWithUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMDPrimaryResidentCapabilitiesAggregator *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)aggregator:(HMDPrimaryResidentCapabilitiesAggregator *)arg1 changedAccessoryCapabilities:(HMAccessoryCapabilities *)arg2 rawCapabilities:(NSData *)arg3 accessoryUUID:(NSUUID *)arg4 homeUUID:(NSUUID *)arg5;
- (void)aggregator:(HMDPrimaryResidentCapabilitiesAggregator *)arg1 changedResidentCapabilities:(HMResidentCapabilities *)arg2 rawCapabilities:(NSData *)arg3 accessoryUUID:(NSUUID *)arg4 homeUUID:(NSUUID *)arg5;
- (void)aggregator:(HMDPrimaryResidentCapabilitiesAggregator *)arg1 didReceiveDeviceIRKWithUUID:(NSUUID *)arg2 deviceIRK:(NSData *)arg3;
- (void)aggregator:(HMDPrimaryResidentCapabilitiesAggregator *)arg1 didReceivePublicPairingKeyWithUUID:(NSUUID *)arg2 pairingIdentity:(HMFPairingIdentity *)arg3;
- (void)aggregator:(HMDPrimaryResidentCapabilitiesAggregator *)arg1 didReceiveSoftwareVersionWithUUID:(NSUUID *)arg2 softwareVersion:(HMFSoftwareVersion *)arg3;
- (void)aggregator:(void *)arg1 residentCapabilitiesWithUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMDPrimaryResidentCapabilitiesAggregator *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)aggregatorDidBecomePrimary:(HMDPrimaryResidentCapabilitiesAggregator *)arg1;

@end
