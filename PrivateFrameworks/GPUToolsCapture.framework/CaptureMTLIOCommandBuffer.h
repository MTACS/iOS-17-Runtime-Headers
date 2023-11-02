
@interface CaptureMTLIOCommandBuffer : NSObject <CaptureMTLObject, MTLIOCommandBufferSPI> {
    <MTLIOCommandBufferSPI> * _baseObject;
    CaptureMTLIOCommandQueue * _captureCommandQueue;
    NSMutableArray * _completedDispatchArray;
    struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; } * _encodedEvents;
    bool  _isCapturing;
    bool  _isCommited;
    struct apr_pool_t { } * _pool;
    NSMutableSet * _retainedObjects;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLIOCommandBuffer> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCapturing;
@property (nonatomic) bool isCommited;
@property (copy) NSString *label;
@property (nonatomic, readonly) NSMutableSet *retainedObjects;
@property (readonly) long long status;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (void)_preCommitWithIndex:(unsigned long long)arg1;
- (void)addBarrier;
- (void)addCompletedHandler:(id /* block */)arg1;
- (id)baseObject;
- (void)commit;
- (bool)conformsToProtocol:(id)arg1;
- (void)copyStatusToBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)enqueue;
- (id)error;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)arg1 captureIOCommandQueue:(id)arg2;
- (bool)isCapturing;
- (bool)isCommited;
- (id)label;
- (void)loadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 sourceHandle:(id)arg4 sourceHandleOffset:(unsigned long long)arg5;
- (void)loadBytes:(void*)arg1 size:(unsigned long long)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(unsigned long long)arg4;
- (void)loadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceBytesPerRow:(unsigned long long)arg5 sourceBytesPerImage:(unsigned long long)arg6 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 sourceHandle:(id)arg8 sourceHandleOffset:(unsigned long long)arg9;
- (id)originalObject;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)retainedObjects;
- (void)setIsCommited:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)signalEvent:(id)arg1 value:(unsigned long long)arg2;
- (long long)status;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;
- (void)tryCancel;
- (void)waitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)waitUntilCompleted;

@end
