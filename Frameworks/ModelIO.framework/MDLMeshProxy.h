
@interface MDLMeshProxy : MDLMesh <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVertexBuffers:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;

@end
