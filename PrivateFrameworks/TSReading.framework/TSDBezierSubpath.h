
@interface TSDBezierSubpath : NSObject {
    bool  mClosed;
    NSMutableArray * mNodes;
}

@property (nonatomic, readonly) bool allNodesSelected;
@property (nonatomic, readonly) TSDBezierPath *bezierPath;
@property (nonatomic, readonly) bool canDeleteSelectedNodes;
@property (nonatomic, readonly) bool closeIfEndpointsAreEqual;
@property (getter=isClosed, nonatomic) bool closed;
@property (nonatomic, readonly) TSDBezierNode *firstNode;
@property (nonatomic, readonly) bool hasSelectedNode;
@property (nonatomic, readonly) bool isRectangular;
@property (nonatomic, readonly) TSDBezierNode *lastNode;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } nodeBounds;
@property (nonatomic, retain) NSMutableArray *nodes;

- (void)addNode:(id)arg1;
- (void)addNodesToArray:(id)arg1;
- (bool)allNodesSelected;
- (void)appendToBezierPath:(id)arg1;
- (void)appendToBezierPath:(id)arg1 selectedNodesOnly:(bool)arg2 fromIndex:(unsigned long long)arg3;
- (id)bezierNodeUnderPoint:(struct CGPoint { double x1; double x2; })arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 andTolerance:(double)arg3 returningType:(long long*)arg4;
- (id)bezierPath;
- (bool)canDeleteSelectedNodes;
- (bool)closeIfEndpointsAreEqual;
- (void)convertToHobby;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deleteSelectedNodes;
- (id)description;
- (void)deselectAllNodes;
- (double)distanceToPoint:(struct CGPoint { double x1; double x2; })arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4;
- (id)firstNode;
- (bool)hasSelectedNode;
- (id)init;
- (id)insertNodeAtPoint:(struct CGPoint { double x1; double x2; })arg1 tolerance:(double)arg2;
- (bool)isCircular;
- (bool)isClosed;
- (bool)isRectangular;
- (id)lastNode;
- (id)nodeAfterNode:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nodeBounds;
- (id)nodePriorToNode:(id)arg1;
- (id)nodes;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint { double x1; double x2; })arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint { double x1; double x2; })arg1;
- (void)removeLastNode;
- (void)removeNode:(id)arg1;
- (void)reverseDirection;
- (void)selectAllNodes;
- (void)setClosed:(bool)arg1;
- (void)setNodes:(id)arg1;
- (void)sharpenAllNodes;
- (void)smoothNode:(id)arg1;
- (id)splitEdgeAtIndex:(unsigned long long)arg1;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)updateReflectedState;

@end
