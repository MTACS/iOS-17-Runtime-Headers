
@interface BBGlobalSettings : NSObject <BLTRemoteGlobalSettingsProvider, NSCopying, NSSecureCoding> {
    long long  _globalAnnounceCarPlaySetting;
    long long  _globalAnnounceHeadphonesSetting;
    long long  _globalAnnounceSetting;
    long long  _globalContentPreviewSetting;
    long long  _globalNotificationListDisplayStyleSetting;
    long long  _globalScheduledDeliverySetting;
    long long  _globalScheduledDeliveryShowNextSummarySetting;
    NSArray * _globalScheduledDeliveryTimes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long globalAnnounceCarPlaySetting;
@property (nonatomic) long long globalAnnounceHeadphonesSetting;
@property (nonatomic) long long globalAnnounceSetting;
@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalNotificationListDisplayStyleSetting;
@property (nonatomic, readonly) long long globalScheduledDeliverySetting;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (nonatomic) long long globalScheduledDeliveryShowNextSummarySetting;
@property (nonatomic, copy) NSArray *globalScheduledDeliveryTimes;
@property (nonatomic, readonly) long long globalSpokenNotificationSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)globalAnnounceCarPlaySetting;
- (long long)globalAnnounceHeadphonesSetting;
- (long long)globalAnnounceSetting;
- (long long)globalContentPreviewSetting;
- (long long)globalNotificationListDisplayStyleSetting;
- (long long)globalScheduledDeliverySetting;
- (long long)globalScheduledDeliveryShowNextSummarySetting;
- (id)globalScheduledDeliveryTimes;
- (long long)globalSpokenNotificationSetting;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentPreviewSetting:(long long)arg1 announceSetting:(long long)arg2 announceHeadphonesSetting:(long long)arg3 announceCarPlaySetting:(long long)arg4 scheduledDeliverySetting:(long long)arg5 scheduledDeliveryTimes:(id)arg6 scheduledDeliveryShowNextSummarySetting:(long long)arg7 notificationListDisplayStyleSetting:(long long)arg8;
- (bool)isEqual:(id)arg1;
- (void)setGlobalAnnounceCarPlaySetting:(long long)arg1;
- (void)setGlobalAnnounceHeadphonesSetting:(long long)arg1;
- (void)setGlobalAnnounceSetting:(long long)arg1;
- (void)setGlobalContentPreviewSetting:(long long)arg1;
- (void)setGlobalNotificationListDisplayStyleSetting:(long long)arg1;
- (void)setGlobalScheduledDeliverySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryTimes:(id)arg1;

@end
