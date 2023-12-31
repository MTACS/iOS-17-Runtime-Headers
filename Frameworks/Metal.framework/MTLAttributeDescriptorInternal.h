
@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor {
    unsigned long long  _bufferIndex;
    unsigned long long  _offset;
    unsigned long long  _vertexFormat;
}

- (unsigned long long)bufferIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)format;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;

@end
