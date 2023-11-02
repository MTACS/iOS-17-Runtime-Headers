
@interface CMIStyleEngineApplyStyle : NSObject <CMIStyleEngineProcessingStage> {
    <MTLComputePipelineState> * _computePipelineStates;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputImageRect;
    <MTLTexture> * _inputIntegratedCoefficientsTexture;
    bool  _inputIsLinear;
    <MTLTexture> * _inputTexture;
    bool  _inputThumbnailIsLinear;
    <MTLTexture> * _inputThumbnailTexture;
    <MTLBuffer> * _linearSystemStatus;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outputImageRect;
    bool  _outputShouldBeLinear;
    <MTLTexture> * _outputTexture;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionToRender;
    <MTLTexture> * _residualTexture;
    bool  _targetThumbnailIsLinear;
    <MTLTexture> * _targetThumbnailTexture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputImageRect;
@property (nonatomic, retain) <MTLTexture> *inputIntegratedCoefficientsTexture;
@property (nonatomic) bool inputIsLinear;
@property (nonatomic, retain) <MTLTexture> *inputTexture;
@property (nonatomic) bool inputThumbnailIsLinear;
@property (nonatomic, retain) <MTLTexture> *inputThumbnailTexture;
@property (nonatomic, retain) <MTLBuffer> *linearSystemStatus;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outputImageRect;
@property (nonatomic) bool outputShouldBeLinear;
@property (nonatomic, retain) <MTLTexture> *outputTexture;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionToRender;
@property (nonatomic, retain) <MTLTexture> *residualTexture;
@property (readonly) Class superclass;
@property (nonatomic) bool targetThumbnailIsLinear;
@property (nonatomic, retain) <MTLTexture> *targetThumbnailTexture;

- (void).cxx_destruct;
- (int)_compileShaders:(id)arg1;
- (struct CGVector { double x1; double x2; })_displacementFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2;
- (void)_uint2FromCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_uint2FromCGSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_uint2FromCGVector:(struct CGVector { double x1; double x2; })arg1;
- (int)enqueueToCommandBuffer:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithMetalContext:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputImageRect;
- (id)inputIntegratedCoefficientsTexture;
- (bool)inputIsLinear;
- (id)inputTexture;
- (bool)inputThumbnailIsLinear;
- (id)inputThumbnailTexture;
- (id)linearSystemStatus;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputImageRect;
- (bool)outputShouldBeLinear;
- (id)outputTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionToRender;
- (id)residualTexture;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInputImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputIntegratedCoefficientsTexture:(id)arg1;
- (void)setInputIsLinear:(bool)arg1;
- (void)setInputTexture:(id)arg1;
- (void)setInputThumbnailIsLinear:(bool)arg1;
- (void)setInputThumbnailTexture:(id)arg1;
- (void)setLinearSystemStatus:(id)arg1;
- (void)setOutputImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOutputShouldBeLinear:(bool)arg1;
- (void)setOutputTexture:(id)arg1;
- (void)setRegionToRender:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResidualTexture:(id)arg1;
- (void)setTargetThumbnailIsLinear:(bool)arg1;
- (void)setTargetThumbnailTexture:(id)arg1;
- (bool)targetThumbnailIsLinear;
- (id)targetThumbnailTexture;

@end
