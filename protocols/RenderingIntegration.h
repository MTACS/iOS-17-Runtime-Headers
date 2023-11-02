
@protocol RenderingIntegration <NSObject>

@required

- (id)initWithMetalContext:(PTMetalContext *)arg1 renderEffects:(PTRenderEffectManager *)arg2 colorSize:(struct CGSize { double x1; double x2; })arg3 disparitySize:(struct CGSize { double x1; double x2; })arg4 debugRendering:(long long)arg5 verbose:(bool)arg6 config:(NSDictionary *)arg7 quality:(int)arg8;
- (unsigned long long)minimumResourceHeapSize;
- (int)prewarm;
- (int)renderContinuousWithSource:(id <MTLCommandBuffer>)arg1 renderRequest:(PTRenderRequest *)arg2;
- (void)setResourceHeap:(id <MTLHeap>)arg1;

@end
