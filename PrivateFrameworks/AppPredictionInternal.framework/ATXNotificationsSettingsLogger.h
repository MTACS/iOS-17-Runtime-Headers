
@interface ATXNotificationsSettingsLogger : NSObject

+ (id)getAppGenreFromBundleId:(id)arg1;

- (id)convertToPBFormat:(id)arg1 setting:(id)arg2;
- (id)createPBSettingForBundleID:(id)arg1 settings:(id)arg2;
- (id)getAggregatedData:(id)arg1 totalApps:(int)arg2;
- (id)getAppUsageDataForBundleID:(id)arg1;
- (double)getSamplingRate;
- (void)logNotificationSettingsWithActivity:(id)arg1;
- (id)retrieveLogWithActivity:(id)arg1;
- (id)retrieveSettingsForBundleIDs:(id)arg1;
- (id)wrapLog:(id)arg1;

@end
