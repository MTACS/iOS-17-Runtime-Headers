
@interface JFXGuidedUpscaler : NSObject {
    MPSImageGaussianBlur * _blur;
    <MTLCommandQueue> * _commandQueue;
    <MTLTexture> * _currentOutputTexture;
    <MTLDevice> * _device;
    JFXGuidedFilter * _guidedFilter;
    JFXMetalHelpers * _helpers;
    <MTLTexture> * _oldScaledGuidance;
    <MTLComputePipelineState> * _pipelineStateSimilarity;
    <MTLComputePipelineState> * _pipelineStateSmoothing;
    <MTLTexture> * _previousOutputTexture;
    <MTLTexture> * _scaledGuidance;
    MPSImageBilinearScale * _scaler;
    bool  _showSimilarity;
    <MTLTexture> * _similarity;
    float  _similarityGaussianBlur;
    float  _temporalSmoothing;
    struct __CVMetalTextureCache { } * _textureCache;
    float  _updateRate;
}

@property (nonatomic, retain) <MTLTexture> *currentOutputTexture;
@property (nonatomic, retain) <MTLTexture> *oldScaledGuidance;
@property (nonatomic, retain) <MTLComputePipelineState> *pipelineStateSimilarity;
@property (nonatomic, retain) <MTLComputePipelineState> *pipelineStateSmoothing;
@property (nonatomic, retain) <MTLTexture> *previousOutputTexture;
@property (nonatomic, retain) <MTLTexture> *scaledGuidance;
@property (nonatomic) bool showSimilarity;
@property (nonatomic, retain) <MTLTexture> *similarity;
@property (nonatomic) float similarityGaussianBlur;
@property (nonatomic) float temporalSmoothing;
@property (nonatomic) float updateRate;

- (void).cxx_destruct;
- (id)currentOutputTexture;
- (void)dealloc;
- (id)initWithDiameter:(int)arg1;
- (bool)initialized;
- (id)oldScaledGuidance;
- (id)pipelineStateSimilarity;
- (id)pipelineStateSmoothing;
- (id)previousOutputTexture;
- (bool)scaleImage:(struct __CVBuffer { }*)arg1 guidanceImage:(struct __CVBuffer { }*)arg2 destinationImage:(struct __CVBuffer { }*)arg3;
- (id)scaledGuidance;
- (void)setCurrentOutputTexture:(id)arg1;
- (void)setOldScaledGuidance:(id)arg1;
- (void)setPipelineStateSimilarity:(id)arg1;
- (void)setPipelineStateSmoothing:(id)arg1;
- (void)setPreviousOutputTexture:(id)arg1;
- (void)setScaledGuidance:(id)arg1;
- (void)setShowSimilarity:(bool)arg1;
- (void)setSimilarity:(id)arg1;
- (void)setSimilarityGaussianBlur:(float)arg1;
- (void)setTemporalSmoothing:(float)arg1;
- (void)setUpdateRate:(float)arg1;
- (bool)showSimilarity;
- (id)similarity;
- (float)similarityGaussianBlur;
- (float)temporalSmoothing;
- (float)updateRate;

@end
