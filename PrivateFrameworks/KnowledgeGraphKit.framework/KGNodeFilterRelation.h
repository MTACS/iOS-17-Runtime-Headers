
@interface KGNodeFilterRelation : NSObject <KGRelation> {
    KGNodeFilter * _nodeFilter;
}

@property (nonatomic, readonly) KGNodeFilter *nodeFilter;

- (void).cxx_destruct;
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 inGraph:(id)arg2;
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 inGraph:(id)arg2;
- (id)initWithNodeFilter:(id)arg1;
- (id)inverse;
- (id)nodeFilter;
- (id)targetNodeIdentifiersFromSourceNodeIdentifiers:(id)arg1 inGraph:(id)arg2;

@end
