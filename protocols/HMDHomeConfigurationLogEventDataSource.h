
@protocol HMDHomeConfigurationLogEventDataSource

@required

- (NSArray *)accessories;
- (NSArray *)actionSets;
- (HMDDevice *)currentDevice;
- (NSArray *)enabledResidents;
- (bool)isAccessToHomeAllowed;
- (bool)isAdminUser;
- (bool)isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isOwnerUser;
- (bool)isResidentFirstAccessoryCommunicationEnabled;
- (bool)isSiriPhraseOptionsHeySiriEnabled;
- (bool)isSiriPhraseOptionsJustSiriEnabled;
- (bool)isSmokeAlarmEnabled;
- (NSArray *)triggerOwnedActionSets;
- (NSArray *)triggers;
- (NSArray *)users;
- (NSUUID *)uuid;

@end
