
@interface ICDocCamThumbnailContainerView : UIView {
    UICollectionView * _collectionView;
}

@property (nonatomic) UICollectionView *collectionView;

- (void).cxx_destruct;
- (bool)accessibilityElementsHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)collectionView;
- (bool)isAccessibilityElement;
- (void)setCollectionView:(id)arg1;

@end
