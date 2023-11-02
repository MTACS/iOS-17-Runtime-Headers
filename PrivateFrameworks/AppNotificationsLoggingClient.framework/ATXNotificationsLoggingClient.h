
@interface ATXNotificationsLoggingClient : NSObject <ATXNotificationsLoggingProtocol> {
    NSMutableArray * _activeSuggestionsRequests;
    _PASSimpleCoalescingTimer * _coalescingTimer;
    ATXNotificationsAggregateLogger * _logger;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_processActiveSuggestionsRequests;
- (void)activeSuggestionsWithReply:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)logNotificationDeliveryUI:(unsigned long long)arg1 notificationUUIDs:(id)arg2;
- (void)logNotificationEvent:(long long)arg1 notification:(id)arg2;
- (void)logNotificationEvent:(long long)arg1 notification:(id)arg2 reason:(unsigned long long)arg3;
- (void)logNotificationGroupEvent:(long long)arg1 eventIdentifier:(id)arg2;
- (void)logNotificationGroupEvent:(long long)arg1 eventIdentifier:(id)arg2 timestamp:(id)arg3;
- (void)logRealTimeTuningCountFrom:(unsigned long long)arg1;
- (void)logRealTimeTuningOutcome:(unsigned long long)arg1 withBundleId:(id)arg2;
- (void)logSuggestionEvent:(long long)arg1 suggestionType:(long long)arg2 suggestionIdentifier:(id)arg3 timestamp:(id)arg4;
- (void)promotingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3;
- (void)quietingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3;
- (void)suggestionForNotification:(id)arg1 reply:(id /* block */)arg2;

@end
