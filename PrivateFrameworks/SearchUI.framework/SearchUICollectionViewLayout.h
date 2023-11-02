
@interface SearchUICollectionViewLayout : UICollectionViewCompositionalLayout {
    <SearchUICollectionViewSizingDelegate> * _sizingDelegate;
    SearchUICollectionViewLayoutConfiguration * _snapshotConfiguration;
}

@property (nonatomic) <SearchUICollectionViewSizingDelegate> *sizingDelegate;
@property (readonly) SearchUICollectionViewLayoutConfiguration *snapshotConfiguration;

+ (void)applyForcedFrameToAttributes:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)applyForcedMaxHeightToAttributes:(id)arg1 maxHeight:(double)arg2;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sectionContentFrameFromCellAttributes:(id)arg1;
- (void)setSizingDelegate:(id)arg1;
- (id)sizingDelegate;
- (id)snapshotConfiguration;

@end
