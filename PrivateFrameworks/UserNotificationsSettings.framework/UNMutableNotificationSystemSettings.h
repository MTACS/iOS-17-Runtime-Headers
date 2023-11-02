
@interface UNMutableNotificationSystemSettings : UNNotificationSystemSettings

@property (nonatomic) long long announcementCarPlaySetting;
@property (nonatomic) long long announcementHeadphonesSetting;
@property (nonatomic) long long announcementSetting;
@property (nonatomic) long long notificationListDisplayStyleSetting;
@property (nonatomic) long long scheduledDeliverySetting;
@property (nonatomic) long long scheduledDeliveryShowNextSummarySetting;
@property (nonatomic, copy) NSArray *scheduledDeliveryTimes;
@property (nonatomic) long long showPreviewsSetting;
@property (nonatomic) long long spokenNotificationSetting;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAnnouncementCarPlaySetting:(long long)arg1;
- (void)setAnnouncementHeadphonesSetting:(long long)arg1;
- (void)setAnnouncementSetting:(long long)arg1;
- (void)setNotificationListDisplayStyleSetting:(long long)arg1;
- (void)setScheduledDeliverySetting:(long long)arg1;
- (void)setScheduledDeliveryShowNextSummarySetting:(long long)arg1;
- (void)setScheduledDeliveryTimes:(id)arg1;
- (void)setShowPreviewsSetting:(long long)arg1;
- (void)setSpokenNotificationSetting:(long long)arg1;

@end
