
@interface CaptureMTLPipelineLibrary : NSObject <CaptureMTLObject, MTLPipelineLibrarySPI> {
    <MTLPipelineLibrarySPI> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    bool  _isBaseObjectDebugDevice;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLPipelineLibrary> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property bool disableRunTimeCompilation;
@property (nonatomic, readonly) <MTLPipelineCache> *functionCache;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) NSArray *metallibPaths;
@property (nonatomic, readonly) <MTLPipelineCache> *pipelineCache;
@property (readonly) NSArray *pipelineNames;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (bool)disableRunTimeCompilation;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)functionCache;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)label;
- (id)metallibPaths;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)originalObject;
- (id)pipelineCache;
- (id)pipelineNames;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDisableRunTimeCompilation:(bool)arg1;
- (void)setLabel:(id)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end
