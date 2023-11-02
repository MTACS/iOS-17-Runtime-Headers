
@interface MTLGPUDebugIntersectionFunctionTable : MTLToolsIntersectionFunctionTable <MTLGPUDebugResource> {
    MTLGPUDebugComputePipelineState * _computePipelineState;
    unsigned long long  _functionCount;
    unsigned long long  _gpuIdentifier;
    <MTLBuffer> * _handleBuffer;
    MTLGPUDebugRenderPipelineState * _renderPipelineState;
    unsigned long long  _stage;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (nonatomic, retain) <MTLIntersectionFunctionTable> *baseObject;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long underlyingGPUAddress;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (void)_initHandleBuffer;
- (void)_setupIdentifier;
- (unsigned long long)bufferAddressAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)gpuAddress;
- (unsigned long long)handleForOffset:(unsigned long long)arg1;
- (id)initWithIntersectionFunctionTable:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (id)initWithIntersectionFunctionTable:(id)arg1 device:(id)arg2 descriptor:(id)arg3 computePipelineState:(id)arg4;
- (id)initWithIntersectionFunctionTable:(id)arg1 device:(id)arg2 descriptor:(id)arg3 renderPipelineState:(id)arg4 stage:(unsigned long long)arg5;
- (unsigned long long)length;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFunctions:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)underlyingGPUAddress;
- (void)useWithComputeEncoder:(id)arg1 usage:(unsigned long long)arg2;
- (void)useWithRenderEncoder:(id)arg1 usage:(unsigned long long)arg2 stages:(struct optional<unsigned long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })arg3;

@end
