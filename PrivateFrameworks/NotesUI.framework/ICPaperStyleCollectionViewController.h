
@interface ICPaperStyleCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    bool  _forPreferences;
    ICPaperStyleHeaderView * _headerViewMeasuringCell;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    double  _itemSpacing;
    double  _itemSpacingVertical;
    bool  _needsUpdateItemSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _titleInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forPreferences;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICPaperStyleHeaderView *headerViewMeasuringCell;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemSpacingVertical;
@property (nonatomic) bool needsUpdateItemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleInsets;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (bool)forPreferences;
- (id)headerViewMeasuringCell;
- (id)indexPathForInitialSelection;
- (id)indexPathFromPaperStyleType:(unsigned long long)arg1;
- (id)indexPathFromSetting:(id)arg1;
- (id)init;
- (id)initWithLargeIcons:(bool)arg1 forPreferences:(bool)arg2;
- (struct CGSize { double x1; double x2; })itemSize;
- (double)itemSpacing;
- (double)itemSpacingVertical;
- (bool)needsUpdateItemSpacing;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned long long)paperStyleTypeFromIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setForPreferences:(bool)arg1;
- (void)setHeaderViewMeasuringCell:(id)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setItemSpacingVertical:(double)arg1;
- (void)setNeedsUpdateItemSpacing:(bool)arg1;
- (void)setSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)settingFromIndexPath:(id)arg1;
- (id)titleForHeaderView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleInsets;
- (void)updateItemSpacing;
- (void)updateSettings;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end