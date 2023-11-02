
@interface _UIHorizontalIndexTitleBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    <_UIHorizontalIndexTitleBarDelegate> * _delegate;
    NSArray * _entries;
    _UIHorizontalIndexTitleBarCell * _focusedCell;
    UIFocusGuide * _horizontalIndexTitleBarFocusGuide;
    UICollectionViewCompositionalLayout * _layout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _parentContentInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
    _UIFocusFastScrollingIndexBarEntry * _selectedEntry;
    NSIndexPath * _selectedEntryIndexPath;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIHorizontalIndexTitleBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *entries;
@property (nonatomic) _UIHorizontalIndexTitleBarCell *focusedCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIFocusGuide *horizontalIndexTitleBarFocusGuide;
@property (nonatomic, retain) UICollectionViewCompositionalLayout *layout;
@property (getter=_parentContentInset, setter=_setParentContentInset:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } parentContentInset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (nonatomic, retain) _UIFocusFastScrollingIndexBarEntry *selectedEntry;
@property (nonatomic, retain) NSIndexPath *selectedEntryIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelDelayedFocusAction;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_combinedSectionInset;
- (id)_currentlyFocusedCell;
- (id)_existingCellForSelectedIndexPath;
- (void)_flipIfRightToLeft;
- (bool)_isViewEntryCell:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_parentContentInset;
- (void)_selectEntryForTitleIndex:(long long)arg1;
- (void)_selectFocusedCell;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)_setParentContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_updateWithEntries:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)commonInit;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)entries;
- (id)focusedCell;
- (id)horizontalIndexTitleBarFocusGuide;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)init;
- (id)layout;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusEnvironments;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (id)selectedEntry;
- (id)selectedEntryIndexPath;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setFocusedCell:(id)arg1;
- (void)setHorizontalIndexTitleBarFocusGuide:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectedEntry:(id)arg1;
- (void)setSelectedEntryIndexPath:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
