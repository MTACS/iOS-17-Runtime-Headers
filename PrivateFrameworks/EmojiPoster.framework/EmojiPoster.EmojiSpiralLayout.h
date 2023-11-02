
@interface EmojiPoster.EmojiSpiralLayout : UICollectionViewLayout {
    void radius;
    void startingAngle;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collectionViewContentSize;

- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
