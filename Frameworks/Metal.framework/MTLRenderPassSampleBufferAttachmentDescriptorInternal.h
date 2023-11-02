
@interface MTLRenderPassSampleBufferAttachmentDescriptorInternal : MTLRenderPassSampleBufferAttachmentDescriptor {
    struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate { 
        <MTLCounterSampleBuffer> *sampleBuffer; 
        unsigned long long startOfVertexSampleIndex; 
        unsigned long long endOfVertexSampleIndex; 
        unsigned long long startOfFragmentSampleIndex; 
        unsigned long long endOfFragmentSampleIndex; 
    }  _private;
}

- (const struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)endOfFragmentSampleIndex;
- (unsigned long long)endOfVertexSampleIndex;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)sampleBuffer;
- (void)setEndOfFragmentSampleIndex:(unsigned long long)arg1;
- (void)setEndOfVertexSampleIndex:(unsigned long long)arg1;
- (void)setSampleBuffer:(id)arg1;
- (void)setStartOfFragmentSampleIndex:(unsigned long long)arg1;
- (void)setStartOfVertexSampleIndex:(unsigned long long)arg1;
- (unsigned long long)startOfFragmentSampleIndex;
- (unsigned long long)startOfVertexSampleIndex;

@end
