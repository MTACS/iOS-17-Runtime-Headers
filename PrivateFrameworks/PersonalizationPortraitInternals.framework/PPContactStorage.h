
@interface PPContactStorage : NSObject {
    bool  _chineseBirthdayFound;
    NSObject<OS_dispatch_queue> * _concurrentContactQueryQueue;
    NSObject<OS_dispatch_semaphore> * _concurrentContactQueryThrottleSem;
    PPContactDiskCacheManager * _contactCacheManager;
    CNContactStore * _contactsStore;
    PPSQLDatabase * _db;
    id /* block */  _foundInAppsHarvestStoreGetter;
    <SGSuggestionsServiceContactsProtocol> * _foundInAppsService;
    PPMeCardCacheManager * _meCardCacheManager;
    NSString * _path;
}

+ (id)normalizeHandle:(id)arg1;

- (void).cxx_destruct;
- (id)_joinResults:(id)arg1;
- (id)_waitForGroup:(id)arg1 results:(id)arg2;
- (id)_waitForGroup:(id)arg1 results:(id)arg2 timeoutSeconds:(double)arg3 explanationSet:(id)arg4;
- (void)asyncFillResultsFromContactsWithQuery:(id)arg1 explanationSet:(id)arg2 group:(id)arg3 results:(id)arg4;
- (void)asyncFillResultsFromFoundInAppsWithQuery:(id)arg1 explanationSet:(id)arg2 group:(id)arg3 results:(id)arg4;
- (id)cachedSignificantContactHandles;
- (bool)chineseBirthdayFound;
- (void)clearChangeHistoryForClient:(id)arg1 historyResult:(id)arg2;
- (id)contactHandleSourceCountsWithMinimumSourceCount:(unsigned long long)arg1;
- (id)contactHandlesForSource:(id)arg1;
- (id)contactHandlesForTopics:(id)arg1;
- (id)contactNameRecordsWithHistoryResult:(id)arg1 truncated:(bool*)arg2 error:(id*)arg3;
- (id)contactsChangeHistoryForClient:(id)arg1 error:(id*)arg2;
- (id)contactsContactsWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3;
- (id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(id)arg3 error:(id*)arg4;
- (id /* block */)emailFilterWithQuery:(id)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1 foundInAppsHarvestStoreGetter:(id /* block */)arg2;
- (long long)insertIfNeededAndFetchIdentifierWithHandle:(id)arg1 txnWitness:(id)arg2;
- (bool)iterAllNameRecordsFromAllSourcesWithError:(id*)arg1 block:(id /* block */)arg2;
- (void)loadChineseBirthdayFoundKVData;
- (id)meCard;
- (id /* block */)nameFilterWithQuery:(id)arg1;
- (id /* block */)phoneFilterWithQuery:(id)arg1;
- (id /* block */)postalAddressFilterWithQuery:(id)arg1;
- (unsigned long long)pruneOrphanedHandlesWithTxnWitness:(id)arg1;
- (void)setCachedSignificantContactHandles:(id)arg1;
- (void)setChineseBirthdayFound:(bool)arg1;
- (void)setChineseBirthdayFoundKVData;
- (id)sourcesForContactHandle:(id)arg1;
- (void)storeHandleSourceMapWithHandles:(id)arg1 sourceId:(long long)arg2 txnWitness:(id)arg3;

@end
