
@interface _EKNotificationMonitor : NSObject {
    bool  _automaticallyFaultNotifications;
    NSObject<OS_dispatch_queue> * _callbackNotificationQueue;
    NSMutableArray * _changedIDs;
    bool  _changedIDsValid;
    bool  _computeChangedNotificationSet;
    EKEventStore * _eventStore;
    id /* block */  _eventStoreGetter;
    EKTimedEventStorePurger * _eventStorePurger;
    bool  _excludeUncheckedCalendars;
    bool  _filteredByShowsNotificationsFlag;
    int  _ignoreSyncTimer;
    bool  _initialCheck;
    bool  _isExpandedCount;
    bool  _isMonitoringOnlyNotificationCount;
    CADInMemoryChangeTimestamp * _lastChangedTimestamp;
    bool  _lastExpirationTimerFireDateWasInThePast;
    NSDate * _nextFireTime;
    unsigned long long  _notificationCount;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSArray * _notificationReferences;
    bool  _pendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registerForDarwinNotifications;
    bool  _running;
    bool  _shouldInstallPersistentTimer;
    NSTimer * _syncTimer;
    PCPersistentTimer * _timer;
    bool  _useSyncIdleTimer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackNotificationQueue;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) EKTimedEventStorePurger *eventStorePurger;
@property (nonatomic, readonly) bool isMonitoringOnlyNotificationCount;
@property (nonatomic, readonly) unsigned long long notificationCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) NSArray *notificationReferences;

+ (void)addBlacklistedNotificationObjectID:(id)arg1;
+ (id)blacklistedNotificationQueue;
+ (id)blacklistedRowIDs;
+ (id)logHandle;
+ (id)requestedDarwinNotifications;

- (void).cxx_destruct;
- (void)_addRemovedOrAddedObjectIDsTo:(id)arg1 oldNotifications:(id)arg2 newNotifications:(id)arg3;
- (void)_alertPrefChanged;
- (void)_databaseChanged;
- (id)_eventStore;
- (void)_eventStoreChanged;
- (void)_eventStoreChangedNotification:(id)arg1;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)arg1 earliestExpiringNotification:(id*)arg2;
- (id)_initWithOptions:(long long)arg1 eventStore:(id)arg2 eventStoreGetter:(id /* block */)arg3;
- (void)_killSyncTimer:(id)arg1;
- (void)_killTimer;
- (void)_notificationCountChangedExternally;
- (void)_resetSyncTimer;
- (void)_syncDidEnd:(id)arg1;
- (void)_syncDidEndExternally;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timerFired;
- (void)_updateTimerFireDate:(id)arg1;
- (void)adjust;
- (void)attemptReload;
- (void)attemptReloadSynchronously:(bool)arg1;
- (id)callbackNotificationQueue;
- (void)dealloc;
- (id)effectiveCallbackQueue;
- (id)eventStore;
- (id)eventStorePurger;
- (void)handleDarwinNotification:(id)arg1;
- (id)init;
- (id)initWithOptions:(long long)arg1;
- (id)initWithOptions:(long long)arg1 eventStore:(id)arg2;
- (id)initWithOptions:(long long)arg1 eventStoreGetter:(id /* block */)arg2;
- (bool)isMonitoringOnlyNotificationCount;
- (unsigned long long)notificationCount;
- (id)notificationQueue;
- (id)notificationReferences;
- (void)setCallbackNotificationQueue:(id)arg1;
- (void)start;
- (void)stop;
- (void)trackChangesInEventStore;

@end
