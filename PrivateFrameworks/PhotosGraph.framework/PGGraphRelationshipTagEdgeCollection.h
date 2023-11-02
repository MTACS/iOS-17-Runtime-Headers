
@interface PGGraphRelationshipTagEdgeCollection : PGGraphEdgeCollection

@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodes;
@property (nonatomic, readonly) PGGraphPersonRelationshipTagNodeCollection *tagNodes;

+ (Class)edgeClass;

- (id)personNodes;
- (id)tagNodes;

@end
