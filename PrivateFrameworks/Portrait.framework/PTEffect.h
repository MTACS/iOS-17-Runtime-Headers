
@interface PTEffect : NSObject {
    NSObject<OS_dispatch_queue> * _asyncInitQueue;
    bool  _asyncInitialization;
    bool  _asynchronous;
    long long  _debugType;
    PTEffectRenderer * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    PTEffectDescriptor * _effectDescriptor;
    PTFaceAttributesNetwork * _faceAttributesNetwork;
    int  _frameId;
    PTHumanDetections * _humanDetections;
    double  _lastDetectionUpdate;
    double  _lastFrameTime;
    PTMetalContext * _metalContext;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferSession;
    bool  _rebuildEffect;
    PTEffectResources * _resources;
}

@property long long effectQuality;

+ (void)disableAsynchronousWork;
+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned int x2; })personSegmentationMatteFormatForColorSize:(struct CGSize { double x1; double x2; })arg1;
+ (int)prewarmForMediaserverd;
+ (int)prewarmWithFormat:(struct opaqueCMFormatDescription { }*)arg1 metalCommandQueue:(id)arg2 effectType:(unsigned long long)arg3 sharedResources:(id)arg4;

- (void).cxx_destruct;
- (void)_setEffectQuality:(long long)arg1;
- (int)_setEffectType:(unsigned long long)arg1;
- (id)activeReactions;
- (void)dealloc;
- (long long)effectQuality;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithDescriptor:(id)arg1 sharedResources:(id)arg2;
- (id)initWithFormat:(struct opaqueCMFormatDescription { }*)arg1 metalCommandQueue:(id)arg2 availableEffectTypes:(unsigned long long)arg3 activeEffectType:(unsigned long long)arg4 effectQuality:(long long)arg5;
- (id)initWithFormat:(struct opaqueCMFormatDescription { }*)arg1 metalCommandQueue:(id)arg2 availableEffectTypes:(unsigned long long)arg3 activeEffectType:(unsigned long long)arg4 prewarmOnly:(bool)arg5 effectQuality:(long long)arg6;
- (bool)isRenderRequiredForRequest:(id)arg1;
- (void)keepOldDelegateAlive:(id)arg1;
- (int)render:(id)arg1;
- (int)renderReaction:(id)arg1 effectRenderRequest:(id)arg2;
- (void)reset;
- (void)setDebug:(long long)arg1;
- (void)setEffectQuality:(long long)arg1;
- (int)setEffectType:(unsigned long long)arg1;
- (int)updateEffectDelegate:(bool)arg1;
- (bool)validPixelBuffer:(struct __CVBuffer { }*)arg1;
- (int)validateRenderRequest:(id)arg1 reactionOnly:(bool)arg2;
- (int)waitForInitialization;

@end
