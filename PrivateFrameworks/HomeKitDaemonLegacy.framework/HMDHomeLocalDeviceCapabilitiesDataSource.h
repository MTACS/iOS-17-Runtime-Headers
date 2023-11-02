
@interface HMDHomeLocalDeviceCapabilitiesDataSource : NSObject <HMDHomeLocalDeviceCapabilitiesDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isCompanionCapable;
@property (readonly) bool isResidentCapable;
@property (readonly) Class superclass;
@property (readonly) bool supportsAddingAccessory;
@property (readonly) bool supportsBulletinBoard;
@property (readonly) bool supportsHomeInvitation;
@property (readonly) bool supportsHomeKitDataStream;
@property (readonly) bool supportsRemoteAccess;
@property (readonly) bool supportsSiriUnsecuringActionsWithNoPasscode;
@property (readonly) bool supportsSiriUnsecuringActionsWithWatchAuth;

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
