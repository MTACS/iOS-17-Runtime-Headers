
@interface ICDataSource : NSObject {
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _collectionViewDiffableDataSource;
    <ICItemIdentifier> * _firstRelevantItemIdentifier;
    NSArray * _sectionControllers;
    bool  _togglingLock;
    id /* block */  _willCollapseItemHandler;
    id /* block */  _willExpandItemHandler;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource;
@property (nonatomic, readonly) <ICItemIdentifier> *firstRelevantItemIdentifier;
@property (nonatomic, retain) NSArray *sectionControllers;
@property (getter=isTogglingLock, nonatomic) bool togglingLock;
@property (nonatomic, copy) id /* block */ willCollapseItemHandler;
@property (nonatomic, copy) id /* block */ willExpandItemHandler;

- (void).cxx_destruct;
- (void)accountHidesSystemPaperNotesInCustomFoldersDidChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)associatedCellsForItemIdentifiers:(id)arg1;
- (id)collectionView;
- (id)collectionViewDiffableDataSource;
- (void)dealloc;
- (id)firstRelevantItemIdentifier;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* block */)arg2;
- (bool)isTogglingLock;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (void)noteLockManagerDidToggleLock:(id)arg1;
- (void)noteLockManagerWillToggleLock:(id)arg1;
- (void)reindexDataAnimated:(bool)arg1;
- (void)reindexDataAnimated:(bool)arg1 dataIndexedBlock:(id /* block */)arg2 dataRenderedBlock:(id /* block */)arg3;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadDataAnimated:(bool)arg1 dataIndexedBlock:(id /* block */)arg2 dataRenderedBlock:(id /* block */)arg3;
- (id)sectionControllers;
- (void)setSectionControllers:(id)arg1;
- (void)setTogglingLock:(bool)arg1;
- (void)setWillCollapseItemHandler:(id /* block */)arg1;
- (void)setWillExpandItemHandler:(id /* block */)arg1;
- (id /* block */)willCollapseItemHandler;
- (id /* block */)willExpandItemHandler;

@end
