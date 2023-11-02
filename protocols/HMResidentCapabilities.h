
@protocol HMResidentCapabilities <NSObject>

@required

- (bool)isResidentCapable;
- (bool)supportsAccessCodes;
- (bool)supportsAnnounce;
- (bool)supportsCHIP;
- (bool)supportsCameraActivityZones;
- (bool)supportsCameraPackageDetection;
- (bool)supportsCameraRecording;
- (bool)supportsCameraRecordingReachabilityNotifications;
- (bool)supportsCameraSignificantEventNotifications;
- (bool)supportsCustomMediaApplicationDestination;
- (bool)supportsEventLog;
- (bool)supportsFaceClassification;
- (bool)supportsFirmwareUpdate;
- (bool)supportsHomeHub;
- (bool)supportsLockNotificationContext;
- (bool)supportsMatterSharedAdminPairing;
- (bool)supportsMediaActions;
- (bool)supportsNaturalLighting;
- (bool)supportsResidentFirmwareUpdate;
- (bool)supportsResidentFirstAccessoryCommunication;
- (bool)supportsRouterManagement;
- (bool)supportsShortcutActions;
- (bool)supportsSiriEndpointSetup;
- (bool)supportsThreadBorderRouter;
- (bool)supportsThreadNetworkCredentialSharing;
- (bool)supportsUnifiedMediaNotifications;
- (bool)supportsWakeOnLAN;
- (bool)supportsWalletKey;

@end
