
@interface ICCollapsibleImageView : ICCollapsibleBaseView {
    UIImage * _image;
    UIImageView * _imageView;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)image;
- (id)imageView;
- (void)performSetup;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
