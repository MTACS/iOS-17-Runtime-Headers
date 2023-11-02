
@interface CACAdaptiveBackdropView : UIView {
    CAFilter * _colorMatrix;
    CAFilter * _gaussianBlurFilter;
    CAFilter * _luminanceMapFilter;
}

@property (nonatomic, retain) CAFilter *colorMatrix;
@property (nonatomic, retain) CAFilter *gaussianBlurFilter;
@property (nonatomic, retain) CAFilter *luminanceMapFilter;

+ (id)contrastAdaptiveBackdropViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (Class)layerClass;

- (void).cxx_destruct;
- (id)colorMatrix;
- (id)gaussianBlurFilter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isContrasted:(bool)arg2;
- (id)luminanceMapFilter;
- (void)setColorMatrix:(id)arg1;
- (void)setGaussianBlurFilter:(id)arg1;
- (void)setLuminanceMapFilter:(id)arg1;

@end
