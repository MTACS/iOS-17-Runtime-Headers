
@interface _UIDiffableDataSourceSectionSnapshotRebaser : NSObject {
    _UIDiffableDataSourceDiffer * _dataSourceDiffer;
    NSDiffableDataSourceSnapshot * _finalSnapshot;
    NSMapTable * _initialSectionSnapshots;
    NSDiffableDataSourceSnapshot * _initialSnapshot;
    NSMapTable * _rebasedSectionSnapshots;
}

@property (nonatomic, readonly) NSMapTable *rebasedSectionSnapshots;

- (void).cxx_destruct;
- (id)_computeSectionTransactionsIncludingSectionDifferences:(bool)arg1;
- (void)_rebaseForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(bool)arg5;
- (id)_transactionIncludingSectionDifferences:(bool)arg1 source:(long long)arg2;
- (id)computeApplyTransactionIncludingSectionDifferences:(bool)arg1;
- (id)computeReorderingTransaction;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(bool)arg5;
- (id)rebasedSectionSnapshots;

@end
