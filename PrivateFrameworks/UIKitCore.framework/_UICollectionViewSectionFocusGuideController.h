
@interface _UICollectionViewSectionFocusGuideController : NSObject {
    UICollectionView * _collectionView;
    NSMapTable * _focusGuideFromSectionMap;
    NSMapTable * _focusGuideToSectionMap;
    NSIndexPath * _focusedIndexPath;
    NSUUID * _lastUpdateIdentifier;
    long long  _pivotSection;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, retain) NSMapTable *focusGuideFromSectionMap;
@property (nonatomic, retain) NSMapTable *focusGuideToSectionMap;
@property (nonatomic, retain) NSIndexPath *focusedIndexPath;
@property (nonatomic, retain) NSUUID *lastUpdateIdentifier;
@property (nonatomic) long long pivotSection;

- (void).cxx_destruct;
- (id)_createOrUpdateSectionFocusGuidePackageForSection:(long long)arg1;
- (id)_focusGuides;
- (void)_layoutSectionFocusGuide:(id)arg1 forSection:(long long)arg2 inLayout:(id)arg3;
- (void)_layoutSectionFocusGuide:(id)arg1 forSection:(long long)arg2 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_removeSectionFocusGuidesForSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sectionEndFrameForSection:(long long)arg1 layout:(id)arg2;
- (id)_sectionFocusGuidePackageForSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sectionFrameForSection:(long long)arg1 layout:(id)arg2;
- (id)_sectionsToLoad;
- (void)_updatePivotSection;
- (void)_updateSectionEndFocusGuideForSection:(long long)arg1 inPackage:(id)arg2 layout:(id)arg3;
- (void)cleanupSectionFocusGuides;
- (id)collectionView;
- (id)focusGuideFromSectionMap;
- (id)focusGuideToSectionMap;
- (id)focusedIndexPath;
- (id)initWithCollectionView:(id)arg1;
- (id)lastUpdateIdentifier;
- (void)performLayout;
- (long long)pivotSection;
- (void)reloadSectionFocusGuides;
- (void)setCollectionView:(id)arg1;
- (void)setFocusGuideFromSectionMap:(id)arg1;
- (void)setFocusGuideToSectionMap:(id)arg1;
- (void)setFocusedIndexPath:(id)arg1;
- (void)setLastUpdateIdentifier:(id)arg1;
- (void)setPivotSection:(long long)arg1;
- (void)updateFocusedIndexPath:(id)arg1;
- (void)updateFocusedIndexPath:(id)arg1 immediatelyReevaluatePivotIndex:(bool)arg2;

@end
