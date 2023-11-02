
@interface CaptureMTLBinaryArchive : NSObject <CaptureMTLObject, MTLBinaryArchiveSPI> {
    <MTLBinaryArchiveSPI> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLBinaryArchive> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) unsigned long long options;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addFunctionWithDescriptor:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (bool)addLibraryWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (bool)enumerateArchivesFromBackingFile:(id /* block */)arg1;
- (bool)enumerateArchivesFromPipelineCollection:(id /* block */)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)keys;
- (id)label;
- (unsigned long long)options;
- (id)originalObject;
- (struct MTLPipelineCollection { }*)pipelineCollection;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)setLabel:(id)arg1;
- (bool)storeComputePipelineDescriptor:(id)arg1;
- (bool)storeMeshRenderPipelineDescriptor:(id)arg1;
- (bool)storeRenderPipelineDescriptor:(id)arg1;
- (bool)storeTileRenderPipelineDescriptor:(id)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end
