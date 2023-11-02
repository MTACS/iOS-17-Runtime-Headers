
@interface PSEVideoProcessor : NSObject {
    float  _area;
    float  _avl;
    struct ConstBuf { 
        float fPixelCnt; 
        bool bMitigate; 
        bool bDebug; 
        bool bCallbackValues; 
        bool bCopyOnly; 
        bool bVideoRange; 
        bool bProtected; 
        unsigned int uEOTF; 
        unsigned int uColSpace; 
        float maxNits; 
        float edr; 
        float displayEDR; 
        float fps; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*u2CbCrSubSampleRate; 
    }  _bufferConstants;
    <MTLBuffer> * _bufferContrast;
    <MTLBuffer> * _bufferContrastKernel;
    <MTLBuffer> * _bufferCurState;
    <MTLBuffer> * _bufferData;
    <MTLBuffer> * _bufferDataDebug;
    <MTLBuffer> * _bufferEnergy;
    <MTLBuffer> * _bufferEnergy2;
    <MTLBuffer> * _bufferFrameLumaSum;
    <MTLBuffer> * _bufferGammaKernel;
    <MTLBuffer> * _bufferResponses;
    <MTLBuffer> * _bufferResponsesNorm;
    <MTLBuffer> * _bufferResults;
    float  _cA;
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _cptPSO_RiskComputePass0;
    <MTLComputePipelineState> * _cptPSO_RiskComputePass1;
    <MTLComputePipelineState> * _cptPSO_RiskComputePass2;
    <MTLComputePipelineState> * _cptPSO_RiskComputePass3;
    <MTLDevice> * _device;
    float  _energyPoolGammaScale;
    float  _energyPoolGammaShape;
    float  _energypoolexponent;
    float  _fps;
    float  _gain;
    int  _idxEquivalentKernelIndex;
    int  _idxEquivalentSize;
    int  _idxFrameRate;
    bool  _inTestingMode;
    <MTLLibrary> * _library;
    bool  _madeProtectedBuffers;
    bool  _needsInitialization;
    float  _nits;
    double  _previousSurfaceTime;
    float  _probabilityPoolExponent;
    float  _probabilityPoolGammaShape;
    float  _probabilitypoolgammascale;
    <MTLTexture> * _processedTexture;
    unsigned long long  _protectionStatus;
    <MTLTexture> * _sourceCbCrTexture;
    <MTLTexture> * _sourceTexture;
    SwiftVideoProcessor * _swiftProcessor;
    float  _tauadapt;
    float  _taumitigation;
    id /* block */  _validationCallback;
}

@property (nonatomic) bool inTestingMode;
@property (nonatomic, copy) id /* block */ validationCallback;

+ (void)initialize;
+ (bool)needsProcessing;

- (void).cxx_destruct;
- (int)_colorSpaceFromSurface:(struct __IOSurface { }*)arg1;
- (int)_colorSpaceValueForName:(struct __CFString { }*)arg1;
- (void)_computeDisplaySizeIndexSelection;
- (int)_computeFrameRateIndexSelection;
- (int)_deviceClass;
- (void)_initialize;
- (void)_initializeProtectedBuffers:(unsigned long long)arg1;
- (unsigned long long)_pixelFormatForSurface:(struct __IOSurface { }*)arg1;
- (struct KernelData { unsigned int x1[5]; float *x2; })_prepare_contrast_kernels;
- (id)_prepare_gamma_kernel:(float)arg1 shape:(float)arg2 scale:(float)arg3;
- (void)_processFrame:(id)arg1 sourceSurface:(struct __IOSurface { }*)arg2 outSurface:(struct __IOSurface { }*)arg3;
- (void)_processSurface:(struct __IOSurface { }*)arg1 withTimestamp:(double)arg2 destinationSurface:(struct __IOSurface { }*)arg3 options:(id)arg4;
- (void)_resetState:(unsigned long long)arg1;
- (void)_sourceCopyDebuggingChanged:(id)arg1;
- (void)_visualDebuggingChanged:(id)arg1;
- (bool)canProcessSurface:(struct __IOSurface { }*)arg1;
- (bool)inTestingMode;
- (id)init;
- (void)processSourceSurface:(struct __IOSurface { }*)arg1 withTimestamp:(double)arg2 toDestinationSurface:(struct __IOSurface { }*)arg3 options:(id)arg4;
- (void)setInTestingMode:(bool)arg1;
- (void)setValidationCallback:(id /* block */)arg1;
- (id /* block */)validationCallback;

@end
