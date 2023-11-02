
@interface IOGPUMetalIOCommandBuffer : _MTLIOCommandBuffer {
    unsigned int  _commandBufferID;
    struct IOGPUIOKernelCommandListHeader { unsigned int x1; unsigned int x2; } * _commandListHeader;
    bool  _committed;
    IOGPUMetalDevice<MTLDevice> * _device;
    unsigned long long  _globalTraceObjectID;
    IOGPUMetalCommandEncoder<MTLBlitCommandEncoder> * _gpuBlitEncoder;
    IOGPUMetalCommandBuffer<MTLCommandBuffer> * _gpuCommandBuffer;
    bool  _hasFollowOnGPUWork;
    NSObject<OS_dispatch_group> * _ioCompletionGroup;
    IOGPUMetalDeviceShmem * _ioKernelCommandShmem;
    char * _ioKernelCommandShmemCurrent;
    char * _ioKernelCommandShmemEnd;
    char * _ioKernelCommandShmemStart;
    unsigned int  _lastBarrierNotificationCount;
    _Atomic unsigned int  _notificationCount;
    IOGPUMetalIOCommandQueue * _queue;
    NSMutableArray * _stagingBuffers;
    bool  _tryCancel;
}

- (void)addBarrier;
- (void)barrier;
- (void)barrierComplete:(long long)arg1;
- (void)commit;
- (void)createCommandList;
- (void)dealloc;
- (void)didCompleteWithStatus:(long long)arg1;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)enqueue;
- (void*)getCommandBufferBytes:(unsigned int)arg1;
- (unsigned long long)globalTraceObjectID;
- (void)growKernelCommandBuffer:(unsigned int)arg1;
- (bool)hasFollowOnWork;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 resourceList:(id)arg2 retained:(bool)arg3;
- (bool)isCommitted;
- (void)loadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 handle:(id)arg4 handleOffset:(unsigned long long)arg5;
- (void)loadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 sourceHandle:(id)arg4 sourceHandleOffset:(unsigned long long)arg5;
- (void)loadBytes:(void*)arg1 size:(unsigned long long)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(unsigned long long)arg4;
- (void)loadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 dstOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 handle:(id)arg8 handleOffset:(unsigned long long)arg9;
- (void)loadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceBytesPerRow:(unsigned long long)arg5 sourceBytesPerImage:(unsigned long long)arg6 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 sourceHandle:(id)arg8 sourceHandleOffset:(unsigned long long)arg9;
- (void)setLabel:(id)arg1;
- (void)signalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)tryCancel;
- (bool)validateNotificationCount;
- (void)waitForEvent:(id)arg1 value:(unsigned long long)arg2;

@end
