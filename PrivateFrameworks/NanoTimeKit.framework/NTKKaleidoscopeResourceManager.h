
@interface NTKKaleidoscopeResourceManager : NSObject {
    NSBundle * _bundle;
    unsigned long long  _clients;
    <MTLDevice> * _device;
    <MTLBuffer> * _mtlBuffer;
    <MTLRenderPipelineState> * _renderPipelines;
    unsigned long long  _viewMtlPixelFormat;
}

+ (void)_deallocInstance:(id)arg1;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)_loadMTLBufferData;
- (void)_loadPrograms;
- (id)_pipelineStateForShaderType:(unsigned long long)arg1 vertexName:(id)arg2 fragmentName:(id)arg3 inLibrary:(id)arg4 archive:(id)arg5 allowsBlending:(bool)arg6;
- (void)_queue_setupPipelineForType:(unsigned long long)arg1 vertexName:(id)arg2 fragmentName:(id)arg3 inLibrary:(id)arg4 archive:(id)arg5;
- (void)addClient;
- (void)dealloc;
- (id)getGeometryBuffer;
- (id)getPipelineForShaderType:(unsigned long long)arg1 blending:(bool)arg2;
- (id)initWithPixelFormat:(unsigned long long)arg1;
- (void)removeClient;

@end
