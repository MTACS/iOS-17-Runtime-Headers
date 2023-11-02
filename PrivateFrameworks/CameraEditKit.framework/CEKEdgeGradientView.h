
@interface CEKEdgeGradientView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIColor * _customEdgeGradientColor;
    long long  _edgeGradientStyle;
    struct { 
        double startFadeInset; 
        double startFadeLength; 
        double endFadeLength; 
        double endFadeInset; 
    }  _gradientDimensions;
    long long  _gradientDirection;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) UIColor *customEdgeGradientColor;
@property (nonatomic, readonly) long long edgeGradientStyle;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } gradientDimensions;
@property (nonatomic) long long gradientDirection;
@property (nonatomic) double innerFadeLength;
@property (nonatomic) double outerColorLength;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)customEdgeGradientColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)edgeGradientStyle;
- (struct { double x1; double x2; double x3; double x4; })gradientDimensions;
- (long long)gradientDirection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)innerFadeLength;
- (bool)isOpaque;
- (double)outerColorLength;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCustomEdgeGradientStyleWithColor:(id)arg1;
- (void)setEdgeGradientStyleBlack;
- (void)setEdgeGradientStyleMask;
- (void)setGradientDimensions:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setGradientDirection:(long long)arg1;
- (void)setInnerFadeLength:(double)arg1;
- (void)setOuterColorLength:(double)arg1;

@end
