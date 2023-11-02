
@interface SSBlurView : UIView

@property (nonatomic) double blurRadius;
@property (nonatomic) double scale;

+ (Class)layerClass;

- (id)_backdropLayer;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (double)blurRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scale;
- (void)setBlurRadius:(double)arg1;
- (void)setScale:(double)arg1;

@end
