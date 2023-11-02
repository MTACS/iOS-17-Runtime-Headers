
@protocol HMNetworkConfigurationProfileDelegatePrivate <HMNetworkConfigurationProfileDelegate>

@optional

- (void)profileDidUpdateAccessViolation:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateAllowedHosts:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateNetworkProtectionMode:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateWiFiCredentialType:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateWiFiReconfigurationSupport:(HMNetworkConfigurationProfile *)arg1;

@end
