
@interface MTLVertexDescriptorInternal : MTLVertexDescriptor {
    MTLVertexAttributeDescriptorArrayInternal * _attributeArray;
    MTLVertexBufferLayoutDescriptorArrayInternal * _vertexBufferArray;
}

+ (id)vertexDescriptor;

- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)layouts;
- (id)newSerializedDescriptor;
- (void)reset;
- (bool)validateWithVertexFunction:(id)arg1 error:(id*)arg2 renderPipelineDescriptor:(id)arg3;

@end
