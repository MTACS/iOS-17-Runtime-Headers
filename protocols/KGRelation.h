
@protocol KGRelation

@required

- (KGDirectedBinaryAdjacency *)adjacencyByJoiningWithAdjacency:(KGDirectedBinaryAdjacency *)arg1 inGraph:(KGGraph *)arg2;
- (KGDirectedBinaryAdjacency *)adjacencyWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 inGraph:(KGGraph *)arg2;
- (<KGRelation> *)inverse;
- (KGElementIdentifierSet *)targetNodeIdentifiersFromSourceNodeIdentifiers:(KGElementIdentifierSet *)arg1 inGraph:(KGGraph *)arg2;

@end
