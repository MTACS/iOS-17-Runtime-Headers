
@interface MKFCKUser : MKFCKHomeObject

@property (nonatomic, copy) NSString *accountHandle;
@property (nonatomic) long long analysisAccessSelection;
@property (nonatomic) long long announceAccessLevel;
@property (nonatomic, retain) NSSet *automations;
@property (nonatomic) long long camerasAccessLevel;
@property (nonatomic, copy) NSUUID *flags;
@property (nonatomic, retain) MKFCKHome *home;
@property (nonatomic, copy) NSString *homeAccessCode;
@property (nonatomic, copy) NSUUID *homeModelID;
@property (nonatomic, copy) NSString *idsMergeIdentifier;
@property (nonatomic, retain) MKFCKOutgoingInvitation *invitation;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, retain) MKFCKHome *ownedHome;
@property (nonatomic) bool ownerActivityNotificationsEnabledForPersonalRequests;
@property (nonatomic) long long ownerAddSceneButtonPresentedCount;
@property (nonatomic) bool ownerAllowExplicitContent;
@property (nonatomic) bool ownerAllowiTunesAccount;
@property (nonatomic, retain) NSDictionary *ownerCharacteristicAuthorizationData;
@property (nonatomic) bool ownerCompletedSwitchingHomesOnboardingUI;
@property (nonatomic) bool ownerDismissedAccessCodeOnboarding;
@property (nonatomic) bool ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (nonatomic) bool ownerDismissedAnnounceOnboarding;
@property (nonatomic) bool ownerDismissedCameraRecordingOnboarding;
@property (nonatomic) bool ownerDismissedCameraRecordingSetupBanner;
@property (nonatomic) bool ownerDismissedCameraUpgradeOfferBanner;
@property (nonatomic) bool ownerDismissedHomeTheaterOnboarding;
@property (nonatomic) bool ownerDismissedIdentifyVoiceOnboarding;
@property (nonatomic) bool ownerDismissedIdentifyVoiceSetupBanner;
@property (nonatomic) bool ownerDismissedNaturalLightingOnboarding;
@property (nonatomic) bool ownerDismissedTVViewingProfileOnboarding;
@property (nonatomic) bool ownerDismissedTVViewingProfileSetupBanner;
@property (nonatomic) bool ownerDismissedUserSplitMediaAccountWarning;
@property (nonatomic) bool ownerDismissedWalletKeyExpressModeOnboarding;
@property (nonatomic) bool ownerDismissedWelcomeUI;
@property (nonatomic) bool ownerDolbyAtmosEnabled;
@property (nonatomic) bool ownerHasUserSeenRMVNewLanguageNotification;
@property (nonatomic) bool ownerLosslessMusicEnabled;
@property (nonatomic) bool ownerPlaybackInfluencesEnabled;
@property (nonatomic) bool ownerSiriIdentifyVoiceEnabled;
@property (nonatomic, retain) HAPPairingIdentity *pairingIdentity;
@property (nonatomic, retain) NSSet *personsFromPhotos;
@property (nonatomic, copy) NSUUID *photosPersonDataZoneUUID;
@property (nonatomic) long long privilege;
@property (nonatomic) bool remoteAccessAllowed;
@property (nonatomic, retain) CKRecordID *reverseShareID;
@property (nonatomic, retain) CKDeviceToDeviceShareInvitationToken *reverseShareToken;
@property (nonatomic) bool sharePhotosFaceClassifications;
@property (nonatomic) long long uniqueIDForAccessories;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;

+ (id)fetchRequest;

- (id)_resolveSharedUserDataRootWithContext:(id)arg1;
- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)exportOwnerUserSettingsFromLocalModel:(id)arg1 context:(id)arg2;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importOwnerUserSettingsIntoLocalModel:(id)arg1 context:(id)arg2;
- (bool)importSharedUserSettingsIntoLocalModel:(id)arg1 context:(id)arg2;
- (bool)isOwner;

@end
