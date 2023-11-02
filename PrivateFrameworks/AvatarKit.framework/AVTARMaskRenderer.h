
@interface AVTARMaskRenderer : NSObject {
    unsigned long long  _antialiasingMode;
    ARFrame * _arFrame;
    unsigned long long  _capturedDataHeight;
    unsigned long long  _capturedDataWidth;
    bool  _clearWithCamera;
    <MTLRenderPipelineState> * _dbgCamDepthPipeline;
    bool  _debugMode;
    bool  _depthDataIsMirrored;
    float  _depthSmoothingFactor;
    bool  _flipDepth;
    float  _headZ;
    long long  _interfaceOrientation;
    bool  _isFirstFrame;
    <MTLTexture> * _lastCapturedDepth;
    <MTLLibrary> * _library;
    <MTLRenderPipelineState> * _maskPipeline;
    <MTLRenderPipelineState> * _maskPipelineBlurXHigh;
    <MTLRenderPipelineState> * _maskPipelineBlurYHigh;
    ARMatteGenerator * _matteGenerator;
    <MTLTexture> * _matteTexture;
    <SCNTechniqueSupport><AVTSceneRenderer> * _owner;
    bool  _ownerIsView;
    unsigned long long  _pipelineKind;
    AVTPresentationConfiguration * _presentationConfiguration;
    <MTLTexture> * _rawMaskTexture;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderSize;
    SCNTechnique * _technique;
    id /* block */  _techniqueDidChangeHandler;
    struct __CVMetalTextureCache { } * _textureCache;
    <MTLTexture> * _tmpMaskBlurTexture;
    bool  _writeID;
}

@property (retain) <MTLTexture> *capturedDepth;
@property (nonatomic) float depthSmoothingFactor;
@property (nonatomic) bool flipDepth;
@property (nonatomic, retain) AVTPresentationConfiguration *presentationConfiguration;

- (void).cxx_destruct;
- (void)_updateMaskParametersWithRootJointPivotPosition;
- (id)capturedDepth;
- (void)dealloc;
- (float)depthSmoothingFactor;
- (bool)flipDepth;
- (id)init;
- (id)initWithOwner:(id)arg1 presentationConfiguration:(id)arg2 techniqueDidChangeHandler:(id /* block */)arg3;
- (id)presentationConfiguration;
- (void)reloadDepthShaders;
- (void)reloadTechnique;
- (void)render:(id)arg1;
- (void)setCapturedDepth:(id)arg1;
- (void)setClearWithCamera:(bool)arg1 antialiasingMode:(unsigned long long)arg2;
- (void)setDepthSmoothingFactor:(float)arg1;
- (void)setFlipDepth:(bool)arg1;
- (void)setPresentationConfiguration:(id)arg1;
- (void)setup:(struct CGSize { double x1; double x2; })arg1 context:(id)arg2 colorPixelFormat:(unsigned long long)arg3;
- (void)updateMaskParametersAtTime:(double)arg1;
- (void)updateMaskParametersWithRootJointNode:(id)arg1;
- (void)updateMaskParametersWithRootJointNodes:(id)arg1;
- (void)updateWithARFrame:(id)arg1 fallBackDepthData:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 mirroredDepthData:(bool)arg5;
- (void)updateWithDepthTexture:(id)arg1 captureOrientation:(long long)arg2 interfaceOrientation:(long long)arg3 mirroredDepthData:(bool)arg4;

@end
