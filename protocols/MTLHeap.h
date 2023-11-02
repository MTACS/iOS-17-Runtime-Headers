
@protocol MTLHeap <NSObject>

@required

- (unsigned long long)cpuCacheMode;
- (unsigned long long)currentAllocatedSize;
- (<MTLDevice> *)device;
- (unsigned long long)hazardTrackingMode;
- (NSString *)label;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (<MTLAccelerationStructure> *)newAccelerationStructureWithDescriptor:(MTLAccelerationStructureDescriptor *)arg1;
- (<MTLAccelerationStructure> *)newAccelerationStructureWithDescriptor:(MTLAccelerationStructureDescriptor *)arg1 offset:(unsigned long long)arg2;
- (<MTLAccelerationStructure> *)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (<MTLAccelerationStructure> *)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (<MTLBuffer> *)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (<MTLBuffer> *)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)resourceOptions;
- (void)setLabel:(NSString *)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (long long)type;
- (unsigned long long)usedSize;

@end
