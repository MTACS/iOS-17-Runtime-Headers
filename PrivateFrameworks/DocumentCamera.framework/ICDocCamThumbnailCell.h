
@interface ICDocCamThumbnailCell : UICollectionViewCell {
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIImageView *imageView;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)applyLayoutAttributes:(id)arg1;
- (id)imageView;
- (id)indexStringForAccessibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)parentCollectionView;
- (void)prepareForReuse;
- (void)setImageView:(id)arg1;

@end
