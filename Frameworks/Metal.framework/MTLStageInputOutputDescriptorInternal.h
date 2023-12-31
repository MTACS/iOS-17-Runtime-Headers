
@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {
    MTLAttributeDescriptorArrayInternal * _attributeArray;
    unsigned long long  _indexBufferIndex;
    unsigned long long  _indexType;
    MTLBufferLayoutDescriptorArrayInternal * _vertexBufferArray;
}

+ (id)vertexDescriptor;

- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexBufferIndex;
- (unsigned long long)indexType;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)layouts;
- (id)newSerializedDescriptor;
- (void)reset;
- (void)setIndexBufferIndex:(unsigned long long)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (bool)validateWithVertexFunction:(id)arg1 error:(id*)arg2 renderPipelineDescriptor:(id)arg3;

@end
