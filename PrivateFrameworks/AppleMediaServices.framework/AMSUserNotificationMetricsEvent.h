
@interface AMSUserNotificationMetricsEvent : AMSMetricsEvent

@property (nonatomic, retain) NSString *displayScheduledTime;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic) bool postedSuccessfully;

+ (id)_centerForBundleId:(id)arg1;
+ (id)_propertyValueClassesForKnownProperties;
+ (id)_stringFromInteruptionLevel:(unsigned long long)arg1;
+ (id)eventForBadgingForMetricsDictionary:(id)arg1 bundleID:(id)arg2;
+ (id)eventForContentEngagementWithNotification:(id)arg1;
+ (id)eventForPostedNotification:(id)arg1;
+ (id)eventForSettingsChangedWithSettings:(id)arg1 bundleID:(id)arg2;
+ (id)eventForSettingsChangedWithSettings:(id)arg1 bundleID:(id)arg2 account:(id)arg3;
+ (id)eventForVideoPlaybackForNotification:(id)arg1;
+ (id)eventFromMetricsDictionary:(id)arg1 centerBundleId:(id)arg2;
+ (id)eventFromNotificationCenterSettings:(id)arg1 centerBundleId:(id)arg2;

- (id)_createDisplayCriteriaFromSettings:(id)arg1;
- (id)_stringFromNotificationSetting:(long long)arg1;
- (id)displayScheduledTime;
- (id)errorDescription;
- (id)initWithTopic:(id)arg1 settings:(id)arg2 notificationSettingsForTopic:(id)arg3 centerBundleId:(id)arg4;
- (bool)postedSuccessfully;
- (void)setDisplayScheduledTime:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setPostedSuccessfully:(bool)arg1;

@end
