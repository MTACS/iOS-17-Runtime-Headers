
@interface _UIKeyShortcutHUDSearchButton : UIView <_UIKeyShortcutHUDCollectionViewManagerClient> {
    UICollectionView * _collectionView;
    _UIKeyShortcutHUDCollectionViewManager * _collectionViewManager;
    UICollectionViewDiffableDataSource * _dataSource;
    <_UIKeyShortcutHUDSearchButtonDelegate> * _delegate;
    UICollectionViewCellRegistration * _searchCellRegistration;
    bool  _searching;
    _UIKeyShortcutHUDToolbarViewController * _toolbarVC;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIKeyShortcutHUDSearchButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIKeyShortcutHUDIndexPath *searchButtonIndexPath;
@property (nonatomic, retain) UICollectionViewCellRegistration *searchCellRegistration;
@property (getter=isSearching, nonatomic) bool searching;
@property (readonly) Class superclass;
@property (nonatomic) _UIKeyShortcutHUDToolbarViewController *toolbarVC;

- (void).cxx_destruct;
- (id)_collectionViewLayout;
- (void)_configureCollectionView;
- (void)_setupSubviews;
- (id)collectionView;
- (id)collectionViewManager;
- (id)dataSource;
- (id)delegate;
- (void)didCompleteSearchTransition;
- (void)didScrollCollectionView;
- (id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)arg1;
- (id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSearching;
- (void)performActionForSelectingCellAtIndexPath:(id)arg1;
- (void)prepareForSearchTransition:(bool)arg1;
- (id)searchButtonIndexPath;
- (id)searchCellRegistration;
- (bool)selectionFollowsFocusForItemAtIndexPath:(id)arg1;
- (void)setCollectionViewManager:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchCellRegistration:(id)arg1;
- (void)setSearching:(bool)arg1;
- (void)setToolbarVC:(id)arg1;
- (bool)shouldPersistSelectionForCellAtIndexPath:(id)arg1;
- (id)toolbarVC;

@end
