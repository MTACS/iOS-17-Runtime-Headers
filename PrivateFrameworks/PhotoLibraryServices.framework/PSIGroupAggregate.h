
@interface PSIGroupAggregate : NSObject {
    NSMutableArray * _aggregateItemPool;
    NSMutableArray * _aggregatedGroupIds;
    unsigned long long  _filenameGroupCount;
    PSIGroup * _filenameGroupInAggregate;
    NSMutableArray * _groupAggregateItems;
    NSObject<OS_dispatch_queue> * _groupResultsQueue;
    NSArray * _searchTokens;
    NSString * _transientToken;
}

@property (nonatomic, readonly) PSIGroup *filenameGroupInAggregate;
@property (nonatomic, readonly) NSArray *searchTokens;
@property (nonatomic, copy) NSString *transientToken;

- (void).cxx_destruct;
- (struct __CFArray { }*)_newSortedGroupIds;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfString:(id)arg1 inGroup:(id)arg2 useNormalizedString:(bool)arg3 extendingSearchRange:(bool)arg4 matchingFullToken:(bool)arg5 excludingRanges:(id)arg6;
- (bool)_verifySortedGroupIdsUnique;
- (id)aggregateItemWithSearchToken:(id)arg1 rangeMatchingToken:(id)arg2 group:(id)arg3;
- (id)filenameGroupInAggregate;
- (id)initWithSearchTokens:(id)arg1 groupResultsQueue:(id)arg2;
- (id)newGroupResult;
- (id)newGroupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;
- (void)pop;
- (bool)pushGroup:(id)arg1 disableWildcardMatchesForUserControlledCategories:(bool)arg2;
- (id)searchTokens;
- (void)setTransientToken:(id)arg1;
- (id)transientToken;

@end
