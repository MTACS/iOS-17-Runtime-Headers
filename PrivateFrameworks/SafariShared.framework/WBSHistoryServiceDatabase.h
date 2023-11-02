
@interface WBSHistoryServiceDatabase : NSObject <WBSHistoryServiceDatabaseProtocol, WBSSQLiteDatabaseDelegate> {
    NSURL * _clearHistoryInProgressFileURL;
    WBSHistoryCrypto * _crypto;
    unsigned long long  _currentRangeForTemporaryID;
    WBSSQLiteDatabase * _database;
    NSString * _databaseID;
    NSDictionary * _databaseOptions;
    NSURL * _databaseURL;
    NSMapTable * _delegates;
    NSObject<OS_dispatch_group> * _fileOperationGroup;
    bool  _hasComputedLatestVisit;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _integrityCheckPending;
    struct LatestVisitInformationMap { 
        struct unordered_map<long long, SafariShared::LatestVisitInformation, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, SafariShared::LatestVisitInformation>>> { 
            struct __hash_table<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _map; 
    }  _latestVisitMap;
    NSMapTable * _listeners;
    NSMutableArray * _pendingVisits;
    id /* block */  _pendingVisitsTimeout;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _registeredListeners;
    WBSSQLiteStatementCache * _statements;
    WBSHistoryTagDatabaseController * _tagController;
    struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> { 
        struct __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, long long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _temporaryIDToItem;
    WBSHistoryServiceURLCompletion * _urlCompletion;
    struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> { 
        struct __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, long long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _visitForTemporaryID;
}

@property (nonatomic, readonly, copy) NSString *databaseID;
@property (nonatomic, readonly) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBSHistoryServiceURLCompletion *urlCompletion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 error:(id*)arg3;
- (void)_checkpointWriteAheadLog;
- (id)_clearAllHistoryInsertingTombstoneUpToDate:(id)arg1;
- (id)_clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4;
- (id)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3;
- (void)_clearWBSHistorySQLiteStoreClearHistoryKeys;
- (void)_closeTagController;
- (id)_collectDeletedHighLevelDomainsForPlan:(void*)arg1;
- (id)_collectDeletedHighLevelDomainsFromDeletedHostnamesForPlan:(void*)arg1;
- (id)_collectDeletedHostnamesForPlan:(void*)arg1;
- (id)_collectDeletedURLsForPlan:(void*)arg1;
- (bool)_commitPendingItems:(id)arg1;
- (void)_commitPendingUpdates;
- (bool)_commitPendingVisits:(id)arg1;
- (id)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2;
- (unsigned long long)_countOfItems;
- (long long)_currentGeneration;
- (id)_dateForMetadataKey:(id)arg1 error:(id*)arg2;
- (id)_deleteOldestItems:(unsigned long long)arg1 forPlan:(void*)arg2;
- (void)_dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_ensureDatabaseIsSynced;
- (id)_ensureLatestVisitsAreComputed;
- (id)_executePlan:(void*)arg1 outDeletedItemCount:(unsigned long long*)arg2 outDeletedVisitCount:(unsigned long long*)arg3;
- (id)_expireOldVisits:(double)arg1;
- (id)_fetchEventsForListener:(id)arg1 error:(id*)arg2;
- (id)_fetchListenerNamesFromDatabase:(id*)arg1;
- (id)_fetchObjectToTagMappingsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3;
- (id)_fetchTagsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3;
- (id)_fetchVisitsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3;
- (id)_findAllRelatedVisits:(const void*)arg1 forPlan:(void*)arg2 afterDate:(id)arg3 beforeDate:(id)arg4;
- (id)_findAllRelatedVisitsToItems:(const void*)arg1 forPlan:(void*)arg2;
- (id)_findItemIDsForPendingVisitsWithError:(id*)arg1;
- (id)_findObsoleteItemsForPlan:(void*)arg1;
- (void)_finishedClearingHistory;
- (id)_generateDisposedVisitsForPlan:(void*)arg1;
- (id)_generateItemsDictionary:(const void*)arg1;
- (id)_generateUpdatedLastVisit:(const void*)arg1;
- (id)_generateVisitsDictionary:(const void*)arg1;
- (id)_insertTombstonesForURLs:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4;
- (id)_lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (long long)_lastSyncedGeneration;
- (id)_markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2;
- (id)_metadataForKey:(id)arg1 error:(id*)arg2;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (void)_notifyExecutionOfPlan:(void*)arg1;
- (double)_oldestLatestVisit;
- (long long)_permanentIDsForItemIfAvailable:(long long)arg1;
- (long long)_permanentIDsForVisitIfAvailable:(long long)arg1;
- (bool)_prepareDatabase:(id*)arg1;
- (id)_preparePlan:(void*)arg1 ageLimit:(double)arg2 itemCountLimit:(unsigned long long)arg3;
- (id)_preparePlan:(void*)arg1 itemsToDelete:(const void*)arg2 visitsToDelete:(const void*)arg3 afterDate:(id)arg4 beforeDate:(id)arg5;
- (unsigned long long)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1 error:(id*)arg2;
- (void)_queuePendingUpdates;
- (id)_recomputeItemScores:(void*)arg1;
- (struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> { struct __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })_recomputeLatestVisitsForItems:(const void*)arg1 error:(id*)arg2;
- (id)_recomputeVisitScores:(void*)arg1;
- (void)_registerHistoryTagFrecencyScoringFunction;
- (void)_removeLegacyHistoryDatabaseIfNeeded;
- (bool)_reopenDatabase:(id*)arg1;
- (id)_setMetadataValue:(id)arg1 forKey:(id)arg2;
- (bool)_shouldEmitLegacyTombstones;
- (void)_startingClearHistoryOperationForStartDate:(id)arg1 endDate:(id)arg2;
- (void)_updateItem:(long long)arg1 visitCountScore:(long long)arg2 dailyVisitCounts:(id)arg3 weeklyVisitCounts:(id)arg4 shouldRecomputeDerivedVisitCounts:(bool)arg5;
- (id)_updateListenerRegistration:(id)arg1 lastSeen:(double)arg2;
- (void)_updateVisitWithIdentifier:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 pendingVisit:(id)arg4;
- (long long)_writeEventToDatabase:(id)arg1 listeners:(id)arg2 error:(id*)arg3;
- (void)addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addDelegate:(id)arg1 listenerName:(id)arg2 forConnection:(id)arg3;
- (long long)allocateTemporaryIDRange:(long long*)arg1;
- (void)assignURLString:(id)arg1 toTopicTagsWithIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)checkIfLocalVisitExistsForDatabaseIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 blockList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(id /* block */)arg7;
- (void)convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)database:(id)arg1 hadSevereError:(id)arg2;
- (id)databaseID;
- (id)databaseURL;
- (void)dealloc;
- (void)deletionPlanForAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)deletionPlanForItemsToDelete:(id)arg1 visitsToDelete:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)ensureLatestVisitsAreComputed:(id /* block */)arg1;
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
- (void)forceCloseWithCompletionHandler:(id /* block */)arg1;
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 onlyFromThisDevice:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)getItemCountBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getVisitedLinksWithCompletionHandler:(id /* block */)arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithID:(id)arg1 url:(id)arg2 options:(id)arg3 fileOperationGroup:(id)arg4 error:(id*)arg5;
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
- (id)urlCompletion;
- (void)vacuumHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)warmUp;

@end
