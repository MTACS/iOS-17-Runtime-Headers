
@interface DYMTLTextureResize : NSObject {
    <MTLDevice> * _device;
    <MTLSamplerState> * _downscaleSampler;
    NSMutableDictionary * _fragmentFunctionForPixelFormatCache;
    <MTLBuffer> * _quadIndicies;
    <MTLBuffer> * _quadPositions;
    <MTLBuffer> * _quadTexCoords;
    <MTLFunction> * _thumbnailColorFragment;
    <MTLFunction> * _thumbnailDepthFragment;
    <MTLDepthStencilState> * _thumbnailDepthStencilState;
    NSMutableDictionary * _thumbnailDictionary;
    <MTLRenderPipelineState> * _thumbnailPipeline;
    MTLRenderPipelineDescriptor * _thumbnailPipelineDescriptor;
    MTLRenderPassDescriptor * _thumbnailRenderPass;
    <MTLFunction> * _thumbnailStencilFragment;
    MTLTextureDescriptor * _thumbnailTextureDescriptor;
    <MTLSamplerState> * _upscaleSampler;
    long long  configureThumbnail;
}

@property (readonly) <MTLDevice> *device;

+ (id)forDevice:(id)arg1;

- (void).cxx_destruct;
- (id)_texture2DFromTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 commandBuffer:(id)arg5;
- (id)dataTypeForReturnType:(id)arg1;
- (id)device;
- (id)generateFragmentFunctionForPixelFormat:(unsigned long long)arg1 texture:(id)arg2;
- (id)generateThumbnailFromTexture:(id)arg1 commandBuffer:(id)arg2 resolution:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 withFence:(id)arg4;
- (id)initWithDevice:(id)arg1;
- (void)resizeTexture:(id)arg1 resolution:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4 depthPlane:(unsigned long long)arg5 inBuffer:(id)arg6 withType:(unsigned int)arg7 completion:(id /* block */)arg8;
- (id)resolveMultisampleTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 commandBuffer:(id)arg5;
- (id)returnTypeForPixelFormat:(unsigned long long)arg1;
- (id)stencilTextureFromTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)textureFromTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 commandBuffer:(id)arg5;
- (id)textureTypeForPixelFormat:(unsigned long long)arg1;

@end
