
@interface SUICOrbView : UIView {
    float  _averageChipSize;
    float  _bias;
    <MTLTexture> * _blurChipsTexture;
    <MTLTexture> * _blurMaskTexture;
    float  _bubbleDrawnSize;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _bubbleSpring;
    int  _chipIndexBufferOffset;
    int  _chipNumIndexes;
    float  _chipRandomOffset;
    float  _chipRotation;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _chipSpring;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _chipsSpring;
    <MTLCommandQueue> * _commandQueue;
    <MTLTexture> * _compositeTextureMSAA;
    int  _currentlyShownChannel;
    float  _delayUntilThinking;
    <MTLDevice> * _device;
    CADisplayLink * _displayLink;
    bool  _drawingVeryLastFrame;
    int  _dynamicFramerate;
    <MTLBuffer> * _dynamicUniformBuffer;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _energySpring;
    MTLRenderPassDescriptor * _finalRenderPassDesc;
    float  _frameEnergy;
    float  _framerateEnergyModifier;
    unsigned long long  _framerateType;
    int  _framesPerSecond;
    bool  _fullyThinkingModeNow;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _glowSpring;
    NSTimer * _invalidateTimer;
    float  _maxChipSize;
    int  _maxPhysicsIterationsPerFrame;
    CAMetalLayer * _metalLayer;
    long long  _mode;
    MPSImageGaussianBlur * _mpsBlur;
    struct { 
        long long x; 
        long long y; 
        long long z; 
    }  _mpsChipBlurOffset;
    <MTLTexture> * _noiseTexture;
    int  _numberOfChips;
    id /* block */  _offCompletion;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _onSpring;
    float  _oneOverFPS;
    float  _physicsRate;
    float  _power;
    float  _powerLevel;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projectionMatrix;
    bool  _reallocTextures;
    bool  _reduceMotion;
    bool  _reduceThinkingModeFramerate;
    long long  _renderMode;
    bool  _resetOnNextFrame;
    float  _rotationEnergy;
    float  _scale;
    void _setupRasterSize;
    float  _sinTime;
    <MTLRenderPipelineState> * _siriAddBlitPipeline;
    <MTLRenderPipelineState> * _siriChipBackfacePipeline;
    <MTLRenderPipelineState> * _siriChipFrontfacePipeline;
    <MTLBuffer> * _siriChipGeom;
    MTLRenderPassDescriptor * _siriChipRenderPassDesc;
    <MTLTexture> * _siriChipsTexture;
    <MTLTexture> * _siriChipsTextureMSAA;
    <MTLRenderPipelineState> * _siriCompositePipeline;
    <MTLRenderPipelineState> * _siriShadowPipeline;
    <MTLTexture> * _smoothStepTexture;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _speakingSpring;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _specularSpring;
    <MTLBuffer> * _sphereGeom;
    int  _sphereIndexBufferOffet;
    <MTLRenderPipelineState> * _sphereMaskPipeline;
    MTLRenderPassDescriptor * _sphereMaskRenderPassDesc;
    <MTLTexture> * _sphereMaskTexture;
    <MTLTexture> * _sphereMaskTextureMSAA;
    int  _sphereNumIndexes;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } projectionMatrix; 
    }  _sphereUniforms;
    bool  _startingThinkingModeNow;
    bool  _suppressTTSAnimations;
    float  _thinkRotation;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _thinkingSpring;
    float  _thinkingTimeStart;
    float  _time;
    void * _uniformBufferAddress;
    struct { 
        float value; 
        float curVelocity; 
        float maxAcceleration; 
        float springAmount; 
    }  _volumeSpring;
}

@property (nonatomic) float bias;
@property (nonatomic) int currentlyShownChannel;
@property (nonatomic, retain) NSTimer *invalidateTimer;
@property (nonatomic) long long mode;
@property (nonatomic) int numberOfChips;
@property (nonatomic) float power;
@property (nonatomic) bool reduceThinkingModeFramerate;
@property (nonatomic) float scale;
@property (nonatomic) bool suppressTTSAnimations;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_choosePhysicsRate:(int)arg1;
- (void)_commonInitWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_configurePreferredFramesPerSecond:(int)arg1;
- (void)_createNoiseTexture;
- (void)_createSiriChipBuffer;
- (void)_createSmoothStepTexture;
- (void)_createSphereBuffer;
- (void)_didSetRenderModeFrom:(long long)arg1 to:(long long)arg2;
- (void)_drawSiriFrame:(id)arg1;
- (void)_drawingVeryLastFrameLogic:(id)arg1;
- (void)_drawingVeryLastFrameOffCompletion;
- (void)_endReducedFramerateForPerf;
- (id)_from:(id)arg1 getComputePipeline:(id)arg2 err:(id*)arg3;
- (id)_from:(id)arg1 getRenderPipeline:(id)arg2 err:(id*)arg3;
- (void)_initCommandQueue;
- (void)_initNoiseOffsets;
- (void)_initSprings;
- (void)_invalidateDisplayLink;
- (void)_loadAssets;
- (void)_loadMetalPipelines;
- (void)_loadMetalState;
- (void)_resetDisplayLinkFramerate;
- (void)_setMode:(long long)arg1;
- (void)_setPaused:(bool)arg1;
- (void)_setupSpring:(struct { float x1; float x2; float x3; float x4; }*)arg1 withType:(unsigned long long)arg2 initialValue:(float)arg3;
- (void)_startReducedFramerateForPerf;
- (void)_updateChipsSizesForOnOff;
- (void)_updateDynamicBufferState;
- (void)_updateMetalTextureRasterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateRenderModeWithDelta:(float)arg1;
- (void)_updateSiriGraphicsState:(double)arg1;
- (void)_updateSiriPhysics:(float)arg1;
- (void)animateToOffWithCompletion:(id /* block */)arg1;
- (float)bias;
- (int)currentlyShownChannel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (id)invalidateTimer;
- (float)linearPowerLevel;
- (long long)mode;
- (int)numberOfChips;
- (void)pauseAnimationAndReset;
- (float)power;
- (void)prewarmOrb;
- (bool)reduceThinkingModeFramerate;
- (float)scale;
- (void)setBias:(float)arg1;
- (void)setCurrentlyShownChannel:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInvalidateTimer:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setNumberOfChips:(int)arg1;
- (void)setPower:(float)arg1;
- (void)setPowerLevel:(float)arg1;
- (void)setReduceThinkingModeFramerate:(bool)arg1;
- (void)setScale:(float)arg1;
- (void)setSuppressTTSAnimations:(bool)arg1;
- (bool)suppressTTSAnimations;

@end
