
@interface SUUIBackgroundImageWrapperForHorizontalLockup : SUUIImageView {
    SUUIImageView * _imageView;
    SUUIHorizontalLockupView * _lockup;
}

@property (nonatomic) SUUIImageView *imageView;
@property (nonatomic) SUUIHorizontalLockupView *lockup;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithImage:(id)arg1;
- (id)lockup;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLockup:(id)arg1;

@end
