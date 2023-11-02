
@protocol MTLAccelerationStructureSPI <MTLAccelerationStructure>

@required

- (unsigned long long)accelerationStructureUniqueIdentifier;
- (<MTLBuffer> *)buffer;
- (unsigned long long)bufferOffset;
- (unsigned long long)gpuHandle;
- (unsigned long long)resourceIndex;
- (unsigned long long)uniqueIdentifier;

@optional

- (MTLAccelerationStructureDescriptor *)descriptor;
- (void)setDescriptor:(MTLAccelerationStructureDescriptor *)arg1;

@end
