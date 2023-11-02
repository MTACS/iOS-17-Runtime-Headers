
@interface SFFluidCollectionViewLayout : NSObject {
    <SFFluidCollectionLayoutContainer> * _container;
    SFFluidCollectionView * _fluidCollectionView;
}

@property (nonatomic) <SFFluidCollectionLayoutContainer> *container;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) SFFluidCollectionView *fluidCollectionView;
@property (nonatomic, readonly) bool shouldAllowScrollGesture;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)container;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)finalLayoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeFluidCollectionUpdate;
- (void)finalizeLayout;
- (id)fluidCollectionView;
- (id)initialLayoutAttributesForItemAtIndexPath:(id)arg1;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForTraitCollectionChange:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForFluidCollectionUpdate:(id)arg1;
- (void)prepareLayout;
- (void)setContainer:(id)arg1;
- (void)setFluidCollectionView:(id)arg1;
- (bool)shouldAllowScrollGesture;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldInvalidateLayoutForTraitCollectionChange:(id)arg1;

@end
