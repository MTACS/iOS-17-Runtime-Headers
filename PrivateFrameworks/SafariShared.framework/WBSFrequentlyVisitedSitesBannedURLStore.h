
@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {
    NSMutableDictionary * _bannedURLStringsToEntriesMap;
    NSObject<OS_dispatch_queue> * _storeQueue;
    NSURL * _storeURL;
}

- (void).cxx_destruct;
- (id)_bannedURLStringsToEntriesMap;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)_writeOutBannedURLStringsAsynchronously;
- (void)addURLString:(id)arg1;
- (bool)containsURLString:(id)arg1;
- (void)dealloc;
- (id)initWithStoreURL:(id)arg1 history:(id)arg2;
- (void)removeAllURLStrings;
- (void)removeURLStrings:(id)arg1;
- (id)urlStrings;

@end
