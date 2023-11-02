
@interface SBFluidSwitcherIconImageContainerView : UIView {
    UIImage * _image;
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (void)_configureIconImageView:(id)arg1;
- (void)_crossfadeToImage:(id)arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;

@end
