
@interface SCNGeometryVDMCDeformerMeshElementData : NSObject {
    SCNMTLComputePipeline * _argUpdatePipeline;
    NSMutableArray * _configBufferChain;
    NSMutableArray * _counterVector;
    <MTLBuffer> * _drawIndexedPrimitivesIndirectBuffer;
    unsigned long long  _drawIndexedPrimitivesIndirectBufferOffset;
    unsigned long long  _maxLevel;
    NSMutableArray * _maxTrianglesAtLevel;
    <MTLBuffer> * _neighborBuffer;
    SCNMTLBuffer * _originalIndexBuffer;
    unsigned long long  _originalPrimitiveCount;
    <MTLBuffer> * _shiftBuffer;
    <MTLBuffer> * _subdivIndexBuffer;
    <MTLBuffer> * _subdivMeshInfoBuffer;
    SCNMTLComputePipeline * _subdivPipeline;
    <MTLBuffer> * _subdivVertexBuffer;
    unsigned long long  _subdividedVertexStartIndex;
    NSMutableArray * _triangleBufferChain;
    <MTLBuffer> * _triangleCounterBuffer;
}

- (void)dealloc;

@end
