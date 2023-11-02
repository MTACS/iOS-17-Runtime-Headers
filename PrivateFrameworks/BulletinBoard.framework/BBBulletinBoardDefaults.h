
@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain

@property (getter=isAnnounceSupportedForCarPlay, nonatomic) bool announceSupportedForCarPlay;
@property (getter=isAnnounceSupportedForHeadphones, nonatomic) bool announceSupportedForHeadphones;
@property (nonatomic) long long globalAnnounceCarPlaySetting;
@property (nonatomic) long long globalAnnounceHeadphonesSetting;
@property (nonatomic) long long globalAnnounceSetting;
@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalNotificationListDisplayStyleSetting;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (nonatomic) long long globalScheduledDeliveryShowNextSummarySetting;
@property (nonatomic) NSArray *globalScheduledDeliveryTimes;
@property (nonatomic) long long globalSpokenNotificationSetting_deprecated;
@property (getter=hasPairedVehiclesForCarPlay, nonatomic) bool pairedVehiclesForCarPlay;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
