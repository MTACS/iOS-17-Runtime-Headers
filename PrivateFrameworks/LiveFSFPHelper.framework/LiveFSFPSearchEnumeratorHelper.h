
@interface LiveFSFPSearchEnumeratorHelper : LiveFSFPEnumeratorHelper {
    NSFileProviderSearchQuery * _ourSearchQuery;
    NSMutableArray * _pendingReaderBlocks;
    NSObject<OS_dispatch_queue> * _searchWorkQueue;
    NSSortDescriptor * _sortD;
    NSMutableArray * searchResults;
}

@property (retain) NSSortDescriptor *sortD;

+ (id)criteriaForQuery:(id)arg1;
+ (id)newForQuery:(id)arg1 withExtension:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)copySearchCompletionBlock;
- (id /* block */)copySearchResultBlock;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (void)finallyEnumerateItemsForObserver:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initForQuery:(id)arg1 withExtension:(id)arg2;
- (void)scheduleReaders;
- (void)setSortD:(id)arg1;
- (id)sortD;
- (void)start;
- (void)waitForSearchResultsForObserver:(id)arg1 startingAtPage:(id)arg2;

@end
