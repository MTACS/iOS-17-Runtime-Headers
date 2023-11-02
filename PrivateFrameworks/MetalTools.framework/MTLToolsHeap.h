
@interface MTLToolsHeap : MTLToolsObject <MTLHeapSPI>

@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long memoryPoolId;
@property (nonatomic, readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly) unsigned long long usedSize;

- (id)_newToolsAccelerationStructure:(id)arg1;
- (id)_newToolsBuffer:(id)arg1;
- (id)_newToolsTexture:(id)arg1;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)currentAllocatedSize;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)gpuAddress;
- (unsigned long long)hazardTrackingMode;
- (id)label;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (unsigned long long)memoryPoolId;
- (id)newAccelerationStructureWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (void)notifyResourceReleasing:(id)arg1;
- (unsigned long long)protectionOptions;
- (unsigned long long)resourceOptions;
- (void)setLabel:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (long long)type;
- (unsigned long long)unfilteredResourceOptions;
- (unsigned long long)usedSize;

@end
