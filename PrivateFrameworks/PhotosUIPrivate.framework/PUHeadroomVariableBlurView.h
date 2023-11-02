
@interface PUHeadroomVariableBlurView : UIView {
    CAFilter * _blurFilter;
    UIImage * _currentBlurMaskImage;
}

@property (nonatomic, readonly) CAFilter *blurFilter;
@property (nonatomic, retain) UIImage *currentBlurMaskImage;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_updateBlurProperties;
- (id)backdropLayer;
- (id)blurFilter;
- (id)currentBlurMaskImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentBlurMaskImage:(id)arg1;

@end
