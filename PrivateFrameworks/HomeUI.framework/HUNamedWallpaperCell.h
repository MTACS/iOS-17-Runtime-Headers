
@interface HUNamedWallpaperCell : UICollectionViewCell {
    long long  _contentMode;
    UIImageView * _imageView;
}

@property (nonatomic) long long contentMode;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;

- (void).cxx_destruct;
- (long long)contentMode;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;

@end
