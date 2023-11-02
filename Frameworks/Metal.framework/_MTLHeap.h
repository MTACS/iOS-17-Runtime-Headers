
@interface _MTLHeap : _MTLObjectWithLabel {
    unsigned long long  _gpuAddress;
    unsigned long long  _heapResourceOptions;
    long long  _heapType;
}

@property (readonly) unsigned long long cpuCacheMode;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long memoryPoolId;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long storageMode;
@property (readonly) long long type;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (unsigned long long)cpuCacheMode;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)gpuAddress;
- (unsigned long long)hazardTrackingMode;
- (id)init;
- (id)initWithType:(long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)memoryPoolId;
- (id)newAccelerationStructureWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atOffset:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1 atOffset:(unsigned long long)arg2;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)resourceOptions;
- (unsigned long long)storageMode;
- (long long)type;
- (unsigned long long)unfilteredResourceOptions;

@end
