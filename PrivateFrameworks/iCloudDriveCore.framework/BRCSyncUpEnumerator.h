
@interface BRCSyncUpEnumerator : NSEnumerator {
    unsigned int  _batchSize;
    NSMutableSet * _chainedParentIDAllowlist;
    BRCClientZone * _clientZone;
    unsigned int  _currentDepth;
    PQLResultSet<PQLEnumeration> * _enumerator;
    NSMutableSet * _itemIDsLostOrThrottled;
    NSMutableSet * _itemIDsNeedingDirectoryFetch;
    NSMutableSet * _itemIDsNeedingOSUpgrade;
    NSMutableArray * _itemsNeedingUnshare;
    unsigned int  _maxDepth;
    unsigned long long  _retryAfter;
    NSMutableIndexSet * _returned;
    unsigned int  _should2PhasePCSChain;
    NSMutableArray * _stack;
    int  _stage;
    NSMutableDictionary * _tombstonesEmbargo;
    NSMutableArray * _tooDeepItems;
    NSMutableDictionary * _visitedItemIDsToDepthMap;
}

@property (nonatomic, readonly) unsigned int batchSize;
@property (nonatomic, readonly) NSMutableSet *chainedParentIDAllowlist;
@property (nonatomic, readonly) NSMutableArray *itemsNeedingUnshare;
@property (nonatomic, readonly) unsigned long long retryAfter;

- (void).cxx_destruct;
- (bool)_checkForSharesWithinSharesWithItem:(id)arg1;
- (bool)_checkIfParentNeedsRevivalWithParentItem:(id)arg1 item:(id)arg2;
- (bool)_checkIfShouldDenylistForParentDirectoryFaultWithItem:(id)arg1 needsDirFaultCheck:(bool*)arg2;
- (bool)_checkIfShouldDenylistForPathMatch:(id)arg1;
- (void)_denyListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3;
- (void)_denyListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3 descendantBlock:(id /* block */)arg4;
- (bool)_denyListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)arg1 now:(unsigned long long)arg2;
- (id)_documentsOrAliasesNeedingSyncUpEnumerator;
- (bool)_handlePendingShareItemWithPendingDeleteChildren:(id)arg1;
- (bool)_handleSharedItemWhichMovedToNewShare:(id)arg1 rootItem:(id)arg2;
- (id)_liveDirectoriesNeedingSyncUpEnumerator;
- (id)_nextLiveItem;
- (id)_nextTombstone;
- (id)_tombstoneLeavesNeedingSyncUpEnumerator;
- (unsigned int)batchSize;
- (id)chainedParentIDAllowlist;
- (bool)handleItemForOSUpgrade:(id)arg1 parentItemID:(id)arg2;
- (id)initWithClientZone:(id)arg1;
- (void)invalidate;
- (bool)isDenyListed:(id)arg1;
- (id)itemsNeedingUnshare;
- (id)nextObject;
- (unsigned long long)retryAfter;

@end
