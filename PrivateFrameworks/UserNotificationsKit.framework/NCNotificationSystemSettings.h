
@interface NCNotificationSystemSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    unsigned long long  _listDisplayStyleSetting;
    bool  _scheduledDeliveryEnabled;
    bool  _scheduledDeliveryShowNextSummary;
    NSArray * _scheduledDeliveryTimes;
    bool  _scheduledDeliveryUninitialized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long listDisplayStyleSetting;
@property (getter=isScheduledDeliveryEnabled, nonatomic, readonly) bool scheduledDeliveryEnabled;
@property (getter=shouldScheduledDeliveryShowNextSummary, nonatomic, readonly) bool scheduledDeliveryShowNextSummary;
@property (nonatomic, readonly, copy) NSArray *scheduledDeliveryTimes;
@property (getter=isScheduledDeliveryUninitialized, nonatomic, readonly) bool scheduledDeliveryUninitialized;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit

+ (id)stringForNotificationListDisplayStyleSetting:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNotificationSystemSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isScheduledDeliveryEnabled;
- (bool)isScheduledDeliveryUninitialized;
- (unsigned long long)listDisplayStyleSetting;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)scheduledDeliveryTimes;
- (bool)shouldScheduledDeliveryShowNextSummary;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (long long)bbListDisplayStyleSettingForNCNotificationListDisplayStyleSetting:(unsigned long long)arg1;
+ (unsigned long long)listDisplayStyleSettingForBBNotificationListDisplayStyleSetting:(long long)arg1;
+ (id)notificationSystemSettingsForBBGlobalSettings:(id)arg1;
+ (id)notificationSystemSettingsForScheduledDeliveryEnabled:(bool)arg1 scheduledDeliveryUninitialized:(bool)arg2 scheduledDeliveryShowNextSummary:(bool)arg3 scheduledDeliveryTimes:(id)arg4 listDisplayStyleSetting:(unsigned long long)arg5;

@end
