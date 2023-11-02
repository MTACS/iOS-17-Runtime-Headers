
@interface VUIHomeShareViewController : VUILibraryStackViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    VUIViewControllerContentPresenter * _contentPresenter;
    <VUIHomeShareViewControllerDelegate> * _delegate;
    NSArray * _homeShares;
    VUILibraryMenuItemViewCell * _menuItemSizingCell;
}

@property (nonatomic, retain) VUIViewControllerContentPresenter *contentPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIHomeShareViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *homeShares;
@property (nonatomic, retain) VUILibraryMenuItemViewCell *menuItemSizingCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (id)contentPresenter;
- (void)dealloc;
- (id)delegate;
- (id)homeShares;
- (id)init;
- (void)loadView;
- (id)menuItemSizingCell;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setContentPresenter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeShares:(id)arg1;
- (void)setMenuItemSizingCell:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
