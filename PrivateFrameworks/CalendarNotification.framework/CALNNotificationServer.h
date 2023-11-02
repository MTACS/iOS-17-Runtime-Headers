
@interface CALNNotificationServer : NSObject <CADModule, CALNNotificationManager, CALNUserNotificationCenterDelegate> {
    bool  _active;
    <CALNAnalyticsHandler> * _analyticsHandler;
    bool  _isProtectedDataAvailable;
    NSMutableDictionary * _notificationSourceMap;
    <CALNNotificationStorage> * _storage;
    <CALNUserNotificationCenter> * _userNotificationCenter;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) <CALNAnalyticsHandler> *analyticsHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isProtectedDataAvailable;
@property (nonatomic, retain) NSMutableDictionary *notificationSourceMap;
@property (nonatomic, readonly) NSArray *notificationSources;
@property (nonatomic, retain) <CALNNotificationStorage> *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CALNUserNotificationCenter> *userNotificationCenter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_activate;
- (void)_addRecord:(id)arg1;
- (void)_deactivate;
- (void)_didSetNotificationSources:(id)arg1;
- (id)_fetchRecordsWithSourceIdentifier:(id)arg1;
- (id)_notificationRecordResponseFromNotificationResponse:(id)arg1;
- (id)_notificationRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (id)_notificationSourceMapWithNotificationSources:(id)arg1;
- (void)_removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)_updateRecord:(id)arg1;
- (void)aboutToPostNotification:(id)arg1;
- (void)activate;
- (void)addRecord:(id)arg1;
- (id)analyticsHandler;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (id)fetchRecordsWithSourceIdentifier:(id)arg1;
- (id)initWithUserNotificationCenter:(id)arg1 storage:(id)arg2 analyticsHandler:(id)arg3 deviceLockObserver:(id)arg4;
- (bool)isActive;
- (bool)isProtectedDataAvailable;
- (id)notificationSourceForSourceIdentifier:(id)arg1;
- (id)notificationSourceMap;
- (id)notificationSources;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)setActive:(bool)arg1;
- (void)setIsProtectedDataAvailable:(bool)arg1;
- (void)setNotificationSourceMap:(id)arg1;
- (void)setNotificationSources:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (void)updateRecord:(id)arg1;
- (id)userNotificationCenter;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)workQueue;

@end
