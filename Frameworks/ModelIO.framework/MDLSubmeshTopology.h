
@interface MDLSubmeshTopology : NSObject {
    unsigned long long  _edgeCreaseCount;
    <MDLMeshBuffer> * _edgeCreaseIndices;
    <MDLMeshBuffer> * _edgeCreases;
    unsigned long long  _faceCount;
    <MDLMeshBuffer> * _faceTopology;
    unsigned long long  _holeCount;
    <MDLMeshBuffer> * _holes;
    unsigned long long  _vertexCreaseCount;
    <MDLMeshBuffer> * _vertexCreaseIndices;
    <MDLMeshBuffer> * _vertexCreases;
}

@property (nonatomic) unsigned long long edgeCreaseCount;
@property (nonatomic, retain) <MDLMeshBuffer> *edgeCreaseIndices;
@property (nonatomic, retain) <MDLMeshBuffer> *edgeCreases;
@property (nonatomic) unsigned long long faceCount;
@property (nonatomic, retain) <MDLMeshBuffer> *faceTopology;
@property (nonatomic) unsigned long long holeCount;
@property (nonatomic, retain) <MDLMeshBuffer> *holes;
@property (nonatomic) unsigned long long vertexCreaseCount;
@property (nonatomic, retain) <MDLMeshBuffer> *vertexCreaseIndices;
@property (nonatomic, retain) <MDLMeshBuffer> *vertexCreases;

+ (id)decodeTopologyWithCoder:(id)arg1 allocator:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)edgeCreaseCount;
- (id)edgeCreaseIndices;
- (id)edgeCreases;
- (void)encodeTopologyWithCoder:(id)arg1 allocator:(id)arg2;
- (unsigned long long)faceCount;
- (id)faceTopology;
- (unsigned long long)holeCount;
- (id)holes;
- (id)initWithSubmesh:(id)arg1;
- (void)setEdgeCreaseCount:(unsigned long long)arg1;
- (void)setEdgeCreaseIndices:(id)arg1;
- (void)setEdgeCreases:(id)arg1;
- (void)setFaceCount:(unsigned long long)arg1;
- (void)setFaceTopology:(id)arg1;
- (void)setHoleCount:(unsigned long long)arg1;
- (void)setHoles:(id)arg1;
- (void)setVertexCreaseCount:(unsigned long long)arg1;
- (void)setVertexCreaseIndices:(id)arg1;
- (void)setVertexCreases:(id)arg1;
- (unsigned long long)vertexCreaseCount;
- (id)vertexCreaseIndices;
- (id)vertexCreases;

@end
