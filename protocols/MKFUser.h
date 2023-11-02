
@protocol MKFUser <MKFModel, MKFUserPublicExtensions>

@required

- (<MKFUserAccessCode> *)accessCode;
- (NSArray *)accessoriesWithListeningHistoryEnabled;
- (NSArray *)accessoriesWithMediaContentProfileEnabled;
- (NSArray *)accessoriesWithPersonalRequestsEnabled;
- (HMDAccountHandle *)accountHandle;
- (HMDAccountIdentifier *)accountIdentifier;
- (NSNumber *)activityNotificationsEnabledForPersonalRequests;
- (void)addAccessoriesWithListeningHistoryEnabledObject:(id <MKFAccessory>)arg1;
- (void)addAccessoriesWithMediaContentProfileEnabledObject:(id <MKFAccessory>)arg1;
- (void)addAccessoriesWithPersonalRequestsEnabledObject:(id <MKFAccessory>)arg1;
- (void)addBulletinConditionsObject:(id <MKFPresenceBulletinCondition>)arg1;
- (void)addBulletinRegistrationsObject:(id <MKFBulletinRegistration>)arg1;
- (void)addNotificationRegistrationsObject:(id <MKFNotificationRegistration>)arg1;
- (void)addPairedAirPlayAccessoriesObject:(id <MKFAirPlayAccessory>)arg1;
- (void)addPairedHAPAccessoriesObject:(id <MKFHAPAccessory>)arg1;
- (void)addPersonsFromPhotosObject:(id <MKFPhotosPerson>)arg1;
- (NSNumber *)allowExplicitContent;
- (NSNumber *)allowiTunesAccount;
- (NSNumber *)analysisAccessSelection;
- (NSNumber *)announceAccessLevel;
- (NSArray *)bulletinConditions;
- (NSArray *)bulletinRegistrations;
- (NSNumber *)camerasAccessLevel;
- (NSString *)changeTag;
- (<MKFBulletinRegistration> *)createBulletinRegistrationsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (<MKFAnalysisEventBulletinRegistration> *)createBulletinRegistrationsRelationOfTypeAnalysisEventBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFBulletinRegistration> *)createBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFCameraAccessModeBulletinRegistration> *)createBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFCameraReachabilityBulletinRegistration> *)createBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFCameraSignificantEventBulletinRegistration> *)createBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFCharacteristicBulletinRegistration> *)createBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFNotificationRegistration> *)createNotificationRegistrationsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (<MKFNotificationRegistrationCharacteristic> *)createNotificationRegistrationsRelationOfTypeNotificationRegistrationCharacteristicWithModelID:(NSUUID *)arg1;
- (<MKFNotificationRegistrationMediaProperty> *)createNotificationRegistrationsRelationOfTypeNotificationRegistrationMediaPropertyWithModelID:(NSUUID *)arg1;
- (MKFUserDatabaseID *)databaseID;
- (NSNumber *)dolbyAtmosEnabled;
- (<MKFUserAccessCode> *)findAccessCodeRelationWithModelID:(NSUUID *)arg1;
- (<MKFPresenceBulletinCondition> *)findBulletinConditionsRelationWithModelID:(NSUUID *)arg1;
- (<MKFAnalysisEventBulletinRegistration> *)findBulletinRegistrationsRelationOfTypeAnalysisEventBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFBulletinRegistration> *)findBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFCameraAccessModeBulletinRegistration> *)findBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFCameraReachabilityBulletinRegistration> *)findBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFCameraSignificantEventBulletinRegistration> *)findBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFCharacteristicBulletinRegistration> *)findBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(NSUUID *)arg1;
- (<MKFNotificationRegistrationCharacteristic> *)findNotificationRegistrationsRelationOfTypeNotificationRegistrationCharacteristicWithModelID:(NSUUID *)arg1;
- (<MKFNotificationRegistrationMediaProperty> *)findNotificationRegistrationsRelationOfTypeNotificationRegistrationMediaPropertyWithModelID:(NSUUID *)arg1;
- (<MKFPhotosPerson> *)findPersonsFromPhotosRelationWithModelID:(NSUUID *)arg1;
- (<MKFHome> *)home;
- (NSString *)idsMergeIdentifier;
- (<MKFOutgoingInvitation> *)invitation;
- (NSArray *)locationEvents;
- (NSNumber *)losslessMusicEnabled;
- (<MKFUserAccessCode> *)materializeOrCreateAccessCodeRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFPresenceBulletinCondition> *)materializeOrCreateBulletinConditionsRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFBulletinRegistration> *)materializeOrCreateBulletinRegistrationsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(bool*)arg3;
- (<MKFAnalysisEventBulletinRegistration> *)materializeOrCreateBulletinRegistrationsRelationOfTypeAnalysisEventBulletinRegistrationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFBulletinRegistration> *)materializeOrCreateBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFCameraAccessModeBulletinRegistration> *)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFCameraReachabilityBulletinRegistration> *)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFCameraSignificantEventBulletinRegistration> *)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFCharacteristicBulletinRegistration> *)materializeOrCreateBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFNotificationRegistration> *)materializeOrCreateNotificationRegistrationsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(bool*)arg3;
- (<MKFNotificationRegistrationCharacteristic> *)materializeOrCreateNotificationRegistrationsRelationOfTypeNotificationRegistrationCharacteristicWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFNotificationRegistrationMediaProperty> *)materializeOrCreateNotificationRegistrationsRelationOfTypeNotificationRegistrationMediaPropertyWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFPhotosPerson> *)materializeOrCreatePersonsFromPhotosRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (NSArray *)notificationRegistrations;
- (<MKFHome> *)ownedHome;
- (NSNumber *)ownerAddSceneButtonPresentedCount;
- (NSDictionary *)ownerCharacteristicAuthorizationData;
- (NSNumber *)ownerCompletedSwitchingHomesOnboardingUI;
- (NSNumber *)ownerDismissedAccessCodeOnboarding;
- (NSNumber *)ownerDismissedAccessoryFirmwareUpdateOnboarding;
- (NSNumber *)ownerDismissedAnnounceOnboarding;
- (NSNumber *)ownerDismissedCameraRecordingOnboarding;
- (NSNumber *)ownerDismissedCameraRecordingSetupBanner;
- (NSNumber *)ownerDismissedCameraUpgradeOfferBanner;
- (NSNumber *)ownerDismissedHomeTheaterOnboarding;
- (NSNumber *)ownerDismissedIdentifyVoiceOnboarding;
- (NSNumber *)ownerDismissedIdentifyVoiceSetupBanner;
- (NSNumber *)ownerDismissedNaturalLightingOnboarding;
- (NSNumber *)ownerDismissedTVViewingProfileOnboarding;
- (NSNumber *)ownerDismissedTVViewingProfileSetupBanner;
- (NSNumber *)ownerDismissedUserSplitMediaAccountWarning;
- (NSNumber *)ownerDismissedWalletKeyExpressModeOnboarding;
- (NSNumber *)ownerDismissedWelcomeUI;
- (NSNumber *)ownerHasUserSeenRMVNewLanguageNotification;
- (NSArray *)pairedAirPlayAccessories;
- (NSArray *)pairedHAPAccessories;
- (HAPPairingIdentity *)pairingIdentity;
- (NSArray *)personsFromPhotos;
- (NSUUID *)photosPersonDataZoneUUID;
- (NSNumber *)playbackInfluencesEnabled;
- (NSNumber *)presenceAuthorizationStatus;
- (NSArray *)presenceEvents;
- (NSNumber *)presenceRegionStatus;
- (NSDate *)presenceUpdateTimeStamp;
- (NSNumber *)privilege;
- (NSNumber *)remoteAccessAllowed;
- (void)removeAccessoriesWithListeningHistoryEnabledObject:(id <MKFAccessory>)arg1;
- (void)removeAccessoriesWithMediaContentProfileEnabledObject:(id <MKFAccessory>)arg1;
- (void)removeAccessoriesWithPersonalRequestsEnabledObject:(id <MKFAccessory>)arg1;
- (void)removeBulletinConditionsObject:(id <MKFPresenceBulletinCondition>)arg1;
- (void)removeBulletinRegistrationsObject:(id <MKFBulletinRegistration>)arg1;
- (void)removeNotificationRegistrationsObject:(id <MKFNotificationRegistration>)arg1;
- (void)removePairedAirPlayAccessoriesObject:(id <MKFAirPlayAccessory>)arg1;
- (void)removePairedHAPAccessoriesObject:(id <MKFHAPAccessory>)arg1;
- (void)removePersonsFromPhotosObject:(id <MKFPhotosPerson>)arg1;
- (CKRecordID *)reverseShareID;
- (CKDeviceToDeviceShareInvitationToken *)reverseShareToken;
- (void)setAccessCode:(id <MKFUserAccessCode>)arg1;
- (void)setAccountHandle:(HMDAccountHandle *)arg1;
- (void)setAccountIdentifier:(HMDAccountIdentifier *)arg1;
- (void)setActivityNotificationsEnabledForPersonalRequests:(NSNumber *)arg1;
- (void)setAllowExplicitContent:(NSNumber *)arg1;
- (void)setAllowiTunesAccount:(NSNumber *)arg1;
- (void)setAnalysisAccessSelection:(NSNumber *)arg1;
- (void)setAnnounceAccessLevel:(NSNumber *)arg1;
- (void)setCamerasAccessLevel:(NSNumber *)arg1;
- (void)setChangeTag:(NSString *)arg1;
- (void)setDolbyAtmosEnabled:(NSNumber *)arg1;
- (void)setIdsMergeIdentifier:(NSString *)arg1;
- (void)setInvitation:(id <MKFOutgoingInvitation>)arg1;
- (void)setLosslessMusicEnabled:(NSNumber *)arg1;
- (void)setOwnerAddSceneButtonPresentedCount:(NSNumber *)arg1;
- (void)setOwnerCharacteristicAuthorizationData:(NSDictionary *)arg1;
- (void)setOwnerCompletedSwitchingHomesOnboardingUI:(NSNumber *)arg1;
- (void)setOwnerDismissedAccessCodeOnboarding:(NSNumber *)arg1;
- (void)setOwnerDismissedAccessoryFirmwareUpdateOnboarding:(NSNumber *)arg1;
- (void)setOwnerDismissedAnnounceOnboarding:(NSNumber *)arg1;
- (void)setOwnerDismissedCameraRecordingOnboarding:(NSNumber *)arg1;
- (void)setOwnerDismissedCameraRecordingSetupBanner:(NSNumber *)arg1;
- (void)setOwnerDismissedCameraUpgradeOfferBanner:(NSNumber *)arg1;
- (void)setOwnerDismissedHomeTheaterOnboarding:(NSNumber *)arg1;
- (void)setOwnerDismissedIdentifyVoiceOnboarding:(NSNumber *)arg1;
- (void)setOwnerDismissedIdentifyVoiceSetupBanner:(NSNumber *)arg1;
- (void)setOwnerDismissedNaturalLightingOnboarding:(NSNumber *)arg1;
- (void)setOwnerDismissedTVViewingProfileOnboarding:(NSNumber *)arg1;
- (void)setOwnerDismissedTVViewingProfileSetupBanner:(NSNumber *)arg1;
- (void)setOwnerDismissedUserSplitMediaAccountWarning:(NSNumber *)arg1;
- (void)setOwnerDismissedWalletKeyExpressModeOnboarding:(NSNumber *)arg1;
- (void)setOwnerDismissedWelcomeUI:(NSNumber *)arg1;
- (void)setOwnerHasUserSeenRMVNewLanguageNotification:(NSNumber *)arg1;
- (void)setPairingIdentity:(HAPPairingIdentity *)arg1;
- (void)setPhotosPersonDataZoneUUID:(NSUUID *)arg1;
- (void)setPlaybackInfluencesEnabled:(NSNumber *)arg1;
- (void)setPresenceAuthorizationStatus:(NSNumber *)arg1;
- (void)setPresenceRegionStatus:(NSNumber *)arg1;
- (void)setPresenceUpdateTimeStamp:(NSDate *)arg1;
- (void)setPrivilege:(NSNumber *)arg1;
- (void)setRemoteAccessAllowed:(NSNumber *)arg1;
- (void)setReverseShareID:(CKRecordID *)arg1;
- (void)setReverseShareToken:(CKDeviceToDeviceShareInvitationToken *)arg1;
- (void)setSharePhotosFaceClassifications:(NSNumber *)arg1;
- (void)setSiriIdentifyVoiceEnabled:(NSNumber *)arg1;
- (void)setUniqueIDForAccessories:(NSNumber *)arg1;
- (void)setUserID:(NSString *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSNumber *)sharePhotosFaceClassifications;
- (NSNumber *)siriIdentifyVoiceEnabled;
- (NSArray *)triggers;
- (NSNumber *)uniqueIDForAccessories;
- (NSString *)userID;
- (NSDate *)writerTimestamp;

@end