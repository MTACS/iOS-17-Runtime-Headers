
@interface _MTLIndirectArgumentBufferLayout : NSObject {
    void * _private;
}

@property (readonly) unsigned long long alignment;
@property (readonly) bool bufferLayoutMatchesFrontEndLayout;
@property (nonatomic, readonly) <MTLDeviceSPI> *device;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned int hashMask;
@property (readonly) unsigned int hashOffset;
@property (readonly) unsigned int hashSignature;
@property (readonly) unsigned int hashValue;

- (unsigned long long)alignment;
- (id)bufferLayoutForResourceAtIndex:(unsigned long long)arg1;
- (bool)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)device;
- (unsigned long long)encodedLength;
- (unsigned int)hashMask;
- (unsigned int)hashOffset;
- (unsigned int)hashSignature;
- (unsigned int)hashValue;
- (id)init;
- (void)setStructType:(id)arg1 withDevice:(id)arg2;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForInstanceAccelerationStructureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForIntersectionFunctionTableAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForPrimitiveAccelerationStructureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForVisibleFunctionTableAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (void*)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;

@end
