
@interface MTLGPUDebugVisibleFunctionTable : MTLToolsVisibleFunctionTable <MTLGPUDebugResource> {
    unsigned long long  _gpuIdentifier;
    <MTLBuffer> * _handleBuffer;
    unsigned long long  _stage;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (nonatomic, retain) <MTLVisibleFunctionTable> *baseObject;
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

- (void)_setupCommon;
- (unsigned long long)bufferAddressAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)gpuAddress;
- (unsigned long long)handleForOffset:(unsigned long long)arg1;
- (id)initWithVisibleFunctionTable:(id)arg1 descriptor:(id)arg2 computePipeline:(id)arg3;
- (id)initWithVisibleFunctionTable:(id)arg1 descriptor:(id)arg2 device:(id)arg3;
- (id)initWithVisibleFunctionTable:(id)arg1 descriptor:(id)arg2 renderPipeline:(id)arg3 stage:(unsigned long long)arg4;
- (unsigned long long)length;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)underlyingGPUAddress;
- (void)useWithComputeEncoder:(id)arg1 usage:(unsigned long long)arg2;
- (void)useWithRenderEncoder:(id)arg1 usage:(unsigned long long)arg2 stages:(struct optional<unsigned long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })arg3;

@end
