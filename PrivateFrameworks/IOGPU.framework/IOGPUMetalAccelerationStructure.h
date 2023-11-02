
@interface IOGPUMetalAccelerationStructure : IOGPUMetalResource <MTLAccelerationStructureSPI> {
    IOGPUMetalBuffer<MTLBuffer> * _buffer;
    unsigned long long  _bufferOffset;
    MTLAccelerationStructureDescriptor * _descriptor;
    unsigned long long  _resourceIndex;
}

@property (nonatomic, readonly) unsigned long long accelerationStructureUniqueIdentifier;
@property (readonly) unsigned long long allocatedSize;
@property (nonatomic, readonly) IOGPUMetalBuffer<MTLBuffer> *buffer;
@property (nonatomic, readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MTLAccelerationStructureDescriptor *descriptor;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuHandle;
@property (readonly) struct MTLResourceID { unsigned long long x1; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long resourceIndex;
@property (readonly) unsigned long long resourceOptions;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long uniqueIdentifier;

- (unsigned long long)accelerationStructureUniqueIdentifier;
- (unsigned long long)allocatedSize;
- (id)buffer;
- (unsigned long long)bufferOffset;
- (void)copyPropertiesFromBuffer:(id)arg1;
- (void)dealloc;
- (id)descriptor;
- (unsigned long long)gpuHandle;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (id)heap;
- (unsigned long long)heapOffset;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (bool)isAliasable;
- (void)makeAliasable;
- (unsigned long long)resourceIndex;
- (void)setDescriptor:(id)arg1;
- (unsigned long long)size;
- (unsigned long long)uniqueIdentifier;

@end
