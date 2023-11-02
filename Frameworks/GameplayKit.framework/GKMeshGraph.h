
@interface GKMeshGraph : GKGraph {
    void * _cMeshGraph;
    Class  _nodeClass;
    NSMutableArray * _sourceObstacles;
}

@property (nonatomic, readonly) float bufferRadius;
@property (nonatomic, readonly) NSArray *obstacles;
@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic) unsigned long long triangulationMode;

+ (id)graphWithBufferRadius:(void *)arg1 minCoordinate:(void *)arg2 maxCoordinate:(void *)arg3; // needs 3 arg types, found 1: float
+ (id)graphWithBufferRadius:(void *)arg1 minCoordinate:(void *)arg2 maxCoordinate:(void *)arg3 nodeClass:(void *)arg4; // needs 4 arg types, found 2: float, Class
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addObstacles:(id)arg1;
- (float)bufferRadius;
- (void*)cMeshGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeUsingObstacles:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBufferRadius:(void *)arg1 minCoordinate:(void *)arg2 maxCoordinate:(void *)arg3; // needs 3 arg types, found 1: float
- (id)initWithBufferRadius:(void *)arg1 minCoordinate:(void *)arg2 maxCoordinate:(void *)arg3 nodeClass:(void *)arg4; // needs 4 arg types, found 2: float, Class
- (id)initWithCoder:(id)arg1;
- (void*)makeCGraph;
- (bool)makeNodesFromTriangleCenters;
- (bool)makeNodesFromTriangleEdgeMidpoints;
- (bool)makeNodesFromTriangleVertices;
- (Class)nodeClass;
- (id)obstacles;
- (void)removeObstacles:(id)arg1;
- (void)setMakeNodesFromTriangleCenters:(bool)arg1;
- (void)setMakeNodesFromTriangleEdgeMidpoints:(bool)arg1;
- (void)setMakeNodesFromTriangleVertices:(bool)arg1;
- (void)setTriangulationMode:(unsigned long long)arg1;
- (struct GKTriangle { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })triangleAtIndex:(unsigned long long)arg1;
- (unsigned long long)triangleCount;
- (void)triangulate;
- (unsigned long long)triangulationMode;

@end
