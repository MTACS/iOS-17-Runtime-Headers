
@interface ATXNotificationsSuggestion : NSObject {
    _ATXAggregateLogger * _aggdlogger;
    _ATXAppLaunchHistogram * _appHistory;
    _ATXDataStore * _db;
    NSMutableSet * _inmemorycache;
    ATXNotificationsLogger * _logger;
    _ATXAppLaunchCategoricalHistogram * _notificationsHistory;
    ATXNotificationsPriors * _notificationsPriors;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _stype;
}

+ (id)createBundleIdentifierForSuggestionWithType:(long long)arg1;
+ (id)createNotificationIdForSuggestion:(id)arg1;
+ (id)extractSuggestionTypeStringFromBundleIdentifier:(id)arg1;
+ (id)generateAppId:(id)arg1 topic:(id)arg2;
+ (bool)isSettingSuggestion:(id)arg1;

- (void).cxx_destruct;
- (bool)_checkIfInDB:(id)arg1 topic:(id)arg2;
- (bool)checkIfInDB:(id)arg1 topic:(id)arg2;
- (id)getResponses;
- (id)initWithSuggestionType:(long long)arg1;
- (id)initWithSuggestionType:(long long)arg1 notificationsHistogram:(id)arg2 applaunchHistogram:(id)arg3;
- (id)initWithSuggestionType:(long long)arg1 notificationsHistogram:(id)arg2 applaunchHistogram:(id)arg3 dataStore:(id)arg4 notificationsLogger:(id)arg5 aggdlogger:(id)arg6;
- (void)logRTTOutcomeWithBundleId:(id)arg1 topic:(id)arg2 rttOutcome:(unsigned long long)arg3;
- (id)message:(id)arg1 topic:(id)arg2 response:(long long)arg3;
- (void)resetResponses;
- (void)suggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3;

@end
