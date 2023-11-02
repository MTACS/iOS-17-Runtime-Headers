
@protocol HMDPrimaryResidentDiscoveryManager <NSObject>

@required

- (void)cancel;
- (void)configureWithContext:(id <HMDResidentDeviceManagerContext>)arg1;
- (<HMDPrimaryResidentDiscoveryManagerDelegate> *)delegate;
- (void)discoverPrimaryResident;
- (void)setDelegate:(id <HMDPrimaryResidentDiscoveryManagerDelegate>)arg1;

@end
