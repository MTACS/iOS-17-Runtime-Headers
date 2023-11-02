
@interface VFXRERenderTargetInfoImpl : NSObject <VFXRERenderTargetInfo> {
    const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; } x1; bool x2; unsigned int x3; } * __renderTargetInfo;
}

@property (nonatomic) const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; } x1; bool x2; unsigned int x3; }*_renderTargetInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long depthPixelFormat;
@property (nonatomic, readonly) unsigned long long depthStencilPixelFormat;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sampleCount;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool vrrEnabled;

- (const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; } x1; bool x2; unsigned int x3; }*)_renderTargetInfo;
- (unsigned long long)colorPixelFormatAtIndex:(long long)arg1;
- (unsigned long long)depthStencilPixelFormat;
- (long long)sampleCount;
- (void)set_renderTargetInfo:(const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; } x1; bool x2; unsigned int x3; }*)arg1;
- (bool)vrrEnabled;

@end
