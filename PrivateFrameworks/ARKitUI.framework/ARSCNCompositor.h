
@interface ARSCNCompositor : NSObject {
    <MTLTexture> * _alphaTexture;
    long long  _compositorAlgorithm;
    ARFrame * _currentFrame;
    long long  _currentOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentSize;
    double  _depthScale;
    <MTLDevice> * _device;
    unsigned long long  _dilationRadius;
    bool  _disableReverseZ;
    unsigned long long  _erodeRadius;
    double  _filterEpsilon;
    double  _filterOffset;
    double  _filterScale;
    unsigned long long  _foregroundBitMask;
    ARMatteGenerator * _matteGenerator;
    <MTLLibrary> * _mattingLibrary;
    float  _mattingScaleFactor;
    long long  _mode;
    <MTLRenderPipelineState> * _resampleDepthML;
    <MTLRenderPipelineState> * _resampleML;
    bool  _showOcclusionGeometry;
    SCNTechnique * _technique;
    unsigned long long  _uncertaintyRadius;
    ARSCNView * _view;
    struct CGSize { 
        double width; 
        double height; 
    }  _workingResolution;
    float  _workingScaleFactor;
}

@property (nonatomic, readonly) <MTLTexture> *alphaTexture;
@property (nonatomic) long long compositorAlgorithm;
@property (nonatomic, retain) ARFrame *currentFrame;
@property (nonatomic) long long currentOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } currentSize;
@property (nonatomic) double depthScale;
@property (nonatomic) unsigned long long dilationRadius;
@property (nonatomic) unsigned long long erosionRadius;
@property (nonatomic) double filterEpsilon;
@property (nonatomic) double filterOffset;
@property (nonatomic) double filterScale;
@property (nonatomic) unsigned long long foregroundBitMask;
@property (nonatomic, readonly) long long mode;
@property (nonatomic) bool showOcclusionGeometry;
@property (nonatomic) unsigned long long uncertaintyRadius;

+ (id)mattingTechniqueDual;
+ (id)mattingWithDepthAndDualTechnique;
+ (id)techniqueDictionaryWithName:(id)arg1;

- (void).cxx_destruct;
- (id)alphaTexture;
- (long long)compositorAlgorithm;
- (id)currentFrame;
- (long long)currentOrientation;
- (struct CGSize { double x1; double x2; })currentSize;
- (void)dealloc;
- (double)depthScale;
- (unsigned long long)dilationRadius;
- (void)encodeAlphaResampleToCommandBuffer:(id)arg1 resolution:(struct CGSize { double x1; double x2; })arg2 input:(id)arg3 output:(id)arg4;
- (void)encodeDepthResampleToCommandBuffer:(id)arg1 resolution:(struct CGSize { double x1; double x2; })arg2 input:(id)arg3 output:(id)arg4;
- (unsigned long long)erosionRadius;
- (void)executeOcclusionDepthStencilCallback:(id)arg1;
- (void)executeOverlayMatteCallbackDual:(id)arg1;
- (double)filterEpsilon;
- (double)filterOffset;
- (double)filterScale;
- (unsigned long long)foregroundBitMask;
- (id)initWithView:(id)arg1 mode:(long long)arg2 algorithm:(long long)arg3;
- (long long)mode;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })orientedVerticesWithResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setCompositorAlgorithm:(long long)arg1;
- (void)setCurrentFrame:(id)arg1;
- (void)setCurrentOrientation:(long long)arg1;
- (void)setCurrentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDepthScale:(double)arg1;
- (void)setDilationRadius:(unsigned long long)arg1;
- (void)setErosionRadius:(unsigned long long)arg1;
- (void)setFilterEpsilon:(double)arg1;
- (void)setFilterOffset:(double)arg1;
- (void)setFilterScale:(double)arg1;
- (void)setForegroundBitMask:(unsigned long long)arg1;
- (void)setShowOcclusionGeometry:(bool)arg1;
- (void)setUncertaintyRadius:(unsigned long long)arg1;
- (bool)showOcclusionGeometry;
- (unsigned long long)uncertaintyRadius;

@end
