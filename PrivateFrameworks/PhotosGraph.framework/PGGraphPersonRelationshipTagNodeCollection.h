
@interface PGGraphPersonRelationshipTagNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodes;
@property (nonatomic, readonly) PGGraphRelationshipTagEdgeCollection *relationshipTagEdges;

+ (Class)nodeClass;
+ (id)nodesWithRelationshipTag:(unsigned long long)arg1 inGraph:(id)arg2;

- (id)personNodes;
- (id)personNodesWithConfidence:(double)arg1;
- (id)relationshipTagEdges;

@end
