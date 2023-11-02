
@interface WBSHistoryServiceDatabaseProxy : NSObject <WBSHistoryServiceDatabaseProtocol> {
    <NSXPCProxyCreating> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)arg1;
- (void)addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)assignURLString:(id)arg1 toTopicTagsWithIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)checkIfLocalVisitExistsForDatabaseIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 blockList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(id /* block */)arg7;
- (void)convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)expireOldVisits:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllTombstonesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAutocompleteTriggersForURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchCloudClientVersionTable:(id /* block */)arg1;
- (void)fetchDatabaseURL:(id /* block */)arg1;
- (void)fetchDomainExpansions:(id /* block */)arg1;
- (void)fetchEventsForListener:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMetadataForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 onlyFromThisDevice:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)getItemCountBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getVisitedLinksWithCompletionHandler:(id /* block */)arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithProxy:(id)arg1;
- (void)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performMaintenanceWithAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)recomputeItemScoresWithCompletionHandler:(id /* block */)arg1;
- (void)recordVisitWithIdentifier:(id)arg1 sourceVisit:(id)arg2 title:(id)arg3 wasHTTPNonGet:(bool)arg4 loadSuccessful:(bool)arg5 origin:(long long)arg6 attributes:(unsigned long long)arg7 statusCode:(long long)arg8 completionHandler:(id /* block */)arg9;
- (void)replayAndAddTombstones:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetCloudHistoryDataWithCompletionHandler:(id /* block */)arg1;
- (void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 writeHandle:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setTitle:(id)arg1 ofTagWithID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateVisitWithIdentifier:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)updateVisitWithIdentifier:(id)arg1 title:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)vacuumHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completionHandler:(id /* block */)arg2;

@end
