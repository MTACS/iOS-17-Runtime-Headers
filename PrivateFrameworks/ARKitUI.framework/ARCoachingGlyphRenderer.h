
@interface ARCoachingGlyphRenderer : NSObject <ARCoachingGlyphStateDelegate, ARCoachingRenderer> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _MVP;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _R;
    float  _a_vel;
    ARCoachingStateSpring * _alphaSpring;
    struct { 
        double angle; 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*axis; 
    }  _angularVelocity;
    ARCoachingSpringDouble3 * _bottomPlaneTranslationSpring;
    <MTLComputePipelineState> * _computePipelineState;
    ARCoachingStateSpring * _cubeResolveSpring;
    <MTLDevice> * _device;
    ARCoachingDeviceController * _deviceController;
    bool  _dirty_tesselation_factors;
    ARCoachingDotsRenderer * _dotsRenderer;
    float  _edgeFactor;
    float  _insideFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastDrawableSize;
    CAMetalLayer * _layer;
    <MTLTexture> * _msaaTex;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _mvp_ortho;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _mvp_persp;
    ARCoachingBasicSpring * _orientationSpring;
    ARCoachingDeviceController * _parallaxDeviceController;
    unsigned long long  _pixelFormat;
    ARCoachingStateSpring * _planeResolveSpring;
    <MTLRenderPipelineState> * _postTessellationPipelineState;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _rotation;
    float  _rotationAngleY;
    ARCoachingQuaternionSpring * _rotationSpring;
    int  _sampleCount;
    ARCoachingSpringDouble3 * _scaleSpring;
    ARCoachingMetalSplineData * _splineData;
    ARCoachingGlyphState * _state;
    float  _strokeWeight;
    ARCoachingAnimTime * _time;
    ARCoachingSpringDouble3 * _topPlaneTranslationSpring;
    ARCoachingStateSpring * _verticalResolvingSpring;
}

@property (nonatomic) float a_vel;
@property (nonatomic, retain) <MTLComputePipelineState> *computePipelineState;
@property (nonatomic, readonly) double currentAnimationTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ARCoachingDotsRenderer *dotsRenderer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLRenderPipelineState> *postTessellationPipelineState;
@property (nonatomic) float rotationAngleY;
@property (nonatomic, readonly) ARCoachingGlyphState *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)a_vel;
- (void)bottomPlaneTranslationTargetChanged;
- (id)computePipelineState;
- (void)computeRotation:(double)arg1;
- (void)computeTesselationFactorsForCommandBuffer:(id)arg1;
- (double)currentAnimationTime;
- (id)dotsRenderer;
- (void)drawWithTimeDelta:(double)arg1 drawable:(id)arg2 commandBuffer:(id)arg3;
- (void)generateTexturesWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithLayer:(id)arg1 device:(id)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(int)arg4 deviceMaskImage:(id)arg5;
- (id)postTessellationPipelineState;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (void)quaternionTargetChanged;
- (void)renderPostTessellationInDrawable:(id)arg1 withCommandBuffer:(id)arg2;
- (void)resetAnimationTime:(double)arg1;
- (void)resetData;
- (void)resetSprings;
- (void)resizeIfNeeded:(id)arg1;
- (void)restartAnimation;
- (float)rotationAngleY;
- (void)scaleTargetChanged;
- (void)setA_vel:(float)arg1;
- (void)setComputePipelineState:(id)arg1;
- (void)setDotsRenderer:(id)arg1;
- (void)setOrientationAngle:(float)arg1;
- (void)setPostTessellationPipelineState:(id)arg1;
- (void)setRotationAngleY:(float)arg1;
- (void)snapStateChanged;
- (id)state;
- (void)stepSprings:(double)arg1;
- (void)topPlaneTranslationTargetChanged;
- (void)updateAngularVelocity;

@end
