
@interface SCNGeometryDeformer : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)_enumerateDependencyNodesUsingBlock:(id /* block */)arg1;
- (bool)_getDeformedMeshBoundingBox:(struct { }*)arg1;
- (bool)deformedMeshReliesOnFrustum;
- (bool)deformedMeshReliesOnTransforms;
- (id)dependencyNodeAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)meshForDeformedTopology;
- (id)newDeformerInstanceForNode:(id)arg1 outputs:(unsigned long long)arg2 computeVertexCount:(unsigned long long)arg3 context:(id)arg4;
- (unsigned long long)requiredInputs;
- (unsigned long long)requiredOutputs;
- (unsigned long long)supportedOutputs;

@end
