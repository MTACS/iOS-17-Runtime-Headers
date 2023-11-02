
@interface MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray : NSObject {
    MTLAccelerationStructurePassSampleBufferAttachmentDescriptor * _sampleDescriptors;
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;
- (void)copyFrom:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
