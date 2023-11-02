
@interface PIParallaxStyleEvaluationContext : NSObject {
    CIImage * _backgroundImage;
    <PIParallaxFilterCache> * _cache;
    CIImage * _guideImage;
    CIImage * _inputImage;
    NSDictionary * _localLightData;
    CIImage * _matteImage;
    CIImage * _outputImage;
    NSDictionary * _parameters;
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
    }  _visibleRect;
}

@property (nonatomic, retain) CIImage *backgroundImage;
@property (nonatomic, retain) <PIParallaxFilterCache> *cache;
@property (nonatomic, retain) CIImage *guideImage;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, readonly) CIImage *lightMapImage;
@property (nonatomic, copy) NSDictionary *localLightData;
@property (nonatomic, retain) CIImage *matteImage;
@property (nonatomic, retain) CIImage *outputImage;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic) double renderScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (id)backgroundImage;
- (id)cache;
- (id)debugDescription;
- (id)guideImage;
- (id)inputImage;
- (id)lightMapImage;
- (id)localLightData;
- (id)matteImage;
- (id)outputImage;
- (id)parameters;
- (double)renderScale;
- (void)setBackgroundImage:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setGuideImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setLocalLightData:(id)arg1;
- (void)setMatteImage:(id)arg1;
- (void)setOutputImage:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setRenderScale:(double)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
