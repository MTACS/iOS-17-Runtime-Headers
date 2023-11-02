
@protocol PKDeviceSharingCapabilitiesManagerObserver <NSObject>

@optional

- (void)deviceSharingCapabilitiesUpdated:(PKDeviceSharingCapabilitiesFetchStatus *)arg1 maximumPossibleDevices:(long long)arg2 forAppleID:(NSString *)arg3;
- (void)deviceSharingCapabilitiesUpdated:(PKDeviceSharingCapabilitiesFetchStatus *)arg1 newSharingCapabilties:(PKDeviceSharingCapabilities *)arg2 forAppleID:(NSString *)arg3;

@end
