
@protocol ICDocCamThumbnailViewLayoutDelegate <NSObject>

@required

- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 imageSizeAtIndex:(long long)arg2;
- (UIView *)rootView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetViewRect;

@end
