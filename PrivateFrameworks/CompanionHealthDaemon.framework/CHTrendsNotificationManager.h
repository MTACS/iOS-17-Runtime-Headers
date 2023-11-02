
@interface CHTrendsNotificationManager : NSObject <HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    HDKeyValueDomain * _keyValueDomain;
    HDProfile * _profile;
    HDActivitySummaryBuilder * _summaryBuilder;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDKeyValueDomain *keyValueDomain;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) HDActivitySummaryBuilder *summaryBuilder;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

- (void).cxx_destruct;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)initWithProfile:(id)arg1;
- (id)keyValueDomain;
- (long long)notificationDelayNumberOfMinutes;
- (void)notificationDidSendSuccessfully;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)protectedDataBecameAvailable;
- (void)sendNotificationIfAllowed;
- (void)sendNotificationWithCompletion:(id /* block */)arg1;
- (void)setKeyValueDomain:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSummaryBuilder:(id)arg1;
- (void)setUserNotificationCenter:(id)arg1;
- (id)summaryBuilder;
- (id)userNotificationCenter;

@end
