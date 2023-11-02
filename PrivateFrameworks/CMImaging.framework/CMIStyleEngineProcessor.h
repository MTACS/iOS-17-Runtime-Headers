
@interface CMIStyleEngineProcessor : NSObject <MetalImageBufferProcessor> {
    struct CGSize { 
        double width; 
        double height; 
    }  _apiImageSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _apiInputImageRect;
    <MTLTexture> * _apiInputTexture;
    <MTLTexture> * _apiInputThumbnailTexture;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _apiOutputImageRect;
    <MTLTexture> * _apiOutputTexture;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _apiRegionToRender;
    <MTLTexture> * _apiTargetThumbnailTexture;
    CMIStyleEngineApplyStyle * _applyStyle;
    NSDictionary * _cameraInfoByPortType;
    <MTLBuffer> * _coefficientsBuffer;
    CMIStyleEngineConfiguration * _configuration;
    CMIStyleEngineCreateLinearSystem * _createLinearSystem;
    CMIStyleEngineCreateSpotlights * _createSpotlights;
    CMIStyleEngineCreateWeightPlanes * _createWeightPlanes;
    bool  _doWeightPlaneColorSplit;
    float  _extLambda;
    CMIExternalMemoryResource * _externalMemoryResource;
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
    <MTLTexture> * _inputLearningModulationMaskTexture;
    NSData * _inputLinearSystemCoefficients;
    struct __CVBuffer { } * _inputPixelBuffer;
    <MTLTexture> * _inputTexture;
    struct __CVBuffer { } * _inputThumbnailPixelBuffer;
    <MTLTexture> * _inputThumbnailTexture;
    <MTLTexture> * _inputWeightPlaneTexture;
    CMIStyleEngineIntegrateCoefficients * _integrateCoefficients;
    <MTLTexture> * _integratedCoefficientsTexture;
    float  _learningModulationOffset;
    float  _learningModulationStrength;
    NSArray * _lhs;
    NSArray * _lhsDiagSums;
    NSArray * _linSysSolution;
    NSArray * _linSysStatus;
    <MTLBuffer> * _linSysStatusFlagBuffer;
    unsigned long long  _memoryAllocationType;
    <MTLCommandQueue> * _metalCommandQueue;
    FigMetalContext * _metalContext;
    bool  _outputCoefficientsReady;
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
    struct __CVBuffer { } * _outputPixelBuffer;
    <MTLTexture> * _outputTexture;
    <MTLBuffer> * _pairExpandedWeightsBuffer;
    bool  _performApplication;
    bool  _performIntegration;
    bool  _performLearning;
    <MTLBuffer> * _polyExpandedInputBuffer;
    <MTLTexture> * _polyExpandedTargetTexture;
    NSArray * _priorFactorForLHS;
    NSArray * _priorFactorForRHS;
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
    <MTLTexture> * _residualsTexture;
    NSArray * _rhs;
    CMIStyleEngineSolveLinearSystem * _solveLinearSystem;
    <MTLTexture> * _spotlightBottomEdgeTexture;
    <MTLTexture> * _spotlightBottomLeftTexture;
    <MTLTexture> * _spotlightBottomRightTexture;
    <MTLTexture> * _spotlightCentralTexture;
    void _spotlightCount;
    <MTLTexture> * _spotlightLeftEdgeTexture;
    <MTLTexture> * _spotlightRightEdgeTexture;
    <MTLTexture> * _spotlightTopEdgeTexture;
    <MTLTexture> * _spotlightTopLeftTexture;
    <MTLTexture> * _spotlightTopRightTexture;
    bool  _spotlightsCreated;
    struct __CVBuffer { } * _targetThumbnailPixelBuffer;
    <MTLTexture> * _targetThumbnailTexture;
    struct __CVMetalTextureCache { } * _textureCache;
    float  _tikLambdaConstant;
    float  _tikLambdaLinear;
    float  _tikLambdaQuadratic;
    NSDictionary * _tuningParameters;
    float  _weightPlaneColorSplitStrength;
    unsigned int  _weightPlaneCount;
    float  _weightPlaneStandardDeviation;
    <MTLBuffer> * _weightPlanesNormalizationBuffer;
    <MTLTexture> * _weightPlanesTexture;
    <MTLBuffer> * _weightPlanesThresholdCalculationBuffer;
}

@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (nonatomic, retain) CMIStyleEngineConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CMIExternalMemoryResource *externalMemoryResource;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputImageRect;
@property (nonatomic, retain) <MTLTexture> *inputLearningModulationMaskTexture;
@property (nonatomic, retain) NSData *inputLinearSystemCoefficients;
@property (nonatomic) struct __CVBuffer { }*inputPixelBuffer;
@property (nonatomic, retain) <MTLTexture> *inputTexture;
@property (nonatomic) struct __CVBuffer { }*inputThumbnailPixelBuffer;
@property (nonatomic, retain) <MTLTexture> *inputThumbnailTexture;
@property (nonatomic, retain) <MTLTexture> *inputWeightPlaneTexture;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outputImageRect;
@property (nonatomic, readonly) <MTLTexture> *outputIntegratedCoefficients;
@property (nonatomic, readonly) NSData *outputLinearSystemCoefficients;
@property (nonatomic, readonly) <MTLBuffer> *outputLinearSystemStatusFlag;
@property (nonatomic) struct __CVBuffer { }*outputPixelBuffer;
@property (nonatomic, retain) <MTLTexture> *outputTexture;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionToRender;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsExternalMemoryResource;
@property (nonatomic) struct __CVBuffer { }*targetThumbnailPixelBuffer;
@property (nonatomic, retain) <MTLTexture> *targetThumbnailTexture;
@property (nonatomic, retain) NSDictionary *tuningParameters;

- (void).cxx_destruct;
- (int)_bindAllInternalIOTextures;
- (int)_bindPixelBufferToTexture:(struct __CVBuffer { }*)arg1 usage:(unsigned long long)arg2 textuePtr:(id*)arg3;
- (int)_checkConfiguration;
- (int)_checkIOTexturePair;
- (int)_checkROISpecification;
- (int)_checkThumbnailTexturePair;
- (int)_createMetalStages;
- (unsigned int)_linearSystemCount;
- (unsigned int)_linearSystemNumberOfExpansionTerms;
- (unsigned int)_linearSystemNumberOfPolynomials;
- (unsigned int)_linearSystemSize;
- (id)cameraInfoByPortType;
- (id)configuration;
- (void)dealloc;
- (id)externalMemoryDescriptorForConfiguration:(id)arg1;
- (id)externalMemoryResource;
- (int)finishProcessing;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithOptionalMetalCommandQueue:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputImageRect;
- (id)inputLearningModulationMaskTexture;
- (id)inputLinearSystemCoefficients;
- (struct __CVBuffer { }*)inputPixelBuffer;
- (id)inputTexture;
- (struct __CVBuffer { }*)inputThumbnailPixelBuffer;
- (id)inputThumbnailTexture;
- (id)inputWeightPlaneTexture;
- (id)metalCommandQueue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputImageRect;
- (id)outputIntegratedCoefficients;
- (id)outputLinearSystemCoefficients;
- (id)outputLinearSystemStatusFlag;
- (struct __CVBuffer { }*)outputPixelBuffer;
- (id)outputTexture;
- (int)prepareToProcess:(unsigned int)arg1;
- (int)prewarm;
- (int)process;
- (int)purgeResources;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionToRender;
- (int)resetState;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setExternalMemoryResource:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInputImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputLearningModulationMaskTexture:(id)arg1;
- (void)setInputLinearSystemCoefficients:(id)arg1;
- (void)setInputPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputTexture:(id)arg1;
- (void)setInputThumbnailPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputThumbnailTexture:(id)arg1;
- (void)setInputWeightPlaneTexture:(id)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setOutputImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOutputPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setOutputTexture:(id)arg1;
- (void)setRegionToRender:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetThumbnailPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setTargetThumbnailTexture:(id)arg1;
- (void)setTuningParameters:(id)arg1;
- (int)setup;
- (bool)supportsExternalMemoryResource;
- (struct __CVBuffer { }*)targetThumbnailPixelBuffer;
- (id)targetThumbnailTexture;
- (id)tuningParameters;

@end
