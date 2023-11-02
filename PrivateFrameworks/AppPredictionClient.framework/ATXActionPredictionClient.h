
@interface ATXActionPredictionClient : NSObject <ATXActionPredictionInterface> {
    NSString * _cacheBasePath;
    ATXCacheReader * _cacheReader;
    ATXEngagementRecordManager * _engagementRecordManager;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSXPCConnection * _xpcConnection;
}

- (void).cxx_destruct;
- (id)_atxActionFromProactiveSuggestion:(id)arg1;
- (id)actionPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2;
- (id)atxActionResponseFromBlendingActionPredictionCacheForConsumerSubType:(unsigned char)arg1 limit:(int)arg2;
- (void)dealloc;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(id /* block */)arg6;
- (void)getActionPredictionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 limit:(unsigned long long)arg6 reply:(id /* block */)arg7;
- (id)init;
- (id)initWithCacheBasePath:(id)arg1;
- (void)removeActionPredictionNotificationsMatchingSuggestion:(id)arg1 reply:(id /* block */)arg2;
- (void)shouldDisplayDailyRoutineForContext:(id)arg1 reply:(id /* block */)arg2;

@end
