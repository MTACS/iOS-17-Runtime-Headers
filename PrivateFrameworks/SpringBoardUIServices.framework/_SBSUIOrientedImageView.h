
@interface _SBSUIOrientedImageView : SBFTouchPassThroughView {
    UIImageView * _imageView;
    UIImage * _landscapeImage;
    UIImage * _portraitImage;
}

@property (nonatomic, retain) UIImage *landscapeImage;
@property (nonatomic, retain) UIImage *portraitImage;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)landscapeImage;
- (void)layoutSubviews;
- (id)portraitImage;
- (void)setLandscapeImage:(id)arg1;
- (void)setPortraitImage:(id)arg1;

@end
