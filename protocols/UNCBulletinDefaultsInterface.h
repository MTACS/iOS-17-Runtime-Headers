
@protocol UNCBulletinDefaultsInterface <NSObject>

@required

- (long long)globalAnnounceCarPlaySetting;
- (long long)globalAnnounceHeadphonesSetting;
- (long long)globalAnnounceSetting;
- (long long)globalContentPreviewSetting;
- (long long)globalNotificationListDisplayStyleSetting;
- (long long)globalScheduledDeliverySetting;
- (long long)globalScheduledDeliveryShowNextSummarySetting;
- (NSArray *)globalScheduledDeliveryTimes;
- (long long)globalSpokenNotificationSetting_deprecated;
- (bool)hasPairedVehiclesForCarPlay;
- (bool)isAnnounceSupportedForCarPlay;
- (bool)isAnnounceSupportedForHeadphones;
- (void)setAnnounceSupportedForCarPlay:(bool)arg1;
- (void)setAnnounceSupportedForHeadphones:(bool)arg1;
- (void)setGlobalAnnounceCarPlaySetting:(long long)arg1;
- (void)setGlobalAnnounceHeadphonesSetting:(long long)arg1;
- (void)setGlobalAnnounceSetting:(long long)arg1;
- (void)setGlobalContentPreviewSetting:(long long)arg1;
- (void)setGlobalNotificationListDisplayStyleSetting:(long long)arg1;
- (void)setGlobalScheduledDeliverySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryTimes:(NSArray *)arg1;
- (void)setGlobalSpokenNotificationSetting_deprecated:(long long)arg1;
- (void)setPairedVehiclesForCarPlay:(bool)arg1;

@end
