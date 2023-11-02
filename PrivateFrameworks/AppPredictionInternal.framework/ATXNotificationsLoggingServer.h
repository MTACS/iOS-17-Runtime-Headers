
@interface ATXNotificationsLoggingServer : NSObject <ATXNotificationsLoggingProtocol, NSXPCListenerDelegate, UNUserNotificationCenterDelegate> {
    _ATXAggregateLogger * _aggdlogger;
    ATXBBNotificationManager * _bbNotificationManager;
    <_CDLocalContext> * _context;
    ATXNotificationContextManager * _contextmanager;
    ATXNotificationsDedupeTracker * _dedupetracker;
    NSObject<OS_dispatch_queue> * _donationQueue;
    <_DKKnowledgeSaving><_DKKnowledgeDeleting> * _duetstorer;
    NSXPCListener * _listener;
    ATXModeAppUsageManager * _modeAppUsageManager;
    ATXNotificationDeliverySuggestionManager * _notificationDeliverySuggestionManager;
    ATXNotificationsRecorderPermanentStore * _recorder;
    NSMutableSet * _registrations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createPortraitNotificationWithNotificationInterface:(id)arg1;
- (void)_donateNotificationToPortraitWithNotificationsInterface:(id)arg1;
- (void)_logEventToCoreDuet:(long long)arg1 forNotificationId:(id)arg2 timestamp:(id)arg3;
- (void)activeSuggestionsWithReply:(id /* block */)arg1;
- (id)createMetadataForSuggestion:(id)arg1 andType:(long long)arg2;
- (id)duetValueType;
- (void)getAppUsageDataFromStartDate:(id)arg1 reply:(id /* block */)arg2;
- (id)getDuetMetadataFromNotification:(id)arg1 metadata:(id)arg2;
- (id)getDuetStream;
- (id)getLockscreenBundleIds;
- (id)getSuggestionResponses;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)logAppLaunchEvent:(id)arg1 timestamp:(id)arg2;
- (void)logEvent:(long long)arg1 forNotificationId:(id)arg2 timestamp:(id)arg3 withReply:(id /* block */)arg4;
- (void)logNotification:(id)arg1 withNotificationId:(id)arg2 timestamp:(id)arg3;
- (void)logNotificationDeliveryUI:(unsigned long long)arg1 notificationUUIDs:(id)arg2;
- (void)logNotificationEvent:(long long)arg1 notification:(id)arg2;
- (void)logNotificationEvent:(long long)arg1 notification:(id)arg2 reason:(unsigned long long)arg3;
- (void)logNotificationGroupEvent:(long long)arg1 eventIdentifier:(id)arg2;
- (void)logNotificationGroupEvent:(long long)arg1 eventIdentifier:(id)arg2 timestamp:(id)arg3;
- (void)logNotificationToCoreDuet:(id)arg1 withNotificationId:(id)arg2 timestamp:(id)arg3;
- (void)logNotificationWithMetadata:(id)arg1 withNotificationId:(id)arg2 timestamp:(id)arg3;
- (void)logRealTimeTuningOutcome:(unsigned long long)arg1 withBundleId:(id)arg2;
- (void)logSuggestionEvent:(long long)arg1 suggestionType:(long long)arg2 suggestionIdentifier:(id)arg3 timestamp:(id)arg4;
- (void)logToCoreDuet:(id)arg1 identifier:(id)arg2 timestamp:(id)arg3;
- (void)promotingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3;
- (void)quietingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3;
- (void)registerForAppChange;
- (void)resetNotificationsHistory;
- (void)resetSuggestionResponses;
- (void)suggestionForNotification:(id)arg1 reply:(id /* block */)arg2;
- (void)triggerReplay:(id /* block */)arg1;

@end
