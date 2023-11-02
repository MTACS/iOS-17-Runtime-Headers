
@interface IOGPUMetalCommandBuffer : _MTLCommandBuffer {
    NSObject<OS_dispatch_semaphore> * _commitAndResetSem;
    void * _completedCallbackBlockPtr;
    IOGPUMetalDevice<MTLDevice> * _device;
    unsigned long long  _protectionOptions;
    NSMutableSet * _purgedResources;
    void * _scheduledCallbackBlockPtr;
    struct IOGPUMetalCommandBufferStorage { id x1; struct IOGPUMetalCommandBufferStoragePool {} *x2; struct { struct IOGPUMetalCommandBufferStorage {} *x_3_1_1; struct IOGPUMetalCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; struct IOGPUMetalCommandBufferSidebandBuffer { id x_8_1_1; char *x_8_1_2; char *x_8_1_3; char *x_8_1_4; } x8; id x9; char *x10; char *x11; struct IOGPUSegmentListHeader {} *x12; struct IOGPUSegmentResourceListHeader {} *x13; struct IOGPUSegmentResourceDescriptorGroup {} *x14; struct IOGPUResourceList { unsigned int x_15_1_1[114]; unsigned int *x_15_1_2; unsigned long long *x_15_1_3; union { /* ? */ } *x_15_1_4; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; struct IOGPUSegmentResourceDescriptorGroup {} *x_15_1_13; unsigned long long x_15_1_14; unsigned long long x_15_1_15; unsigned int x_15_1_16; unsigned int x_15_1_17; unsigned int x_15_1_18; unsigned int x_15_1_19; unsigned int x_15_1_20; unsigned int x_15_1_21; unsigned int x_15_1_22; int (*x_15_1_23)(); void *x_15_1_24; } x15; } * _storage;
    unsigned long long * _submitToHardwareTimeStampPointer;
}

@property (readonly) struct IOGPUMetalCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; struct IOGPUResourceInfo { struct __IOSurface {} *x_6_1_1; unsigned int x_6_1_2 : 56; unsigned int x_6_1_3 : 8; unsigned int x_6_1_4; } x6; }*commandBufferResourceInfo;
@property (readonly) struct IOGPUMetalCommandBufferStorage { id x1; struct IOGPUMetalCommandBufferStoragePool {} *x2; struct { struct IOGPUMetalCommandBufferStorage {} *x_3_1_1; struct IOGPUMetalCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; struct IOGPUMetalCommandBufferSidebandBuffer { id x_8_1_1; char *x_8_1_2; char *x_8_1_3; char *x_8_1_4; } x8; id x9; char *x10; char *x11; struct IOGPUSegmentListHeader {} *x12; struct IOGPUSegmentResourceListHeader {} *x13; struct IOGPUSegmentResourceDescriptorGroup {} *x14; struct IOGPUResourceList { unsigned int x_15_1_1[114]; unsigned int *x_15_1_2; unsigned long long *x_15_1_3; union { /* ? */ } *x_15_1_4; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; struct IOGPUSegmentResourceDescriptorGroup {} *x_15_1_13; unsigned long long x_15_1_14; unsigned long long x_15_1_15; unsigned int x_15_1_16; unsigned int x_15_1_17; unsigned int x_15_1_18; unsigned int x_15_1_19; unsigned int x_15_1_20; unsigned int x_15_1_21; unsigned int x_15_1_22; int (*x_15_1_23)(); void *x_15_1_24; } x15; }*commandBufferStorage;
@property (readonly) <MTLDevice> *device;
@property (readonly) struct IOGPUResourceList { unsigned int x1[114]; unsigned int *x2; unsigned long long *x3; union { /* ? */ } *x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct IOGPUSegmentResourceDescriptorGroup {} *x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; int (*x23)(); void *x24; }*ioGPUResourceList;

- (void)_debugBytes:(const char *)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void)_encodePurgedResources;
- (void*)_reserveKernelCommandBufferSpace:(unsigned long long)arg1;
- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (id)akPrivateResourceList;
- (id)akResourceList;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)arg1;
- (void)allocDebugBuffer;
- (void)allocateSidebandBuffer:(unsigned int)arg1;
- (void)beginSegment:(void*)arg1;
- (struct IOGPUMetalCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; struct IOGPUResourceInfo { struct __IOSurface {} *x_6_1_1; unsigned int x_6_1_2 : 56; unsigned int x_6_1_3 : 8; unsigned int x_6_1_4; } x6; }*)commandBufferResourceInfo;
- (struct IOGPUMetalCommandBufferStorage { id x1; struct IOGPUMetalCommandBufferStoragePool {} *x2; struct { struct IOGPUMetalCommandBufferStorage {} *x_3_1_1; struct IOGPUMetalCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; struct IOGPUMetalCommandBufferSidebandBuffer { id x_8_1_1; char *x_8_1_2; char *x_8_1_3; char *x_8_1_4; } x8; id x9; char *x10; char *x11; struct IOGPUSegmentListHeader {} *x12; struct IOGPUSegmentResourceListHeader {} *x13; struct IOGPUSegmentResourceDescriptorGroup {} *x14; struct IOGPUResourceList { unsigned int x_15_1_1[114]; unsigned int *x_15_1_2; unsigned long long *x_15_1_3; union { /* ? */ } *x_15_1_4; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; struct IOGPUSegmentResourceDescriptorGroup {} *x_15_1_13; unsigned long long x_15_1_14; unsigned long long x_15_1_15; unsigned int x_15_1_16; unsigned int x_15_1_17; unsigned int x_15_1_18; unsigned int x_15_1_19; unsigned int x_15_1_20; unsigned int x_15_1_21; unsigned int x_15_1_22; int (*x_15_1_23)(); void *x_15_1_24; } x15; }*)commandBufferStorage;
- (void)commit;
- (void)commitAndReset;
- (void)commitEncoder;
- (void)dealloc;
- (id)device;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)encodeConditionalAbortEvent:(id)arg1;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 agentMask:(unsigned long long)arg3;
- (void)encodeSignalEventScheduled:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSubmitSleepMS:(unsigned int)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)endCurrentSegment;
- (void)fillCommandBufferArgs:(struct IOGPUCommandQueueCommandBufferArgs { unsigned int x1; unsigned int x2; unsigned int x3; union { id /* block */ x_4_1_1; unsigned long long x_4_1_2; } x4; union { id /* block */ x_5_1_1; unsigned long long x_5_1_2; } x5; unsigned int x6; }*)arg1 commandQueue:(id)arg2;
- (void)getCurrentKernelCommandBufferPointer:(void**)arg1 end:(void**)arg2;
- (void)getCurrentKernelCommandBufferStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (void)getDebugBufferPointerStart:(void**)arg1 end:(void**)arg2;
- (struct IOGPUSegmentListHeader { unsigned long long x1; unsigned int x2; unsigned int x3; struct IOGPUSegmentResourceListHeader { unsigned long long x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct IOGPUSegmentResourceDescriptorGroup { unsigned int x_8_2_1[6]; unsigned int x_8_2_2[6]; unsigned short x_8_2_3[6]; unsigned short x_8_2_4; unsigned short x_8_2_5; } x_4_1_8[0]; } x4[0]; }*)getSegmentListHeader;
- (void)getSegmentListPointerStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (void)growDebugBuffer:(unsigned int)arg1;
- (void)growKernelCommandBuffer:(unsigned long long)arg1;
- (void)growSegmentList;
- (void)growSidebandBuffer:(unsigned int)arg1;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2 synchronousDebugMode:(bool)arg3;
- (struct IOGPUResourceList { unsigned int x1[114]; unsigned int *x2; unsigned long long *x3; union { /* ? */ } *x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct IOGPUSegmentResourceDescriptorGroup {} *x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; int (*x23)(); void *x24; }*)ioGPUResourceList;
- (void)kernelCommandCollectTimeStamp;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)popDebugGroup;
- (unsigned long long)protectionOptions;
- (void)pushDebugGroup:(id)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)setCurrentKernelCommandBufferPointer:(void*)arg1;
- (void)setCurrentSegmentListPointer:(void*)arg1;
- (void)setLabel:(id)arg1;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)validate;

@end
