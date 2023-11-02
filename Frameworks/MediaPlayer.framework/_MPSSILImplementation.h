
@interface _MPSSILImplementation : MPSectionedIdentifierList {
    NSMutableArray * _candidateItems;
    MPRandomDistribution * _randomDistribution;
}

@property (nonatomic, retain) NSMutableArray *candidateItems;
@property (nonatomic) <_MPSSILDelegate> *delegate;
@property (nonatomic, readonly) MPRandomDistribution *randomDistribution;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addShuffleSection:(id)arg1 dataSource:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_appendShuffledItems:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)_beforeInitWithCoder:(id)arg1;
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2;
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (bool)_isSequentialSection:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(bool)arg3 afterItem:(id)arg4 inSection:(id)arg5;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(bool)arg3 afterTailOfSection:(id)arg4;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(bool)arg3 beforeTailOfSection:(id)arg4;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(bool)arg3;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(bool)arg3;
- (id)candidateItems;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceReloadItems:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItems:(id)arg1 fromSection:(id)arg2;
- (void)dequeueCandidatesWithQuota:(long long)arg1;
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionedIdentifierList:(id)arg1 randomSource:(id)arg2 startingItemEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (long long)itemCount;
- (id)randomDistribution;
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;
- (void)setCandidateItems:(id)arg1;

@end
