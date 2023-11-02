
@interface WFTriggerBootManager : NSObject <UNUserNotificationCenterDelegate> {
    <WFDatabaseProvider> * _databaseProvider;
    UNUserNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
    WFTriggerManager * _triggerManager;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFTriggerManager *triggerManager;

+ (id)automationsEnabledFileURL;
+ (id)category;
+ (void)clearDeliveredNotificationsWithUserNotificationCenter:(id)arg1;
+ (bool)createMarkerFileIfNeeded;
+ (bool)deleteMarkerFile;
+ (bool)markerFileExists;
+ (void)registerForNotificationRemovalWithUserNotificationCenter:(id)arg1 scheduleIfNeeded:(bool)arg2;

- (void).cxx_destruct;
- (bool)canRunAutomations;
- (void)configuredTriggersDidChange:(id)arg1;
- (bool)createFirstUnlockTimeFile;
- (id)databaseProvider;
- (void)deviceWasUnlockedForTheFirstTime;
- (id)firstUnlockDate;
- (id)firstUnlockTimeURL;
- (id)initWithDatabaseProvider:(id)arg1;
- (id)notificationCenter;
- (id)notificationContentForDeviceWithKnownUnlockedState:(bool)arg1;
- (void)postNotificationWithUserNotificationCenterIfNecessary:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (void)registerForInitialBootXPCActivityWithUserNotificationCenterIfNeeded:(id)arg1;
- (void)replaceNotificationContentWithUpdatedTitleIfNeeded;
- (id)runningThresholdDate;
- (void)setNotificationCenter:(id)arg1;
- (void)setTriggerManager:(id)arg1;
- (bool)shouldCreateMarkerFileWithConfiguredTriggers:(id)arg1;
- (void)start;
- (id)triggerManager;
- (bool)triggerRunningTimeoutHasPassed;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)willRunAutomations;

@end
