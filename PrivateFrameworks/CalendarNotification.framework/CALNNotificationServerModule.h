
@interface CALNNotificationServerModule : NSObject <CADModule> {
    CALNCalendarAppBadgeUpdater * _calendarAppBadgeUpdater;
    CALNNotificationServer * _calendarNotificationServer;
    CALNNotificationStorageWrapper * _calendarStorageWrapper;
    EKEphemeralCacheEventStoreProvider * _eventStoreProvider;
    CALNNotificationIconCache * _iconCache;
    <CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider><CalIconProvider> * _iconProvider;
    CALNInboxNotificationMonitor * _inboxNotificationMonitor;
    EKEventStore * _lastCreatedEventStore;
    NSArray * _modules;
    CALNNotificationSourceRefresher * _notificationSourceRefresher;
    CALNSchedulingSnoozeUpdateTimer * _snoozeUpdateTimer;
    CALNTriggeredEventNotificationSource * _triggeredEventNotificationSource;
}

@property (nonatomic, readonly) CALNCalendarAppBadgeUpdater *calendarAppBadgeUpdater;
@property (nonatomic, readonly) CALNNotificationServer *calendarNotificationServer;
@property (nonatomic, readonly) CALNNotificationStorageWrapper *calendarStorageWrapper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALNNotificationIconCache *iconCache;
@property (nonatomic, readonly) <CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider><CalIconProvider> *iconProvider;
@property (nonatomic, readonly) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (nonatomic, readonly) NSArray *modules;
@property (nonatomic, readonly) CALNNotificationSourceRefresher *notificationSourceRefresher;
@property (nonatomic, readonly) CALNSchedulingSnoozeUpdateTimer *snoozeUpdateTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CALNTriggeredEventNotificationSource *triggeredEventNotificationSource;

+ (id)_createNotificationStorageAtPath:(id)arg1 protected:(bool)arg2;
+ (id)_createTimeToLeaveRefreshStorageAtPath:(id)arg1;
+ (id)_createTriggeredEventNotificationDataStorageAtPath:(id)arg1 protected:(bool)arg2;
+ (id)_filesToMigrate;
+ (void)_migrateNotificationFiles;
+ (void)_migrateNotificationFilesFromDirectory:(id)arg1 toDirectory:(id)arg2;
+ (id)_notificationStoragePathWithName:(id)arg1;
+ (id)_protectedCalendarNotificationStorage;
+ (id)_protectedTriggeredEventNotificationDataStorage;
+ (void)_setProtectedClassForStorageAtPath:(id)arg1;
+ (id)_timeToLeaveRefreshStorage;
+ (id)_timeToLeaveRefreshStoragePathWithName:(id)arg1;
+ (id)_triggeredEventNotificationDataStoragePathWithName:(id)arg1;
+ (id)_unprotectedCalendarNotificationStorage;
+ (id)_unprotectedTriggeredEventNotificationDataStorage;

- (void).cxx_destruct;
- (id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7;
- (id)_createNotificationServerWithUserNotificationCenter:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7;
- (id)_createNotificationSourcesWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 inboxNotificationProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7;
- (void)_registerSettingsCaptureHandlers;
- (void)_reloadNotificationRecords:(id)arg1 forNotificationServer:(id)arg2;
- (void)_reloadNotificationsAfterFirstUnlock;
- (void)_reloadNotificationsFromUnprotectedStorage:(id)arg1 intoProtectedStorage:(id)arg2 withStorageWrapper:(id)arg3 forNotificationServer:(id)arg4;
- (void)_reloadTriggeredEventNotificationData;
- (void)_removeNotificationsFromUnprotectedStorage:(id)arg1;
- (void)_updateLocaleReloadIfDifferent:(bool)arg1;
- (void)_updateSourceClientIdentifiersIfNeeded;
- (void)activate;
- (id)calendarAppBadgeUpdater;
- (id)calendarNotificationServer;
- (id)calendarStorageWrapper;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (id)iconCache;
- (id)iconProvider;
- (id)inboxNotificationMonitor;
- (id)init;
- (id)modules;
- (id)notificationSourceRefresher;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)refreshEventStoreInResponseToDatabaseChangeNotification:(id)arg1;
- (id)snoozeUpdateTimer;
- (id)triggeredEventNotificationSource;
- (void)updateIconsToNewVersionIfNeeded;

@end
