
@interface ICPaperStyleCell : UICollectionViewListCell {
    UIImageView * _imageView;
    UIView * _selectionView;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIView *selectionView;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)preferredTintColor;
- (void)prepareForReuse;
- (id)selectionView;
- (void)setImageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setupCell;

@end
