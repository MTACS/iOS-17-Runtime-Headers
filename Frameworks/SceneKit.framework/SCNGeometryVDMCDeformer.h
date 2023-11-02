
@interface SCNGeometryVDMCDeformer : SCNGeometryDeformer

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (bool)deformedMeshReliesOnFrustum;
- (bool)deformedMeshReliesOnTransforms;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newDeformerInstanceForNode:(id)arg1 outputs:(unsigned long long)arg2 computeVertexCount:(unsigned long long)arg3 context:(id)arg4;
- (unsigned long long)requiredInputs;
- (unsigned long long)requiredOutputs;
- (unsigned long long)supportedOutputs;

@end
