
@interface MTLComputePassSampleBufferAttachmentDescriptorArrayInternal : MTLComputePassSampleBufferAttachmentDescriptorArray {
    MTLComputePassSampleBufferAttachmentDescriptorInternal * _sampleDescriptors;
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
