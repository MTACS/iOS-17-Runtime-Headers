
@protocol GCSettingsXPCProxyRemoteClientEndpointInterface <_GCIPCRemoteEndpointInterface>

@required

- (void)newProfile:(GCSProfile *)arg1;
- (void)refreshProfile;

@end
