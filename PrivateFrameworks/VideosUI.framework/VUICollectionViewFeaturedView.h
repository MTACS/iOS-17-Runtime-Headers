
@interface VUICollectionViewFeaturedView : VUIBaseView {
    UIView * _imageView;
    UIView * _overlayView;
}

@property (nonatomic, retain) UIView *imageView;
@property (nonatomic, retain) UIView *overlayView;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overlayView;
- (void)setImageView:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
