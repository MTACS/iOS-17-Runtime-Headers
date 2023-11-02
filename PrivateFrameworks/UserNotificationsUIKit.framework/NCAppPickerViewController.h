
@interface NCAppPickerViewController : NCOnboardingViewController <NCAppPickerViewFooterDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    double  _cellHeight;
    UICollectionView * _collectionView;
    double  _collectionViewVisibleHeight;
    bool  _contentCollapsable;
    bool  _contentCollapsed;
    unsigned long long  _contentCollapsedCellCount;
    NCAppPickerContentProvider * _contentProvider;
    double  _footerHeight;
    double  _headerHeight;
    NSLayoutConstraint * _heightConstraint;
    bool  _largerTextSize;
    NSMutableSet * _mutableShownBundleIdentifiers;
    bool  _showMoreButtonWasPressed;
    NSLayoutConstraint * _topConstraint;
    bool  _viewHasAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *selectedBundleIdentifiers;
@property (nonatomic) bool showMoreButtonWasPressed;
@property (nonatomic, readonly, copy) NSSet *shownBundleIdentifiers;
@property (readonly) Class superclass;

+ (id)appPickerViewControllerWithContentProvider:(id)arg1;

- (void).cxx_destruct;
- (double)_availableContentWidth;
- (bool)_canShowWhileLocked;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_initWithContentProvider:(id)arg1;
- (void)_refreshNextButton;
- (void)_reloadFooter;
- (void)_saveCellsSeen;
- (bool)_shouldInlineButtontray;
- (void)_updateHeightConstraintAndLayout;
- (void)_updateHeightConstraintAndLayoutIfNeeded:(bool)arg1;
- (void)appPickViewFooterShowMoreButtonPressed:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedBundleIdentifiers;
- (void)setShowMoreButtonWasPressed:(bool)arg1;
- (bool)showMoreButtonWasPressed;
- (id)shownBundleIdentifiers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
