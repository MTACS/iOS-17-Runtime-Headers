
@protocol PTRenderEffect <NSObject>

@required

- (id)depthNearFar;
- (unsigned long long)depthOutputPixelFormat;
- (unsigned long long)effectPriority;
- (short)effectType;
- (bool)enabled;
- (void)render:(id <MTLCommandBuffer>)arg1 renderRequest:(PTRenderRequest *)arg2 input:(PTRenderEffectInput *)arg3 output:(PTRenderEffectOutput *)arg4;
- (bool)reverseZ;
- (unsigned long long)rgbaOutputPixelFormat;
- (void)setDepthNearFar;
- (void)setEnabled:(bool)arg1;
- (void)setReverseZ:(bool)arg1;
- (void)update:(float)arg1 renderRequest:(PTRenderRequest *)arg2;

@end
