
@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane {
    UIImageView * _imageView;
    NSArray * _imageViewConstraints;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, copy) NSArray *imageViewConstraints;

+ (id)_imageViewWithImage:(id)arg1;

- (void).cxx_destruct;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (id)image;
- (id)imageView;
- (id)imageViewConstraints;
- (id)initWithImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setImageViewConstraints:(id)arg1;

@end
