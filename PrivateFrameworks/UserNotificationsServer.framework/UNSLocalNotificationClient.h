
@interface UNSLocalNotificationClient : NSObject <UNSLocationMonitorObserver> {
    NSString * _bundleIdentifier;
    NSMutableArray * _lazy_pendingNotificationsAwaitingDelivery;
    PCPersistentTimer * _localNotificationTimer;
    UNSLocationMonitor * _locationMonitor;
    bool  _monitoringLocaleAndTimeChanges;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationScheduleRepository * _notificationScheduleRepository;
    UNSPendingNotificationRepository * _pendingNotificationRepository;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dateFormatter;
- (void)_fireNotification:(id)arg1;
- (void)_invalidateNotificationRecordTimersAndRegionMonitors;
- (void)_invalidatePendingNotificationRecordRegionMonitors;
- (void)_invalidatePendingNotificationRecordTimers;
- (id)_lastLocalNotificationFireDate;
- (id)_pendingNotificationRecords;
- (void)_queue_triggerDidFireForDate:(id)arg1;
- (void)_queue_triggerDidFireForRegion:(id)arg1;
- (void)_queue_triggerDidFireForTimer:(id)arg1;
- (id)_sanitizeNotificationRecords:(id)arg1;
- (void)_setLastLocalNotificationFireDate:(id)arg1;
- (void)_setMonitoredRegions:(id)arg1;
- (void)_setPendingNotificationRecords:(id)arg1;
- (void)_setRequestDateForPendingNotificationRecords:(id)arg1;
- (void)_updateRegionMonitorsForPendingNotificationRecords:(id)arg1;
- (void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)arg1;
- (void)_updateTimersForPendingNotificationRecords:(id)arg1;
- (void)addPendingNotificationRecords:(id)arg1;
- (void)dealloc;
- (void)handleApplicationStateRestore;
- (void)handleLocaleChange;
- (void)handleSignificantTimeChange;
- (id)initWithNotificationRepository:(id)arg1 pendingNotificationRepository:(id)arg2 notificationScheduleRepository:(id)arg3 locationMonitor:(id)arg4 bundleIdentifier:(id)arg5 queue:(id)arg6;
- (void)invalidate;
- (void)locationMonitor:(id)arg1 triggerDidFireForRegion:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)pendingNotificationRecords;
- (void)removeAllPendingNotificationRecords;
- (void)removePendingNotificationRecords:(id)arg1;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)arg1;
- (void)setPendingNotificationRecords:(id)arg1;
- (id)undeliveredNotificationRecords;

@end
