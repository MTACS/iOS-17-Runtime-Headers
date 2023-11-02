
@interface LiteSynthesis : NSObject <FRCSynthesis> {
    struct __CVBuffer { } * _L1Loss0;
    struct __CVBuffer { } * _L1Loss1;
    <MTLTexture> * _L1Texture0;
    <MTLTexture> * _L1Texture1;
    struct __CVBuffer { } * _alphaMap;
    <MTLTexture> * _alphaTexture;
    struct __CVBuffer { } * _backwardFlow;
    Backwarp * _backwarp;
    <MTLBuffer> * _bestErrorBuffer;
    <MTLTexture> * _combinedWarpedTexture;
    <MTLCommandQueue> * _commandQueue;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    <MTLDeviceSPI> * _device;
    bool  _enableMemDump;
    struct __CVBuffer { } * _flowPixelBuffer0;
    struct __CVBuffer { } * _flowPixelBuffer1;
    <MTLTexture> * _flowTexture0;
    <MTLTexture> * _flowTexture1;
    struct __CVBuffer { } * _forwardFlow;
    Forwarp * _forwarp;
    bool  _framePipeline;
    struct __CVBuffer { } * _intermediaCVBuffer;
    bool  _linearSplatting;
    <MTLTexture> * _mapTexture;
    struct __CVBuffer { } * _normalizedFirst;
    <MTLTexture> * _normalizedFwarpTextures;
    struct __CVBuffer { } * _normalizedSecond;
    struct __CVBuffer { } * _selectMap;
    GPUSynthesis * _synthesis;
    bool  _temporalFiltering;
    bool  _textureFromCVPixelBuffer;
    long long  _usage;
    <MTLBuffer> * _warpOutputBuffer;
    struct __CVBuffer {} * _warpedForwardFeatures;
    <MTLTexture> * _warpedForwardTextures;
    struct { 
        struct { 
            float mvX; 
            float mvY; 
            int count; 
        } globalMv; 
        struct { 
            float mvX; 
            float mvY; 
            int count; 
        } averageMv; 
        float timeScale; 
        float meanRatio; 
    }  flowStats0;
    struct { 
        struct { 
            float mvX; 
            float mvY; 
            int count; 
        } globalMv; 
        struct { 
            float mvX; 
            float mvY; 
            int count; 
        } averageMv; 
        float timeScale; 
        float meanRatio; 
    }  flowStats1;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableMemDump;
@property (nonatomic) int flowLevel;
@property (nonatomic) bool framePipeline;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool linearSplatting;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long synthesisMode;
@property (nonatomic) bool temporalFiltering;
@property (nonatomic) bool textureFromCVPixelBuffer;
@property (nonatomic) long long usage;

- (void).cxx_destruct;
- (void)allocateResources;
- (void)calcBackwarpLossFirst:(id)arg1 second:(id)arg2 commandBuffer:(id)arg3 callback:(id /* block */)arg4;
- (void)combineWarpedTexture:(id)arg1 and:(id)arg2 normalized0:(id)arg3 normalized1:(id)arg4 alpha:(id)arg5 toOutput:(id)arg6 mapTexture:(id)arg7 callback:(id /* block */)arg8;
- (void)createFeaturesFromFirstImage:(struct __CVBuffer { }*)arg1 secondImage:(struct __CVBuffer { }*)arg2 flowForward:(struct __CVBuffer { }*)arg3 flowBackward:(struct __CVBuffer { }*)arg4;
- (bool)createModules;
- (bool)dumpMemoryAt:(float)arg1 frameIndex:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 channels:(unsigned long long)arg5;
- (bool)enableMemDump;
- (void)forwardWarpForFlow:(int)arg1 feature:(id)arg2 flow:(id)arg3 error:(id)arg4 timeScale:(float)arg5 warpedOutput:(id)arg6 callback:(id /* block */)arg7;
- (void)forwarpFirstTexture:(id)arg1 SecondTexture:(id)arg2 timeScale:(float)arg3 needWait:(bool)arg4;
- (bool)framePipeline;
- (void)generateBlendingMap:(id)arg1 and:(id)arg2 toAlpha:(id)arg3 timeScale:(float)arg4 normalized0:(id)arg5 normalized1:(id)arg6 callback:(id /* block */)arg7;
- (id)initWithMode:(long long)arg1;
- (bool)linearSplatting;
- (void)liteSynthesisWithFlowForward:(struct __CVBuffer { }*)arg1 flowBackward:(struct __CVBuffer { }*)arg2 firstFeature:(id)arg3 secondFeature:(id)arg4 outputTexture:(id)arg5 timeScale:(float)arg6 frameIndex:(unsigned long long)arg7;
- (void)postFilterFrom:(id)arg1 mapTexture:(id)arg2 toTexture:(id)arg3 callback:(id /* block */)arg4;
- (void)releaseFeatures;
- (void)releaseResources;
- (void)setEnableMemDump:(bool)arg1;
- (void)setFramePipeline:(bool)arg1;
- (void)setLinearSplatting:(bool)arg1;
- (void)setTemporalFiltering:(bool)arg1;
- (void)setTextureFromCVPixelBuffer:(bool)arg1;
- (void)setUsage:(long long)arg1;
- (bool)switchUsageTo:(long long)arg1;
- (struct __CVBuffer { }*)synthesizeFrameForTimeScale:(float)arg1 frameIndex:(unsigned long long)arg2;
- (struct __CVBuffer { }*)synthesizeFrameFromFirstImage:(struct __CVBuffer { }*)arg1 secondImage:(struct __CVBuffer { }*)arg2 flowForward:(struct __CVBuffer { }*)arg3 flowBackward:(struct __CVBuffer { }*)arg4 timeScale:(float)arg5 frameIndex:(unsigned long long)arg6;
- (bool)temporalFiltering;
- (bool)textureFromCVPixelBuffer;
- (void)upScaleforwardFlow:(struct __CVBuffer { }*)arg1 backwardFlow:(struct __CVBuffer { }*)arg2 outputTexture:(id)arg3 commandBuffer:(id)arg4;
- (long long)usage;

@end
