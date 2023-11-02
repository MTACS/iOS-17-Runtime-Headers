
@interface WFTriggerRegistrar : NSObject {
    WFBiomeListener * _biomeListener;
    WFCoreDuetListener * _coreDuetListener;
    <WFDatabaseProvider> * _databaseProvider;
    SwiftVCDaemonXPCEventHandler * _eventHandler;
    WFTriggerEventQueue * _eventQueue;
    NSObject<OS_dispatch_queue> * _queue;
    WFTriggerNotificationScheduler * _scheduler;
    WFTriggerBootManager * _triggerBootManager;
}

@property (nonatomic, readonly) WFBiomeListener *biomeListener;
@property (nonatomic, readonly) WFCoreDuetListener *coreDuetListener;
@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (nonatomic, readonly) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (nonatomic, readonly) WFTriggerEventQueue *eventQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) WFTriggerNotificationScheduler *scheduler;
@property (nonatomic, readonly) WFTriggerBootManager *triggerBootManager;

- (void).cxx_destruct;
- (id)biomeListener;
- (id)coreDuetListener;
- (id)databaseProvider;
- (void)dealloc;
- (void)deleteTriggerWithIdentifier:(id)arg1 allowedDeletionClasses:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deviceDidUnlockForFirstTime;
- (id)eventHandler;
- (id)eventQueue;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(bool)arg2 eventInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(id /* block */)arg1;
- (void)handleRemovedIgnoredNotifications:(id)arg1;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 userNotificationManager:(id)arg3;
- (id)queue;
- (void)queue_registerConfiguredTrigger:(id)arg1 completion:(id /* block */)arg2;
- (void)queue_unregisterConfiguredTrigger:(id)arg1;
- (void)queue_unregisterConfiguredTriggerWithIdentifier:(id)arg1 triggerBacking:(long long)arg2;
- (void)registerAllTriggersWithCompletion:(id /* block */)arg1;
- (void)registerTriggerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)scheduler;
- (void)timeChangeDidOccur;
- (void)timezoneChangeDidOccur;
- (long long)triggerBackingForConfiguredTrigger:(id)arg1;
- (id)triggerBootManager;
- (id)unableToLoadDatabaseErrorWithUnderlyingError:(id)arg1;
- (void)unregisterAllTriggers;
- (void)unregisterTriggerWithIdentifier:(id)arg1 triggerBacking:(long long)arg2;

@end
