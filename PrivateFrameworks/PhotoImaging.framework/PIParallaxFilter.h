
@interface PIParallaxFilter : CIFilter {
    <PIParallaxFilterCache> * _cache;
    CIImage * _inputBackgroundImage;
    CIImage * _inputForegroundImage;
    CIImage * _inputGuideImage;
    CIImage * _inputMatteImage;
    NSDictionary * _localLightData;
    double  _renderScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleFrame;
}

@property (nonatomic, retain) <PIParallaxFilterCache> *cache;
@property (nonatomic, retain) CIImage *inputBackgroundImage;
@property (nonatomic, retain) CIImage *inputForegroundImage;
@property (nonatomic, retain) CIImage *inputGuideImage;
@property (nonatomic, retain) CIImage *inputMatteImage;
@property (nonatomic, copy) NSDictionary *localLightData;
@property (nonatomic, readonly) CIImage *outputBackgroundImage;
@property (nonatomic, readonly) CIImage *outputForegroundImage;
@property (nonatomic, readonly) CIImage *outputMatteImage;
@property (nonatomic) double renderScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;

- (void).cxx_destruct;
- (id)cache;
- (id)inputBackgroundImage;
- (id)inputForegroundImage;
- (id)inputGuideImage;
- (id)inputMatteImage;
- (id)localLightData;
- (id)outputBackgroundImage;
- (id)outputForegroundImage;
- (id)outputImage;
- (id)outputMatteImage;
- (double)renderScale;
- (void)setCache:(id)arg1;
- (void)setInputBackgroundImage:(id)arg1;
- (void)setInputForegroundImage:(id)arg1;
- (void)setInputGuideImage:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setLocalLightData:(id)arg1;
- (void)setRenderScale:(double)arg1;
- (void)setVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
