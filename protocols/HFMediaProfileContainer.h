
@protocol HFMediaProfileContainer <HMMediaObject, HFHomeKitSettingsVendor, HFAccessoryVendor, HFStateDumpBuildable, HFReorderableHomeKitObject, HFFavoritable, HFHomeStatusVisible, HFShowInHomeDashboard, HFRoomContextProviding, HFSymptomsVendor, HFSymptomsHandlerVendor, HFSymptomFixableObject, HFServiceNameComponentsProviding>

@required

- (ACAccount *)hf_appleMusicCurrentLoggedInAccount;
- (NSString *)hf_appleMusicCurrentLoggedInAccountDSID;
- (HMAccessory *)hf_backingAccessory;
- (NSString *)hf_categoryCapitalizedLocalizedDescription;
- (NSString *)hf_categoryLowercaseLocalizedDescription;
- (<HMMediaDestination> *)hf_destination;
- (NSSet *)hf_deviceIdentifiers;
- (NSSet *)hf_fakeDebugSymptoms;
- (NAFuture *)hf_fetchLog:(NSString *)arg1 timeout:(double)arg2;
- (NAFuture *)hf_fetchLogListWithTimeout:(double)arg1;
- (bool)hf_homePodIsCapableOfShowingSplitAccountError;
- (NAFuture *)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;
- (bool)hf_homePodSupportsMultiUser;
- (NAFuture *)hf_homePodSupportsMultiUserLanguage;
- (NAFuture *)hf_identify;
- (NSString *)hf_idsDeviceIdentifierWithError:(id*)arg1;
- (bool)hf_isAccessorySettingsReachable;
- (bool)hf_isAppleMusicReachable;
- (bool)hf_isCurrentAccessory;
- (NAFuture *)hf_isEitherHomePodMediaAccountOrHomeMediaAccountPresent;
- (bool)hf_isReachable;
- (NSString *)hf_mediaRouteIdentifier;
- (<HFMediaValueSource> *)hf_mediaValueSource;
- (HMUser *)hf_preferredMediaUser;
- (unsigned long long)hf_preferredUserSelectionType;
- (NSString *)hf_prettyDescription;
- (bool)hf_showsAudioSettings;
- (HFSiriLanguageOptionsManager *)hf_siriLanguageOptionsManager;
- (bool)hf_supportsHomeTheater;
- (bool)hf_supportsMediaActions;
- (bool)hf_supportsMultiUser;
- (bool)hf_supportsMusicAlarm;
- (bool)hf_supportsPreferredMediaUser;
- (bool)hf_supportsSoftwareUpdate;
- (bool)hf_supportsStereoPairing;
- (NSSet *)mediaProfiles;
- (HMMediaSession *)mediaSession;

@end
