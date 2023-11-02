
@interface MTLPipelineBufferDescriptorArrayInternal : MTLPipelineBufferDescriptorArray {
    MTLPipelineBufferDescriptorInternal * _descriptors;
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (bool)isEqual:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
