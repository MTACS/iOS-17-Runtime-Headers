
@interface SKUIBackgroundImageWrapperForHorizontalLockup : SKUIImageView {
    SKUIImageView * _imageView;
    SKUIHorizontalLockupView * _lockup;
}

@property (nonatomic) SKUIImageView *imageView;
@property (nonatomic) SKUIHorizontalLockupView *lockup;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithImage:(id)arg1;
- (id)lockup;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLockup:(id)arg1;

@end
