
@interface GameCenterUI.GKMultiplayerViewControllerLayout : UICollectionViewFlowLayout {
    void type;
}

@property (nonatomic, readonly) long long cellLayoutMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collectionViewContentSize;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumContentInsetIn:(id)arg1;

- (long long)cellLayoutMode;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
