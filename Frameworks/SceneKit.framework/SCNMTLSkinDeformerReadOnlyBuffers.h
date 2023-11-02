
@interface SCNMTLSkinDeformerReadOnlyBuffers : NSObject {
    unsigned long long  _boneIndexSize;
    <MTLBuffer> * _boneIndicesBuffer;
    <MTLBuffer> * _boneWeightsBuffer;
    unsigned long long  _vertexWeightIndexSize;
    <MTLBuffer> * _vertexWeightIndicesBuffer;
}

- (void)dealloc;

@end
