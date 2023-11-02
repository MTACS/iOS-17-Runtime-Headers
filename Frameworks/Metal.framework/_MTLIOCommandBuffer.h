
@interface _MTLIOCommandBuffer : _MTLObjectWithLabel <MTLIOCommandBufferSPI> {
    /* Warning: unhandled struct encoding: '{vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>>="__value_"^@}}' */ struct vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>> { 
        __end_ **__begin_; 
    }  _activeScratchBuffers;
    bool  _completedCallbacksDone;
    struct MTLIODispatch { struct MTLIODispatch {} *x1; id /* block */ x2; } * _completedDispatchList;
    struct MTLIODispatch { struct MTLIODispatch {} *x1; id /* block */ x2; } * _completedDispatchListTail;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _cond;
    <MTLIOScratchBuffer> * _currentStagingBuffer;
    unsigned long long  _currentStagingBufferOffset;
    unsigned long long  _currentStagingBufferRemainingBytes;
    bool  _enqueued;
    unsigned long long  _labelTraceID;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    unsigned int  _pendingCommands;
    /* Warning: unhandled struct encoding: '{vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>>="__value_"^@}}' */ struct vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>> { 
        __end_ **__begin_; 
    }  _poolScratchBuffers;
    _MTLIOCommandQueue * _queue;
    MTLResourceList * _resourceList;
    bool  _retained;
    long long  _status;
    struct MTLIOCommandList { struct MTLIOCommand {} *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; struct os_unfair_lock_s { unsigned int x_6_1_1; } x6; bool x7; bool x8; bool x9; id x10; id x11; id x12; id x13; } * commandList;
    NSError * error;
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
- (void)clearScratchBufferLists;
- (void)commit;
- (void)copyStatusToBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)createCommandListWithResourcePool:(id)arg1;
- (void)dealloc;
- (void)didCompleteWithStatus:(long long)arg1;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)enqueue;
- (id)error;
- (struct MTLIOCommandList { struct MTLIOCommand {} *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; struct os_unfair_lock_s { unsigned int x_6_1_1; } x6; bool x7; bool x8; bool x9; id x10; id x11; id x12; id x13; }*)getCommandList;
- (id)getReusableScratchBuffer:(unsigned long long)arg1;
- (unsigned long long)globalTraceObjectID;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 resourceList:(id)arg2 retained:(bool)arg3;
- (bool)isCommitted;
- (void)loadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 handle:(id)arg4 handleOffset:(unsigned long long)arg5;
- (void)loadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 sourceHandle:(id)arg4 sourceHandleOffset:(unsigned long long)arg5;
- (void)loadBytes:(void*)arg1 size:(unsigned long long)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(unsigned long long)arg4;
- (void)loadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 dstOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 handle:(id)arg8 handleOffset:(unsigned long long)arg9;
- (void)loadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceBytesPerRow:(unsigned long long)arg5 sourceBytesPerImage:(unsigned long long)arg6 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 sourceHandle:(id)arg8 sourceHandleOffset:(unsigned long long)arg9;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)reuseActiveScratchBuffers;
- (void)signalEvent:(id)arg1 value:(unsigned long long)arg2;
- (long long)status;
- (void)tryCancel;
- (void)waitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)waitUntilCompleted;

@end
