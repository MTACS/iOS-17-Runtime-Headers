
@interface HDNotificationManager : NSObject <HDDiagnosticObject, HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider> {
    long long  _bundle;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSDate * _lastNotificationDate;
    HKObserverSet * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (nonatomic, readonly) bool areHealthCriticalAlertsAuthorized;
@property (nonatomic, readonly) bool areHealthNotificationsAuthorized;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UNUserNotificationCenter *userNotificationCenter;

- (void).cxx_destruct;
- (id)_aggregateBadge;
- (id)_badgeForDomain:(long long)arg1 error:(id*)arg2;
- (id)_resourceQueue_badgeForDomain:(long long)arg1 error:(id*)arg2;
- (void)addNotificationObserver:(id)arg1;
- (bool)areHealthCriticalAlertsAuthorized;
- (bool)areHealthNotificationsAuthorized;
- (void)badgeForDomain:(long long)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (bool)incrementBadgeForDomain:(long long)arg1 count:(long long)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1 bundle:(long long)arg2;
- (void)postCompanionUserNotificationOfType:(long long)arg1 completion:(id /* block */)arg2;
- (void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(id /* block */)arg4;
- (void)postNotificationWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 accessoryImageName:(id)arg6 header:(id)arg7 completion:(id /* block */)arg8;
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 url:(id)arg6 accessoryImageName:(id)arg7 header:(id)arg8 completion:(id /* block */)arg9;
- (void)receivedCompanionUserNotificationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)removeDeliveredNotificationsWithCategoryIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (void)removePendingNotificationsWithIdentifiers:(id)arg1;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(id /* block */)arg3;
- (id)userNotificationCenter;

@end
