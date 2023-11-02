
@interface UNSNotificationSchedulingService : NSObject {
    NSMutableDictionary * _clients;
    UNSLocationMonitor * _locationMonitor;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationScheduleRepository * _notificationScheduleRepository;
    UNSPendingNotificationRepository * _pendingNotificationRepository;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_queue_addClientForBundleIdentifier:(id)arg1;
- (void)_queue_addPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_applicationStateDidRestore;
- (id)_queue_clientForBundleIdentifier:(id)arg1;
- (void)_queue_didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_localeDidChange;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeClientForBundleIdentifier:(id)arg1;
- (void)_queue_removePendingNotificationRecordsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeSimilarPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_timeDidChangeSignificantly;
- (id)_queue_undeliveredNotificationRequestsForBundleIdentifier:(id)arg1;
- (void)addPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)applicationStateDidRestore;
- (void)didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithNotificationRepository:(id)arg1 pendingNotificationRepository:(id)arg2 notificationScheduleRepository:(id)arg3 locationMonitor:(id)arg4;
- (void)localeDidChange;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)removeSimilarPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)timeDidChangeSignificantly;
- (id)undeliveredNotificationRecordsForBundleIdentifier:(id)arg1;

@end
