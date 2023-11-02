
@interface PTRenderEffectContainer : NSObject {
    <PTRenderEffect> * _renderEffect;
    PTRenderEffectInput * _renderEffectInput;
    PTRenderEffectOutput * _renderEffectOutput;
}

@property (nonatomic, retain) <PTRenderEffect> *renderEffect;
@property (nonatomic, retain) PTRenderEffectInput *renderEffectInput;
@property (nonatomic, retain) PTRenderEffectOutput *renderEffectOutput;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 renderEffect:(id)arg2 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (id)initWithMetalContext:(id)arg1 rgbaOutputPixelFormat:(unsigned long long)arg2 depthOutputPixelFormat:(unsigned long long)arg3 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (id)renderEffect;
- (id)renderEffectInput;
- (id)renderEffectOutput;
- (void)setRenderEffect:(id)arg1;
- (void)setRenderEffectInput:(id)arg1;
- (void)setRenderEffectOutput:(id)arg1;

@end
