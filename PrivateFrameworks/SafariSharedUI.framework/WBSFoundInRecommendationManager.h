
@interface WBSFoundInRecommendationManager : NSObject {
    int  _changeNotificationToken;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<SGSuggestionsServiceURLsProtocol> * _suggestionsService;
}

+ (id)_linkRecommendationsFromSGSuggestions:(id)arg1 contactStoreProvider:(id /* block */)arg2;
+ (unsigned long long)foundInSourceFromBundleIdentifier:(id)arg1;
+ (bool)isBundleIdentifierFromCalendar:(id)arg1;
+ (bool)isBundleIdentifierFromMessages:(id)arg1;

- (void).cxx_destruct;
- (void)_createInternalQueueIfNecessary;
- (void)_recentURLRecommendationsWithCompletionHandler:(id /* block */)arg1;
- (void)beginListeningForURLSuggestionChanges;
- (void)recentRecommendationsWithCompletionHandler:(id /* block */)arg1;
- (void)stopListeningForURLSuggestionChanges;

@end
