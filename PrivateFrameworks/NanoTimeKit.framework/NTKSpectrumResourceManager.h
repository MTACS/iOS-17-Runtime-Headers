
@interface NTKSpectrumResourceManager : NSObject {
    unsigned long long  _clients;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    <MTLTexture> * _overlayTexture;
    <MTLRenderPipelineState> * _pipelineStates;
    unsigned long long  _pixelFormat;
    <MTLBuffer> * _verticesBuffer;
    <MTLTexture> * _vignetteTexture;
}

+ (void)_deallocInstance:(id)arg1;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (id)_generatePipeline:(unsigned long long)arg1;
- (void)_loadGeometry;
- (void)addClient;
- (void)dealloc;
- (id)initWithPixelFormat:(unsigned long long)arg1;
- (id)overlayTexture;
- (void)removeClient;
- (id)renderPipelineForConfig:(unsigned long long)arg1;
- (id)verticesBuffer;
- (id)vignetteTexture;

@end
