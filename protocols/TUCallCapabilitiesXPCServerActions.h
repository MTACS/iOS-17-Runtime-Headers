
@protocol TUCallCapabilitiesXPCServerActions <NSObject>

@required

- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)endEmergencyCallbackMode;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)setRelayCallingEnabled:(bool)arg1;
- (oneway void)setRelayCallingEnabled:(bool)arg1 forDeviceWithID:(NSString *)arg2;
- (oneway void)setThumperCallingAllowed:(bool)arg1 onSecondaryDeviceWithID:(NSString *)arg2 forSenderIdentityWithUUID:(NSUUID *)arg3;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setThumperCallingEnabled:(bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setVoLTECallingEnabled:(bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setWiFiCallingEnabled:(bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setWiFiCallingRoamingEnabled:(bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;

@end
