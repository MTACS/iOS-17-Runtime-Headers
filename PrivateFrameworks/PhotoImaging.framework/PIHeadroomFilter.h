
@interface PIHeadroomFilter : CIFilter {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _extendedRect;
    CIImage * _inputImage;
    bool  _isInactive;
    PFParallaxColor * _primaryGradientColor;
    double  _renderScale;
    bool  _useBlur;
    bool  _useHighKeyStyle;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } extendedRect;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic) bool isInactive;
@property (nonatomic, retain) PFParallaxColor *primaryGradientColor;
@property (nonatomic) double renderScale;
@property (nonatomic) bool useBlur;
@property (nonatomic) bool useHighKeyStyle;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendedRect;
- (id)inputImage;
- (bool)isInactive;
- (id)outputImage;
- (id)primaryGradientColor;
- (double)renderScale;
- (void)setExtendedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputImage:(id)arg1;
- (void)setIsInactive:(bool)arg1;
- (void)setPrimaryGradientColor:(id)arg1;
- (void)setRenderScale:(double)arg1;
- (void)setUseBlur:(bool)arg1;
- (void)setUseHighKeyStyle:(bool)arg1;
- (bool)useBlur;
- (bool)useHighKeyStyle;

@end
