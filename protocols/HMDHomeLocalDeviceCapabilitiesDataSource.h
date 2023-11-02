
@protocol HMDHomeLocalDeviceCapabilitiesDataSource <NSObject>

@required

- (bool)isCompanionCapable;
- (bool)isResidentCapable;
- (bool)supportsAddingAccessory;
- (bool)supportsBulletinBoard;
- (bool)supportsHomeInvitation;
- (bool)supportsHomeKitDataStream;
- (bool)supportsRemoteAccess;
- (bool)supportsSiriUnsecuringActionsWithNoPasscode;
- (bool)supportsSiriUnsecuringActionsWithWatchAuth;

@end
