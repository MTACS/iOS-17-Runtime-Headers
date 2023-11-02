
@interface ASCredentialRequestImageSubPane : ASCredentialRequestSubPane {
    long long  _imageStyle;
    UIImageView * _imageView;
}

@property (nonatomic, readonly) long long imageStyle;
@property (nonatomic, readonly) UIImageView *imageView;

+ (id)_appIconViewWithImage:(id)arg1;
+ (id)_customIconViewWithImage:(id)arg1;
+ (id)_imageViewWithImage:(id)arg1 imageStyle:(long long)arg2;
+ (id)_systemIconViewWithImage:(id)arg1;

- (void).cxx_destruct;
- (void)addToStackView:(id)arg1 withCustomSpacingAfter:(double)arg2 context:(id)arg3;
- (long long)imageStyle;
- (id)imageView;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 imageStyle:(long long)arg2;
- (void)setImage:(id)arg1;

@end
