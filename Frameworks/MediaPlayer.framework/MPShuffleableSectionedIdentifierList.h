
@interface MPShuffleableSectionedIdentifierList : MPSectionedIdentifierList <_MPSSILDelegate> {
    NSString * _shuffleStartingItemIdentifier;
    NSString * _shuffleStartingSectionIdentifier;
    long long  _shuffleType;
    _MPSSILImplementation * _shuffledList;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPShuffleableSectionedIdentifierListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *shuffleStartingItemIdentifier;
@property (nonatomic, copy) NSString *shuffleStartingSectionIdentifier;
@property (nonatomic) long long shuffleType;
@property (readonly) Class superclass;

+ (long long)enumerationCandidateDequeueQuota;
+ (long long)initialCandidateDequeueQuota;
+ (void)setEnumerationCandidateDequeueQuota:(long long)arg1;
+ (void)setInitialCandidateDequeueQuota:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_candidateItemsWithExclusiveAccessToken:(id)arg1;
- (void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2;
- (long long)_itemCountWithExclusiveAccessToken:(id)arg1;
- (id)_shuffledListWithExclusiveAccessToken:(id)arg1;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4 completion:(id /* block */)arg5;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterTailOfSection:(id)arg3 completion:(id /* block */)arg4;
- (void)addDataSource:(id)arg1 section:(id)arg2 beforeTailOfSection:(id)arg3 completion:(id /* block */)arg4;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(bool)arg3 afterItem:(id)arg4 inSection:(id)arg5 completion:(id /* block */)arg6;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(bool)arg3 afterTailOfSection:(id)arg4 completion:(id /* block */)arg5;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(bool)arg3 beforeTailOfSection:(id)arg4 completion:(id /* block */)arg5;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 completion:(id /* block */)arg3;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(bool)arg3 completion:(id /* block */)arg4;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 completion:(id /* block */)arg3;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(bool)arg3 completion:(id /* block */)arg4;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceReloadItems:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItems:(id)arg1 fromSection:(id)arg2;
- (id)debugDescription;
- (void)didDequeueShuffledItemsInSSIL:(id)arg1;
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startPosition:(id)arg2 endPosition:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (bool)hasSection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3;
- (void)moveItemToEnd:(id)arg1 fromSection:(id)arg2;
- (void)moveItemToStart:(id)arg1 fromSection:(id)arg2;
- (void)removeItem:(id)arg1 fromSection:(id)arg2;
- (void)replaceDataSource:(id)arg1 forSection:(id)arg2 completion:(id /* block */)arg3;
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;
- (void)setShuffleStartingItemIdentifier:(id)arg1;
- (void)setShuffleStartingSectionIdentifier:(id)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)setShuffleType:(long long)arg1 startingItem:(id)arg2 inSection:(id)arg3;
- (void)setShuffleType:(long long)arg1 startingItem:(id)arg2 inSection:(id)arg3 randomSource:(id)arg4;
- (id)shuffleStartingItemIdentifier;
- (id)shuffleStartingSectionIdentifier;
- (long long)shuffleType;

@end
