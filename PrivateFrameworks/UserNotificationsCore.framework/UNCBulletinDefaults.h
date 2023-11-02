
@interface UNCBulletinDefaults : BSAbstractDefaultDomain <UNCBulletinDefaultsInterface>

@property (getter=isAnnounceSupportedForCarPlay, nonatomic) bool announceSupportedForCarPlay;
@property (getter=isAnnounceSupportedForHeadphones, nonatomic) bool announceSupportedForHeadphones;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long globalAnnounceCarPlaySetting;
@property (nonatomic) long long globalAnnounceHeadphonesSetting;
@property (nonatomic) long long globalAnnounceSetting;
@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalNotificationListDisplayStyleSetting;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (nonatomic) long long globalScheduledDeliveryShowNextSummarySetting;
@property (nonatomic) NSArray *globalScheduledDeliveryTimes;
@property (nonatomic) long long globalSpokenNotificationSetting_deprecated;
@property (readonly) unsigned long long hash;
@property (getter=hasPairedVehiclesForCarPlay, nonatomic) bool pairedVehiclesForCarPlay;
@property (readonly) Class superclass;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
