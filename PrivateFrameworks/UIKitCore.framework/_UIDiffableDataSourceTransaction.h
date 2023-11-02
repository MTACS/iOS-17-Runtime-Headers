
@interface _UIDiffableDataSourceTransaction : NSObject {
    NSOrderedCollectionDifference * _difference;
    NSDiffableDataSourceSnapshot * _finalSnapshot;
    NSDiffableDataSourceSnapshot * _initialSnapshot;
    NSArray * _reorderedItemIdentifiers;
    NSArray * _sectionTransactions;
    long long  _source;
}

@property (nonatomic, readonly) NSOrderedCollectionDifference *difference;
@property (nonatomic, readonly) NSDiffableDataSourceSnapshot *finalSnapshot;
@property (nonatomic, readonly) NSDiffableDataSourceSnapshot *initialSnapshot;
@property (nonatomic, readonly) NSArray *sectionTransactions;

+ (id)applyTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4;
+ (id)reorderingTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)difference;
- (id)finalDataSourceSnapshotter;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2;
- (long long)finalSectionCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })finalSectionGlobalItemRangeForSection:(long long)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (id)finalSnapshot;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 reorderedItemIdentifiers:(id)arg4 difference:(id)arg5 sectionTransactions:(id)arg6;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })initalSectionGlobalItemRangeForSection:(long long)arg1;
- (id)initialDataSourceSnapshotter;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2;
- (long long)initialSectionCount;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (id)initialSnapshot;
- (bool)isApplyTransaction;
- (bool)isEqual:(id)arg1;
- (bool)isReorderingTransaction;
- (id)performDiffGeneratingUpdates;
- (id)reorderedItemIdentifiers;
- (id)sectionTransactions;
- (long long)source;

@end
