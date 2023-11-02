
@interface PKTexturedCardRenderer : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLTexture> * _diffuse;
    PKTextureLoader * _diffuseLoader;
    unsigned long long  _drawableHeight;
    unsigned long long  _drawableWidth;
    bool  _invalidated;
    float  _lightIntensity;
    PKMetalRenderLoop * _loop;
    <MTLTexture> * _metalness;
    PKTextureLoader * _metalnessLoader;
    <MTLTexture> * _normal;
    PKTextureLoader * _normalLoader;
    <MTLRenderPipelineState> * _pipelineState;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _rotation;
    long long  _style;
    <MTLBuffer> * _uniform;
    <MTLBuffer> * _vertices;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
