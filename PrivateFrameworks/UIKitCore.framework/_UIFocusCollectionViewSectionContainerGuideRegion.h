
@interface _UIFocusCollectionViewSectionContainerGuideRegion : _UIFocusContainerGuideRegion {
    UICollectionView * _collectionView;
    long long  _section;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sectionFrame;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long section;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sectionFrame;

- (void).cxx_destruct;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 withSnapshot:(id)arg3;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (id)collectionView;
- (bool)isEqual:(id)arg1;
- (long long)section;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sectionFrame;
- (void)setCollectionView:(id)arg1;
- (void)setSection:(long long)arg1;
- (void)setSectionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
