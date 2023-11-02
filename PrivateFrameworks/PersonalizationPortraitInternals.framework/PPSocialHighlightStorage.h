
@interface PPSocialHighlightStorage : NSObject {
    PPSocialHighlightCache * _cache;
    _PASLock * _lock;
    _PASLock * _lsAppLinkCache;
    PPSocialHighlightStorageUtilities * _socialHighlightStorageUtils;
}

+ (id)appLinksForResourceURL:(id)arg1 resolvedURL:(id)arg2;
+ (int)attributionFeedbackTypeForAttributionFeedbackType:(unsigned long long)arg1;
+ (unsigned long long)entitlementStatusForClient:(id)arg1 applicationIdentifiers:(id)arg2;
+ (id)feedbackPruningPolicy;
+ (int)unifiedFeedbackTypeForHighlightFeedbackType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_isCollaborationEntitlementPresentForApplicationIdentifiers:(id)arg1;
- (id)_mostRecentRankedHighlightsMatchingTest:(id /* block */)arg1 client:(id)arg2;
- (void)_performFeedbackSessionLoggingForEnrichedFeedback:(id)arg1 client:(id)arg2;
- (id)_rankableItemsForClient:(id)arg1 variant:(id)arg2 applicationIdentifiers:(id)arg3 autoDonatingChatIdentifiers:(id)arg4 limit:(unsigned long long)arg5 error:(id*)arg6;
- (id)_rankableItemsForClient:(id)arg1 variant:(id)arg2 applicationIdentifiers:(id)arg3 limit:(unsigned long long)arg4 error:(id*)arg5;
- (id)_screenTimeConversation;
- (double)_sessionLoggingRate;
- (id)_socialAttributionFromAttributeValues:(id)arg1 fetchAttributes:(id)arg2;
- (id)_socialLayerDefaults;
- (void)_writeEnrichedFeedbackForAttributionIdentifier:(id)arg1 client:(id)arg2 feedbackType:(int)arg3;
- (void)_writeEnrichedFeedbackForHighlightIdentifier:(id)arg1 client:(id)arg2 feedbackType:(int)arg3;
- (id)allSupportedHighlightsForAutoDonatingChats:(id)arg1 error:(id*)arg2;
- (id)applicationIdentifiersForResourceURL:(id)arg1 resolvedURL:(id)arg2;
- (id)attributionForIdentifier:(id)arg1 error:(id*)arg2;
- (id)attributionsForIdentifiers:(id)arg1 error:(id*)arg2;
- (id)autoDonatingChatsWithError:(id*)arg1;
- (id)autoDonatingChatsWithShouldContinueBlock:(id /* block */)arg1 error:(id*)arg2;
- (unsigned char)automaticSharingEnabled;
- (unsigned char)automaticSharingEnabledForClient:(id)arg1 error:(id*)arg2;
- (id)cachedRankedHighlightsForClient:(id)arg1 variant:(id)arg2 queriedHighlights:(id)arg3;
- (void)cleanUpFeedbackWithShouldContinueBlock:(id /* block */)arg1 ttl:(double)arg2 onDeleteBlock:(id /* block */)arg3;
- (void)clearFeedbackStream;
- (void)clearRankedStream;
- (void)clearStreams;
- (unsigned long long)countDistinctRankedItemsMatchingBatchIdentifier:(id)arg1;
- (id)deduplicateAndSortRankedHighlights:(id)arg1 attributionLookup:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4;
- (void)deleteAllRecordsFromBundleId:(id)arg1;
- (void)deleteAllRecordsFromBundleId:(id)arg1 matchingAttributionIdentifiers:(id)arg2;
- (void)deleteAllRecordsFromBundleId:(id)arg1 matchingDomainSelection:(id)arg2;
- (void)deleteDataDerivedFromContentMatchingRequest:(id)arg1;
- (void)deleteFeedbackMatchingPredicate:(id)arg1;
- (void)deleteVendedMatchingPredicate:(id)arg1;
- (id)featurizeRankedHighlights:(id)arg1;
- (id)feedbackItems;
- (id)feedbackItemsInInterval:(double)arg1 includingRemote:(bool)arg2;
- (id)feedbackPublisherWithInterval:(double)arg1 includingRemote:(bool)arg2;
- (void)freezeAppLinksCache;
- (void)handleAppLinkChangeNotification:(id)arg1;
- (id)highlightFromRankableHighlight:(id)arg1 attributionIdentifiers:(id)arg2 earliestAttributionIdentifiers:(id)arg3;
- (id)init;
- (id)initWithFeedbackStream:(id)arg1 rankedStream:(id)arg2 database:(id)arg3;
- (void)invalidateCacheForClient:(id)arg1;
- (bool)isClientEntitledForItem:(id)arg1 client:(id)arg2 applicationIdentifiers:(id)arg3 blockedHosts:(id)arg4;
- (bool)isClientEntitledForItem:(id)arg1 client:(id)arg2 applicationIdentifiers:(id)arg3 blockedHosts:(id)arg4 iTunesOverrideChecker:(id)arg5;
- (bool)isValidHighlight:(id)arg1 applicationIdentifiers:(id)arg2;
- (id)lastCacheInvalidationDateForClient:(id)arg1;
- (id)rankedHighlightsForSyncedItems:(id)arg1 client:(id)arg2 variant:(id)arg3 applicationIdentifiers:(id)arg4 error:(id*)arg5;
- (id)rankedHighlightsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 applicationIdentifiers:(id)arg4 error:(id*)arg5;
- (id)rankedItems;
- (bool)rerankingEnabled;
- (void)resetLSAppLinkCache;
- (bool)saveAttributionFeedbackForAttributionIdentifier:(id)arg1 feedbackType:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4;
- (bool)saveFeedbackForHighlightIdentifier:(id)arg1 feedbackType:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4;
- (void)saveFeedbackItems:(id)arg1;
- (void)saveOrderedBatch:(id)arg1;
- (id)sharedContentForClient:(id)arg1 variant:(id)arg2 applicationIdentifiers:(id)arg3 limit:(unsigned long long)arg4 autoDonatingChatIdentifiers:(id)arg5 error:(id*)arg6;
- (id)sharedContentFromChats:(id)arg1 dateRange:(double)arg2 applicationIdentifiers:(id)arg3 error:(id*)arg4;
- (void)syncFeedback;

@end
