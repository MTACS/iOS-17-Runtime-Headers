
@interface PXGMetalRenderContext : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    bool  _supportsSharedTextures;
    <MTLComputePipelineState> * _textureCopyRegionKernelPipelineState;
    bool  _wantsMutableSharedTextures;
    bool  _wantsUniformThreadgroups;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) <MTLLibrary> *library;
@property (nonatomic, readonly) bool supportsSharedTextures;
@property (nonatomic, retain) <MTLComputePipelineState> *textureCopyRegionKernelPipelineState;
@property (nonatomic, readonly) bool wantsMutableSharedTextures;
@property (nonatomic) bool wantsUniformThreadgroups;

+ (bool)deviceSupportsSharedTextures;
+ (id)privateContextWithDevice:(id)arg1;
+ (id)privateContextWithDevice:(id)arg1 commandQueue:(id)arg2;
+ (id)sharedContextWithDevice:(id)arg1 commandQueue:(id)arg2;

- (void).cxx_destruct;
- (void)_blitFromBuffer:(id)arg1 toTexture:(id)arg2 inRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 bytesPerRow:(unsigned long long)arg4 offset:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)_blitFromTexture:(id)arg1 toTexture:(id)arg2 mipmapped:(bool)arg3;
- (void)_createComputePipelinesIfNeeded;
- (void)blitBuffer:(id)arg1 toTexture:(id)arg2 count:(unsigned long long)arg3 blitEncoder:(id)arg4;
- (void)blitTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(id)arg3;
- (id)commandQueue;
- (void)copyBytes:(const void*)arg1 toTexture:(id)arg2 inRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 length:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (id)device;
- (void)encodeCopyKernelWithSourceTexture:(id)arg1 targetTexture:(id)arg2 sourceRegions:(id)arg3 sourceRegionsOffset:(unsigned long long)arg4 targetRegionSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 regionsCount:(unsigned long long)arg6 computeEncoder:(id)arg7;
- (void)fastCopyBytes:(const void*)arg1 toTexture:(id)arg2 inRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 length:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2;
- (id)library;
- (id)newMipmappedTextureFromTexture:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (void)setTextureCopyRegionKernelPipelineState:(id)arg1;
- (void)setWantsUniformThreadgroups:(bool)arg1;
- (bool)supportsSharedTextures;
- (id)textureCopyRegionKernelPipelineState;
- (bool)wantsMutableSharedTextures;
- (bool)wantsUniformThreadgroups;

@end
