
@interface LibraryViewController : UIViewController <LibraryContentObserver, UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate> {
    WebBookmarkCollection * _collection;
    UICollectionView * _collectionView;
    LibraryConfiguration * _configuration;
    UICollectionViewDiffableDataSource * _dataSource;
    <LibraryViewControllerDelegate> * _delegate;
    UICollectionView * _floatingCollectionView;
    UICollectionViewDiffableDataSource * _floatingCollectionViewDataSource;
    LibraryItemController * _presentedItemController;
    NSArray * _profilesInSwitcherMenu;
    struct { 
        bool needsReload; 
        bool needsReloadForProfileSwitcher; 
        bool animated; 
    }  _reloadFlags;
    NSArray * _sectionControllers;
    UIView * _separator;
}

@property (nonatomic, readonly) WebBookmarkCollection *collection;
@property (nonatomic, retain) LibraryConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LibraryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LibraryItemController *presentedItemController;
@property (nonatomic, readonly) NSArray *profilesInSwitcherMenu;
@property (nonatomic, copy) NSArray *sectionControllers;
@property (nonatomic, retain) LibraryItemController *selectedItemController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applySnapshotForSection:(id)arg1 animated:(bool)arg2;
- (void)_collectionViewDidSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (id)_diffableDataSourceForCollectionView:(id)arg1;
- (void)_enumerateItemControllersWithBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFloatingCollectionView;
- (void)_layOutFloatingViews;
- (void)_reloadFloatingSectionControllersImmediately;
- (void)_reloadSectionControllersImmediatelyAnimated:(bool)arg1;
- (id)_swipeActionsConfigurationForIndexPath:(id)arg1;
- (id)collection;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 selectionFollowsFocusForItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (void)collectionViewContentSizeDidChange:(id)arg1;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)librarySectionContentDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)presentedItemController;
- (id)profilesInSwitcherMenu;
- (void)reloadExpansionStateForItem:(id)arg1 inSection:(id)arg2;
- (void)reloadSectionControllersIfNeeded;
- (void)scrollToTopAnimated:(bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)sectionControllers;
- (id)selectedItemController;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsReloadForProfileSwitcher;
- (void)setNeedsReloadSectionControllersAnimated:(bool)arg1;
- (void)setPresentedItemController:(id)arg1;
- (void)setSectionControllers:(id)arg1;
- (void)setSelectedItemController:(id)arg1;
- (void)updateSelection;
- (void)updateSelectionByIgnoringExistingSelection:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
