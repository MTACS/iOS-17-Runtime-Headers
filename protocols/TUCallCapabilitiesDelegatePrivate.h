
@protocol TUCallCapabilitiesDelegatePrivate <TUCallCapabilitiesDelegate>

@optional

- (void)didAddCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeCloudCallingDevices;
- (void)didChangeEmergencyCallbackMode;
- (void)didChangeEmergencyCallbackPossible;
- (void)didChangeFaceTimeCallingAvailability;
- (void)didChangeOutgoingRelayCallerID;
- (void)didChangeRelayCallingAvailability;
- (void)didChangeRelayCallingCapabilities;
- (void)didChangeRelayCallingFeatures;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeVoLTECallingCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didRemoveCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;

@end
