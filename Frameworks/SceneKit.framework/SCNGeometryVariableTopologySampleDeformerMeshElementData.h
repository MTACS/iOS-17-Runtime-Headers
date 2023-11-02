
@interface SCNGeometryVariableTopologySampleDeformerMeshElementData : NSObject {
    SCNMTLComputePipeline * _computePipeline;
    <MTLBuffer> * _deformedIndexBuffer;
    unsigned long long  _deformedPrimitiveCountBufferOffset;
    unsigned long long  _drawIndexedPrimitivesIndirectBufferOffset;
    SCNMTLBuffer * _originalIndexBuffer;
    unsigned long long  _originalPrimitiveCount;
    unsigned long long  _subdividedVertexStartIndex;
}

- (void)dealloc;

@end
