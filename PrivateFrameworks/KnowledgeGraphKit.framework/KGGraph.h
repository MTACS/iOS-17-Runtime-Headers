
@interface KGGraph : NSObject {
    <KGEntityFactory> * _entityFactory;
    <KGGraphImplementation> * _implementation;
}

@property (nonatomic, readonly) <KGEntityFactory> *entityFactory;
@property (nonatomic, readonly) NSUUID *graphIdentifier;
@property (nonatomic, readonly) <KGGraphImplementation> *implementation;

- (void).cxx_destruct;
- (id)_edgeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2;
- (id)_nodeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2;
- (id)adjacencyWithSourceNodeIdentifiers:(id)arg1 edgeFilter:(id)arg2 edgeDirection:(unsigned long long)arg3;
- (id)adjacencyWithTargetNodeIdentifiers:(id)arg1 edgeFilter:(id)arg2 edgeDirection:(unsigned long long)arg3;
- (id)changesAfterToken:(id)arg1 transactionLimit:(long long)arg2 error:(id*)arg3;
- (id)edgeChangesAfterToken:(id)arg1 transactionLimit:(long long)arg2 edgeFilter:(id)arg3 error:(id*)arg4;
- (id)edgeForIdentifier:(unsigned long long)arg1;
- (id)edgeIdentifiersBetweenStartNodeIdentifiers:(id)arg1 endNodeIdentifiers:(id)arg2 edgeFilter:(id)arg3 edgeDirection:(unsigned long long)arg4;
- (id)edgeIdentifiersMatchingFilter:(id)arg1;
- (id)edgeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2;
- (id)edgeLabels;
- (id)edgesForIdentifiers:(id)arg1;
- (id)entityFactory;
- (id)graphIdentifier;
- (id)implementation;
- (id)initWithImplementation:(id)arg1 entityFactory:(id)arg2;
- (id)labelsOfEdgesForIdentifiers:(id)arg1;
- (id)labelsOfNodesForIdentifiers:(id)arg1;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 edgeFilter:(id)arg3;
- (bool)noFatalError;
- (id)nodeChangesAfterToken:(id)arg1 transactionLimit:(long long)arg2 nodeFilter:(id)arg3 error:(id*)arg4;
- (id)nodeForIdentifier:(unsigned long long)arg1;
- (id)nodeIdentifiersMatchingFilter:(id)arg1;
- (id)nodeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2;
- (id)nodeIdentifiersOfEdgesForIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2;
- (id)nodeLabels;
- (id)nodesForIdentifiers:(id)arg1;
- (id)sourcesByTargetWithEdgeIdentifiers:(id)arg1;
- (id)targetsBySourceWithEdgeIdentifiers:(id)arg1;
- (id)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 edgeFilter:(id)arg3;

@end
