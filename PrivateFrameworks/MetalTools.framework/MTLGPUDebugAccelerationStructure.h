
@interface MTLGPUDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLGPUDebugResource> {
    unsigned long long  _accelerationStructureHandle;
    unsigned long long  _accelerationStructureType;
    <MTLBuffer> * _childrenWrappersBuffer;
    <MTLBuffer> * _debugBuf;
}

@property (nonatomic, readonly) unsigned long long accelerationStructureHandle;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (nonatomic, retain) <MTLAccelerationStructure> *baseObject;
@property (nonatomic, retain) <MTLBuffer> *childrenWrappersBuffer;
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

- (void)_setupIdentifier;
- (unsigned long long)accelerationStructureHandle;
- (id)childrenWrappersBuffer;
- (void)dealloc;
- (id)debugBuf;
- (unsigned long long)gpuAddress;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (unsigned long long)handleForOffset:(unsigned long long)arg1;
- (id)initWithAccelerationStructure:(id)arg1 device:(id)arg2;
- (id)initWithAccelerationStructure:(id)arg1 device:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithAccelerationStructure:(id)arg1 heap:(id)arg2;
- (unsigned long long)length;
- (void)setChildrenWrappersBuffer:(id)arg1;
- (unsigned long long)underlyingGPUAddress;
- (void)useWithComputeEncoder:(id)arg1 usage:(unsigned long long)arg2;
- (void)useWithRenderEncoder:(id)arg1 usage:(unsigned long long)arg2 stages:(struct optional<unsigned long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })arg3;

@end
