
@interface ARCoachingGeoTrackingRenderer : NSObject <ARCoachingRenderer> {
    <MTLRenderPipelineState> * _blockColorPipeline;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _contentCameraMVPMatrix;
    NSMutableArray * _contentIndexBuffers;
    <MTLBuffer> * _contentVertexGenerics;
    <MTLBuffer> * _contentVertexPositions;
    ARCoachingStateSpring * _cubeResolveSpring;
    <MTLDepthStencilState> * _depthState;
    <MTLTexture> * _depthTexture;
    <MTLDevice> * _device;
    ARCoachingDeviceController * _deviceController;
    float  _ftime;
    <MTLRenderPipelineState> * _inflatedHullPipeline;
    CAMetalLayer * _layer;
    ARCoachingBasicSpring * _orientationSpring;
    unsigned long long  _pixelFormat;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projectionMatrix;
    NSObject<OS_dispatch_queue> * _queue;
    ARCoachingGlyphState * _state;
    ARCoachingAnimTime * _time;
    ARCoachingStateSpring * _verticalResolvingSpring;
}

@property (nonatomic, readonly) double currentAnimationTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARCoachingGlyphState *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)currentAnimationTime;
- (void)drawBuildingOutlineWithTimeDelta:(double)arg1 drawable:(id)arg2 commandBuffer:(id)arg3;
- (void)drawDeviceWithTimeDelta:(double)arg1 drawable:(id)arg2 commandBuffer:(id)arg3;
- (void)drawWithTimeDelta:(double)arg1 drawable:(id)arg2 commandBuffer:(id)arg3;
- (id)initWithLayer:(id)arg1 device:(id)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(int)arg4 deviceMaskImage:(id)arg5;
- (bool)loadOutlineModelWith:(id*)arg1;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (void)resetAnimationTime:(double)arg1;
- (void)resizeIfNeeded:(id)arg1;
- (void)setOrientationAngle:(float)arg1;
- (id)state;
- (void)updateFrameStateWithTimeDelta:(double)arg1;

@end
