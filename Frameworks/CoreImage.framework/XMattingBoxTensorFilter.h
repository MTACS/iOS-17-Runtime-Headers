
@interface XMattingBoxTensorFilter : NSObject {
    MPSImageBox * _boxfilter;
    <MTLComputePipelineState> * _depthFilterSeparableSlidingStacks_arrayKernel;
    unsigned int  _depthRadius;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    unsigned int  _radius;
    <MTLComputePipelineState> * _renormalizeFromMPSImageEdgeModeZeroKernel;
    bool  _supportsReadWriteTextures;
    <MTLTexture> * _tmpTexture;
}

+ (id)supportedPixelFormats;

- (void).cxx_destruct;
- (int)_compileShadersWithLibrary:(id)arg1;
- (int)allocateResources:(struct { unsigned int x1; unsigned int x2; })arg1;
- (int)encodeOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (int)encodeSeparableSlidingStackOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)releaseResources;

@end
