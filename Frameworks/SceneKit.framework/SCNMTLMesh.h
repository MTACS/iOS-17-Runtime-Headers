
@interface SCNMTLMesh : NSObject {
    NSArray * _buffers;
    NSArray * _elements;
    long long  _mutabilityTimestamp;
    MTLStageInputOutputDescriptor * _stageDescriptor;
    MTLVertexDescriptor * _tessellationVertexDescriptor;
    unsigned long long  _tessellationVertexDescriptorHash;
    MTLVertexDescriptor * _vertexDescriptor;
    unsigned long long  _vertexDescriptorHash;
    <MTLBuffer> * _volatileBuffer;
    long long  verticesCount;
    unsigned long long  volatileOffset;
    unsigned long long  volatileSize;
    unsigned long long  volatileStride;
}

- (void)buildTessellationVertexDescriptorIfNeeded;
- (void)dealloc;
- (id)description;

@end
