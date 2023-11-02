
@interface AVTSnapshotHelper : NSObject {
    unsigned long long  _antialiasingMode;
    UIColor * _backgroundColor;
    struct { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    }  _backgroundColorForMetal;
    struct CGContext { } * _bitmapContext;
    <MTLCommandQueue> * _commandQueue;
    <MTLTexture> * _convertPremultipliedAlphaExtraTexture;
    <MTLComputePipelineState> * _convertPremultipliedAlphaPipelineState;
    <MTLTexture> * _convertPremultipliedAlphaTexture;
    <MTLTexture> * _convertPremultipliedAlphaTextureView;
    <MTLDevice> * _device;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    bool  _supportsReadWriteTexture;
}

- (void).cxx_destruct;
- (bool)_isRenderPassDescriptorValid;
- (void)_rebuildBitmapContextIfNeeded;
- (void)_rebuildRenderPassDescriptorIfNeeded;
- (void)dealloc;

@end
