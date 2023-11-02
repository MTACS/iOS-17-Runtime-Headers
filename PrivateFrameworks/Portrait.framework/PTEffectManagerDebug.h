
@interface PTEffectManagerDebug : NSObject <PTRenderEffect> {
    <MTLComputePipelineState> * _effectDepthDebug;
    PTUtil * _util;
    void depthNearFar;
    unsigned long long  depthOutputPixelFormat;
    unsigned long long  effectPriority;
    short  effectType;
    bool  enabled;
    float  maxDepth;
    bool  reverseZ;
    unsigned long long  rgbaOutputPixelFormat;
}

@property (readonly, copy) NSString *debugDescription;
@property void depthNearFar;
@property (readonly) unsigned long long depthOutputPixelFormat;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long effectPriority;
@property (readonly) short effectType;
@property bool enabled;
@property (readonly) unsigned long long hash;
@property bool reverseZ;
@property (readonly) unsigned long long rgbaOutputPixelFormat;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)depthNearFar;
- (unsigned long long)depthOutputPixelFormat;
- (unsigned long long)effectPriority;
- (short)effectType;
- (bool)enabled;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)render:(id)arg1 renderRequest:(id)arg2 input:(id)arg3 output:(id)arg4;
- (bool)reverseZ;
- (unsigned long long)rgbaOutputPixelFormat;
- (void)setDepthNearFar;
- (void)setEnabled:(bool)arg1;
- (void)setReverseZ:(bool)arg1;
- (void)update:(float)arg1 renderRequest:(id)arg2;

@end
