
@protocol ATXActionPredictionInterface

@required

- (void)getActionPredictionsForCandidateBundleIdentifiers:(void *)arg1 candidateActionTypes:(void *)arg2 consumerType:(void *)arg3 consumerSubType:(void *)arg4 limit:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSArray *, NSArray *, unsigned long long, unsigned char, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXActionResponse *, NSError *, void*
- (void)getActionPredictionsForContext:(void *)arg1 includeBundleIds:(void *)arg2 excludeBundleIds:(void *)arg3 includeActionTypes:(void *)arg4 excludeActionTypes:(void *)arg5 limit:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 13: ATXContext *, NSArray *, NSArray *, NSArray *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXActionResponse *, NSError *, void*
- (void)removeActionPredictionNotificationsMatchingSuggestion:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: ATXProactiveSuggestion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)shouldDisplayDailyRoutineForContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: ATXContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
