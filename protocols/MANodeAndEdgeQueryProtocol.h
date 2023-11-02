
@protocol MANodeAndEdgeQueryProtocol <NSObject, MAGraphProxy>

@required

- (KGDirectedBinaryAdjacency *)adjacencyWithEndNodeIdentifiers:(KGElementIdentifierSet *)arg1 edgeFilter:(MAEdgeFilter *)arg2 edgeType:(unsigned long long)arg3;
- (KGDirectedBinaryAdjacency *)adjacencyWithSources:(KGElementIdentifierSet *)arg1 relation:(MARelation *)arg2;
- (KGDirectedBinaryAdjacency *)adjacencyWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 edgeFilter:(MAEdgeFilter *)arg2 edgeType:(unsigned long long)arg3;
- (MAEdge *)anyEdgeMatchingFilter:(MAEdgeFilter *)arg1;
- (MANode *)anyNodeMatchingFilter:(MANodeFilter *)arg1;
- (MAEdge *)edgeForIdentifier:(unsigned long long)arg1;
- (KGElementIdentifierSet *)edgeIdentifiersMatchingFilter:(MAEdgeFilter *)arg1;
- (KGElementIdentifierSet *)edgeIdentifiersMatchingFilter:(MAEdgeFilter *)arg1 intersectingIdentifiers:(KGElementIdentifierSet *)arg2;
- (KGElementIdentifierSet *)edgeIdentifiersOfType:(unsigned long long)arg1 betweenNodesForIdentifiers:(KGElementIdentifierSet *)arg2 andNodesForIdentifiers:(KGElementIdentifierSet *)arg3 matchingFilter:(MAEdgeFilter *)arg4;
- (KGElementIdentifierSet *)edgeIdentifiersOfType:(unsigned long long)arg1 onNodesForIdentifiers:(KGElementIdentifierSet *)arg2 matchingFilter:(MAEdgeFilter *)arg3;
- (unsigned long long)edgesCount;
- (NSSet *)edgesForIdentifiers:(KGElementIdentifierSet *)arg1;
- (void)enumerateDoublePropertyValuesForKey:(void *)arg1 ofEdgesWithIdentifiers:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: NSString *, KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, double, bool*, void*
- (void)enumerateDoublePropertyValuesForKey:(void *)arg1 ofNodesWithIdentifiers:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: NSString *, KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, double, bool*, void*
- (void)enumerateEdgesMatchingFilter:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: MAEdgeFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAEdge *, bool*, void*
- (void)enumerateEdgesWithIdentifiers:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAEdge *, bool*, void*
- (void)enumerateIntegerPropertyValuesForKey:(void *)arg1 ofEdgesWithIdentifiers:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: NSString *, KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, long long, bool*, void*
- (void)enumerateIntegerPropertyValuesForKey:(void *)arg1 ofNodesWithIdentifiers:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: NSString *, KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, long long, bool*, void*
- (void)enumerateNodeIdentifiers:(void *)arg1 sortedByDoublePropertyForName:(void *)arg2 ascending:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 10: KGElementIdentifierSet *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, bool*, void*
- (void)enumerateNodeIdentifiers:(void *)arg1 sortedByIntegerPropertyForName:(void *)arg2 ascending:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 10: KGElementIdentifierSet *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, bool*, void*
- (void)enumerateNodeIdentifiers:(void *)arg1 sortedByStringPropertyForName:(void *)arg2 ascending:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 10: KGElementIdentifierSet *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, bool*, void*
- (void)enumerateNodeIdentifiers:(void *)arg1 sortedByUnsignedIntegerPropertyForName:(void *)arg2 ascending:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 10: KGElementIdentifierSet *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, bool*, void*
- (void)enumerateNodesMatchingFilter:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: MANodeFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (void)enumerateNodesWithIdentifiers:(void *)arg1 sortedByFloatPropertyForName:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: KGElementIdentifierSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (void)enumerateNodesWithIdentifiers:(void *)arg1 sortedByIntegerPropertyForName:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: KGElementIdentifierSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (void)enumerateNodesWithIdentifiers:(void *)arg1 sortedByStringPropertyForName:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: KGElementIdentifierSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (void)enumerateNodesWithIdentifiers:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (void)enumerateStringPropertyValuesForKey:(void *)arg1 ofEdgesWithIdentifiers:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: NSString *, KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSString *, bool*, void*
- (void)enumerateStringPropertyValuesForKey:(void *)arg1 ofNodesWithIdentifiers:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: NSString *, KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSString *, bool*, void*
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(void *)arg1 ofEdgesWithIdentifiers:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: NSString *, KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, bool*, void*
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(void *)arg1 ofNodesWithIdentifiers:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: NSString *, KGElementIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, bool*, void*
- (bool)findAndResolveUniqueEdge:(MAEdge<MAUniquelyIdentifiableEdge> *)arg1;
- (bool)findAndResolveUniqueNode:(MANode<MAUniquelyIdentifiableNode> *)arg1;
- (void)labelsAndDomainsOfEdgesForIdentifiers:(KGElementIdentifierSet *)arg1 labels:(id*)arg2 domains:(id*)arg3;
- (void)labelsAndDomainsOfNodesForIdentifiers:(KGElementIdentifierSet *)arg1 labels:(id*)arg2 domains:(id*)arg3;
- (KGElementIdentifierSet *)neighborNodeIdentifiersWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 edgeType:(unsigned long long)arg2 edgeFilter:(MAEdgeFilter *)arg3;
- (Class)nodeClass;
- (MANode *)nodeForIdentifier:(unsigned long long)arg1;
- (KGElementIdentifierSet *)nodeIdentifiersMatchingFilter:(MANodeFilter *)arg1;
- (KGElementIdentifierSet *)nodeIdentifiersMatchingFilter:(MANodeFilter *)arg1 intersectingIdentifiers:(KGElementIdentifierSet *)arg2;
- (KGElementIdentifierSet *)nodeIdentifiersOfEdgeIdentifiers:(KGElementIdentifierSet *)arg1 ofType:(unsigned long long)arg2;
- (KGElementIdentifierSet *)nodeIdentifiersRelatedToSourceNodeIdentifiers:(KGElementIdentifierSet *)arg1 relation:(MARelation *)arg2;
- (unsigned long long)nodesCount;
- (NSSet *)nodesForIdentifiers:(KGElementIdentifierSet *)arg1;
- (unsigned long long)numberOfEdgesMatchingFilter:(MAEdgeFilter *)arg1;
- (unsigned long long)numberOfNodesMatchingFilter:(MANodeFilter *)arg1;
- (KGDirectedBinaryAdjacency *)sourcesByTargetWithEdgeIdentifiers:(KGElementIdentifierSet *)arg1;
- (KGDirectedBinaryAdjacency *)targetsBySourceWithEdgeIdentifiers:(KGElementIdentifierSet *)arg1;
- (KGElementIdentifierSet *)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 edgeType:(unsigned long long)arg2 edgeFilter:(MAEdgeFilter *)arg3;

@end
