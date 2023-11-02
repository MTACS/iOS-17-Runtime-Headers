
@interface VFXREDrawCallContextImpl : NSObject <VFXREDrawCallContext> {
    void * __bufferTable;
    void * __constantTable;
    const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; } x1; bool x2; unsigned int x3; } * __renderTargetInfo;
    void * __samplerTable;
    void * __textureTable;
    const void * __viewports;
}

@property (nonatomic) void*_bufferTable;
@property (nonatomic) void*_constantTable;
@property (nonatomic) const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; } x1; bool x2; unsigned int x3; }*_renderTargetInfo;
@property (nonatomic) void*_samplerTable;
@property (nonatomic) void*_textureTable;
@property (nonatomic) const void*_viewports;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enableBreakthrough;
@property (nonatomic, readonly) bool enableClipping;
@property (nonatomic, readonly) bool enableNearFieldVignetting;
@property (nonatomic, readonly) float fadeOpacity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDrawingBlur;
@property (nonatomic, readonly) bool isDrawingDepthOnly;
@property (nonatomic, readonly) bool renderForBlur;
@property (nonatomic, readonly) <VFXRERenderTargetInfo> *renderTargetInfo;
@property (nonatomic, readonly) bool renderToCompositeLayer;
@property (nonatomic, readonly) <VFXStencilInfo> *stencilInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useDitherFade;

- (void*)_bufferTable;
- (void*)_constantTable;
- (const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; } x1; bool x2; unsigned int x3; }*)_renderTargetInfo;
- (void*)_samplerTable;
- (void*)_textureTable;
- (const void*)_viewports;
- (id)buffer:(int)arg1 :(id)arg2 :(long long*)arg3 :(long long*)arg4;
- (const char *)constantData:(int)arg1;
- (bool)constantOffsetAndSize:(int)arg1 :(id)arg2 :(long long*)arg3 :(long long*)arg4;
- (bool)isDrawingBlur;
- (bool)isDrawingDepthOnly;
- (id)renderTargetInfo;
- (id)sampler:(int)arg1 :(id)arg2;
- (void)setLateLatchingPatchHandler:(id /* block */)arg1;
- (void)set_bufferTable:(void*)arg1;
- (void)set_constantTable:(void*)arg1;
- (void)set_renderTargetInfo:(const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; } x1; bool x2; unsigned int x3; }*)arg1;
- (void)set_samplerTable:(void*)arg1;
- (void)set_textureTable:(void*)arg1;
- (void)set_viewports:(const void*)arg1;
- (id)texture:(int)arg1 :(id)arg2;
- (void)viewports:(const void**)arg1 :(long long*)arg2;

@end
