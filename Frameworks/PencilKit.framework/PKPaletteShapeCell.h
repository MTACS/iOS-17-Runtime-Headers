
@interface PKPaletteShapeCell : UICollectionViewCell {
    UIImageView * _imageView;
    PKPaletteShape * _shape;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) PKPaletteShape *shape;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setShape:(id)arg1;
- (id)shape;

@end
