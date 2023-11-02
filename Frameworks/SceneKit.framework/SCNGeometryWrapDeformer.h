
@interface SCNGeometryWrapDeformer : SCNGeometryDeformer {
    SCNNode * _drivingNode0;
    SCNNode * _drivingNode1;
    SCNGeometryWrapDeformerParameters * _parameters;
}

@property (nonatomic, readonly) SCNNode *drivingNode;

+ (bool)supportsSecureCoding;

- (bool)_getDeformedMeshBoundingBox:(struct { }*)arg1;
- (void)dealloc;
- (id)dependencyNodeAtIndex:(unsigned long long)arg1;
- (id)drivingNode;
- (void)encodeWithCoder:(id)arg1;
- (void)initParametersIfNeededForDeformedNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDriverSandwichNode0:(id)arg1 driverSandwichNode1:(id)arg2 parameters:(id)arg3;
- (id)initWithDrivingNode:(id)arg1 parameters:(id)arg2;
- (id)newDeformerInstanceForNode:(id)arg1 outputs:(unsigned long long)arg2 computeVertexCount:(unsigned long long)arg3 context:(id)arg4;
- (unsigned long long)requiredInputs;
- (unsigned long long)supportedOutputs;

@end
