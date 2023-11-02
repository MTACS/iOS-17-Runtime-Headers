
@interface IOGPUMetalDebugCommandEncoder : _MTLDebugCommandEncoder {
    MTLResourceList * _api_resourceList;
    void * _kernelCommandBufferCurrent;
    void * _kernelCommandBufferEnd;
    struct IOGPUResourceList { unsigned int x1[114]; unsigned int *x2; unsigned long long *x3; union { /* ? */ } *x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct IOGPUSegmentResourceDescriptorGroup {} *x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; int (*x23)(); void *x24; } * _resourceList;
}

- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)addAPIResource:(id)arg1;
- (unsigned int)addDebugResourceListInfo:(struct IOGPUResourceInfo { struct __IOSurface {} *x1; unsigned int x2 : 56; unsigned int x3 : 8; unsigned int x4; }*)arg1 flag:(unsigned int)arg2;
- (void)dealloc;
- (void)debugBytes:(const char *)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)arg1;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void*)reserveKernelCommandBufferSpace:(unsigned long long)arg1;
- (void)restartDebugPass;

@end
