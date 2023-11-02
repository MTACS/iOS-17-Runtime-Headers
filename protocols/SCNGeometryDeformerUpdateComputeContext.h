
@protocol SCNGeometryDeformerUpdateComputeContext <NSObject>

@required

- (<MTLComputeCommandEncoder> *)currentComputeEncoder;
- (<MTLBuffer> *)dstNormalBuffer;
- (<MTLBuffer> *)dstPositionBuffer;
- (<MTLBuffer> *)dstTangentBuffer;
- (void)setStageInputOutputBuffersToCurrentComputeEncoder;
- (<MTLBuffer> *)srcNormalBuffer;
- (<MTLBuffer> *)srcPositionBuffer;
- (<MTLBuffer> *)srcTangentBuffer;

@end
