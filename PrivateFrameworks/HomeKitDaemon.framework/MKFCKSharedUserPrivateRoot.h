
@interface MKFCKSharedUserPrivateRoot : MKFCKSharedUserData

@property (nonatomic) long long addSceneButtonPresentedCount;
@property (nonatomic, retain) NSDictionary *characteristicAuthorizationData;
@property (nonatomic) bool completedSwitchingHomesOnboardingUI;
@property (nonatomic) bool dismissedAccessCodeOnboarding;
@property (nonatomic) bool dismissedAccessoryFirmwareUpdateOnboarding;
@property (nonatomic) bool dismissedAnnounceOnboarding;
@property (nonatomic) bool dismissedCameraRecordingOnboarding;
@property (nonatomic) bool dismissedCameraRecordingSetupBanner;
@property (nonatomic) bool dismissedCameraUpgradeOfferBanner;
@property (nonatomic) bool dismissedHomeTheaterOnboarding;
@property (nonatomic) bool dismissedIdentifyVoiceOnboarding;
@property (nonatomic) bool dismissedIdentifyVoiceSetupBanner;
@property (nonatomic) bool dismissedNaturalLightingOnboarding;
@property (nonatomic) bool dismissedTVViewingProfileOnboarding;
@property (nonatomic) bool dismissedTVViewingProfileSetupBanner;
@property (nonatomic) bool dismissedUserSplitMediaAccountWarning;
@property (nonatomic) bool dismissedWalletKeyExpressModeOnboarding;
@property (nonatomic) bool dismissedWelcomeUI;
@property (nonatomic) bool hasUserSeenRMVNewLanguageNotification;

+ (unsigned long long)cloudStoreTypes;
+ (id)createWithHomeModelID:(id)arg1 persistentStore:(id)arg2 context:(id)arg3;
+ (id)fetchRequest;
+ (id)rootKeyPath;

@end
