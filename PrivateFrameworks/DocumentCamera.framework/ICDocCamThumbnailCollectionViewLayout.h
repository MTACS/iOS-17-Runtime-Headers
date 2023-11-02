
@interface ICDocCamThumbnailCollectionViewLayout : UICollectionViewLayout {
    bool  _compactLayout;
    <ICDocCamThumbnailViewLayoutDelegate> * _delegate;
    NSMutableArray * _deleteIndexPaths;
    NSMutableArray * _insertIndexPaths;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    NSDictionary * _layoutInfo;
    bool  _transitioning;
}

@property (nonatomic) bool compactLayout;
@property (nonatomic) <ICDocCamThumbnailViewLayoutDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *deleteIndexPaths;
@property (nonatomic, retain) NSMutableArray *insertIndexPaths;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic, retain) NSDictionary *layoutInfo;
@property (nonatomic) bool transitioning;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })compactFrameForThumbnailAtIndexPath:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)compactLayout;
- (id)delegate;
- (id)deleteIndexPaths;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForThumbnailAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })frameSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)insertIndexPaths;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutInfo;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (void)prepareLayout:(bool)arg1;
- (void)setCompactLayout:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteIndexPaths:(id)arg1;
- (void)setInsertIndexPaths:(id)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutInfo:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setup;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)transitioning;

@end
