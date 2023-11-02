
@interface HDHealthAppDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    NSUserDefaults * _healthAppSharedUserDefaults;
    HDProfile * _profile;
    HDCloudSyncManager * _unitTest_cloudSyncManager;
    HDDeviceContextStoreManager * _unitTest_deviceContextStoreManager;
    UNUserNotificationCenter * _unitTest_userNotificationCenter;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSUserDefaults *healthAppSharedUserDefaults;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;
@property (nonatomic) HDCloudSyncManager *unitTest_cloudSyncManager;
@property (nonatomic) HDDeviceContextStoreManager *unitTest_deviceContextStoreManager;
@property (nonatomic) UNUserNotificationCenter *unitTest_userNotificationCenter;

- (void).cxx_destruct;
- (long long)_approximateDaysSinceLastAppOpen;
- (bool)_areHealthAppNotificationsAuthorized;
- (bool)_areTrendNotificationsEnabled;
- (id)_cloudSyncManager;
- (id)_deviceContextStoreManager;
- (long long)_floorInteger:(int)arg1 toSignificantFigures:(int)arg2;
- (id)_isHealthAppOnboardedString;
- (id)_supportsSecureContainer;
- (id)_userNotificationCenter;
- (id)_welcomeFlowCompletedDate;
- (id)eventName;
- (id)healthAppSharedUserDefaults;
- (id)initWithProfile:(id)arg1;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (void)setUnitTest_cloudSyncManager:(id)arg1;
- (void)setUnitTest_deviceContextStoreManager:(id)arg1;
- (void)setUnitTest_userNotificationCenter:(id)arg1;
- (id)unitTest_cloudSyncManager;
- (id)unitTest_deviceContextStoreManager;
- (id)unitTest_userNotificationCenter;

@end
