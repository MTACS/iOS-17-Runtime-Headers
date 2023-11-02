
@interface KGChainRelation : NSObject <KGRelation> {
    NSArray * _relations;
}

@property (nonatomic, readonly) NSArray *relations;

- (void).cxx_destruct;
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 inGraph:(id)arg2;
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 inGraph:(id)arg2;
- (id)initWithRelations:(id)arg1;
- (id)inverse;
- (id)relations;
- (id)targetNodeIdentifiersFromSourceNodeIdentifiers:(id)arg1 inGraph:(id)arg2;

@end
