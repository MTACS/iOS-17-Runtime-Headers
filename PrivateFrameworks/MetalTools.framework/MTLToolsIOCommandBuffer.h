
@interface MTLToolsIOCommandBuffer : MTLToolsObject <MTLIOCommandBufferSPI> {
    struct vector<void (^)(id<MTLIOCommandBuffer>), std::allocator<void (^)(id<MTLIOCommandBuffer>)>>="__begin_"^@?"__end_"^@?"__end_cap_"{__compressed_pair<void (^*)(id<MTLIOCommandBuffer>), std::allocator<void (^)(id<MTLIOCommandBuffer>)>>="__value_"^@? {}  _completedHandlers;
    bool  _didInvokeCompletedHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _handlerLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) long long status;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBarrier;
- (void)addCompletedHandler:(id /* block */)arg1;
- (void)barrier;
- (void)commit;
- (void)copyStatusToBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)dealloc;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)enqueue;
- (id)error;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)invokeCompletedHandlers;
- (bool)isCommitted;
- (id)label;
- (void)loadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 handle:(id)arg4 handleOffset:(unsigned long long)arg5;
- (void)loadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 sourceHandle:(id)arg4 sourceHandleOffset:(unsigned long long)arg5;
- (void)loadBytes:(void*)arg1 size:(unsigned long long)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(unsigned long long)arg4;
- (void)loadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 dstOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 handle:(id)arg8 handleOffset:(unsigned long long)arg9;
- (void)loadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceBytesPerRow:(unsigned long long)arg5 sourceBytesPerImage:(unsigned long long)arg6 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 sourceHandle:(id)arg8 sourceHandleOffset:(unsigned long long)arg9;
- (void)popDebugGroup;
- (void)preCommit;
- (void)pushDebugGroup:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)signalEvent:(id)arg1 value:(unsigned long long)arg2;
- (long long)status;
- (void)tryCancel;
- (void)waitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)waitUntilCompleted;

@end
