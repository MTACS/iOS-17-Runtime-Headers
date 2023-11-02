
@interface SCNMTLSmoothNormalsDeformer : NSObject <SCNMTLDeformer> {
    unsigned int  _baseVertexCount;
    unsigned int  _lastUpdateFrameIndex;
    <MTLBuffer> * _perVertexTrianglesIndices;
    <MTLBuffer> * _perVertexTrianglesOffsets;
    SCNMTLComputePipeline * _smoothNormalsPipeline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)requiredInputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)supportedOutputs;

- (void)dealloc;
- (unsigned long long)updateWithComputeContext:(id)arg1 positions:(id)arg2 normals:(id)arg3 tangents:(id)arg4;

@end
