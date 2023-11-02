
@interface WBSCloudHistoryMergeOperation : NSObject {
    <WBSHistoryServiceDatabaseProtocol> * _database;
    NSSet * _existingVisits;
    WBSCloudHistoryFetchResult * _fetchResult;
    bool  _mergeStarted;
    NSString * _profileServerIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _redirectChainEarliestVisits;
    NSSet * _redirectChainSourceVisits;
    NSSet * _tombstones;
    NSMutableDictionary * _tombstonesByURLString;
    NSMutableDictionary * _visitsByVisitIdentifiers;
}

- (void).cxx_destruct;
- (void)_buildRedirectChains;
- (void)_buildVisitsByVisitIdentifiersMap;
- (void)_filterVisitsByTombstones;
- (void)_loadTombstonesWithCompletion:(id /* block */)arg1;
- (void)_lookUpExistingItemsWithCompletion:(id /* block */)arg1;
- (void)_lookupRedirectChainSourcesWithCompletion:(id /* block */)arg1;
- (void)_mergeVisitsWithCompletion:(id /* block */)arg1;
- (void)_removeDuplicateVisits;
- (void)_replayAndAddTombstones:(id /* block */)arg1;
- (void)_updateClientVersions;
- (id)initWithDatabase:(id)arg1 fetchResult:(id)arg2 profileServerIdentifier:(id)arg3;
- (void)mergeWithCompletion:(id /* block */)arg1;

@end
