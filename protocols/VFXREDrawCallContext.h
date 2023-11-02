
@protocol VFXREDrawCallContext <NSObject>

@required

- (<MTLBuffer> *)buffer:(int)arg1 :(NSString *)arg2 :(long long*)arg3 :(long long*)arg4;
- (const char *)constantData:(int)arg1;
- (bool)constantOffsetAndSize:(int)arg1 :(NSString *)arg2 :(long long*)arg3 :(long long*)arg4;
- (bool)isDrawingBlur;
- (bool)isDrawingDepthOnly;
- (<VFXRERenderTargetInfo> *)renderTargetInfo;
- (<MTLSamplerState> *)sampler:(int)arg1 :(NSString *)arg2;
- (void)setLateLatchingPatchHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { void*x1[4]; }*
- (<MTLTexture> *)texture:(int)arg1 :(NSString *)arg2;
- (void)viewports:(void**)arg1 :(long long*)arg2;

@optional

- (bool)enableBreakthrough;
- (bool)enableClipping;
- (bool)enableNearFieldVignetting;
- (float)fadeOpacity;
- (bool)renderForBlur;
- (bool)renderToCompositeLayer;
- (<VFXStencilInfo> *)stencilInfo;
- (bool)useDitherFade;

@end
