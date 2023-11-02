
@interface VideosUI.StackCollectionViewCompositionalLayout : UICollectionViewCompositionalLayout

+ (Class)layoutAttributesClass;

- (id)initWithCoder:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;
- (id)initWithSectionProvider:(id /* block */)arg1;
- (id)initWithSectionProvider:(id /* block */)arg1 configuration:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
