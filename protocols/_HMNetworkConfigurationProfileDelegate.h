
@protocol _HMNetworkConfigurationProfileDelegate <NSObject>

@required

- (void)networkConfigurationProfileDidUpdateAccessViolation:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateAllowedHosts:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateNetworkAccessMode:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateProtectionMode:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateWiFiCredentialType:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateWiFiReconfigurationSupport:(_HMNetworkConfigurationProfile *)arg1;

@end
