
@interface PXLoadingFailureBadgeView : UIView {
    NSError * _error;
    UIImage * _image;
    UIImageView * _imageView;
    long long  _sizeClass;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) long long sizeClass;

+ (id)_imageForSizeClass:(long long)arg1;
+ (long long)_sizeClassForSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })sizeForSizeClass:(long long)arg1;

- (void).cxx_destruct;
- (void)_handlePrimaryAction;
- (void)_handleTap:(id)arg1;
- (void)_installGestureRecognizers;
- (id)error;
- (id)image;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 error:(id)arg2;
- (void)layoutSubviews;
- (void)setError:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSizeClass:(long long)arg1;
- (long long)sizeClass;

@end
