
@interface GKObstacleGraph : GKGraph {
    void * _cObstacleGraph;
    Class  _nodeClass;
    NSMutableArray * _sourceObstacles;
}

@property (nonatomic, readonly) float bufferRadius;
@property (nonatomic, readonly) NSArray *obstacles;

+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2;
+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addObstacles:(id)arg1;
- (float)bufferRadius;
- (void*)cObstacleGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeUsingObstacles:(id)arg1;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;
- (bool)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2;
- (void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2;
- (void*)makeCGraph;
- (id)mutObstacles;
- (Class)nodeClass;
- (id)nodesForObstacle:(id)arg1;
- (id)obstacles;
- (void)removeAllObstacles;
- (void)removeObstacles:(id)arg1;
- (void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2;

@end
