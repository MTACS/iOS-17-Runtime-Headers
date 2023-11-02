
@protocol KGGraphImplementation <NSObject>

@required

- (NSArray *)arrayOfEdgesWithIdentifiers:(KGElementIdentifierSet *)arg1 entityFactory:(id <KGEntityFactory>)arg2 error:(id*)arg3;
- (NSArray *)arrayOfNodesWithIdentifiers:(KGElementIdentifierSet *)arg1 entityFactory:(id <KGEntityFactory>)arg2 error:(id*)arg3;
- (NSArray *)changesAfterToken:(KGTransactionToken *)arg1 transactionLimit:(long long)arg2 error:(id*)arg3;
- (NSArray *)edgeChangesAfterToken:(KGTransactionToken *)arg1 transactionLimit:(long long)arg2 edgeFilter:(KGEdgeFilter *)arg3 error:(id*)arg4;
- (NSArray *)edgeIdentifiers:(KGElementIdentifierSet *)arg1 sortedByFloatPropertyForName:(NSString *)arg2 ascending:(bool)arg3 limit:(long long)arg4 error:(id*)arg5;
- (NSArray *)edgeIdentifiers:(KGElementIdentifierSet *)arg1 sortedByIntegerPropertyForName:(NSString *)arg2 ascending:(bool)arg3 limit:(long long)arg4 error:(id*)arg5;
- (NSArray *)edgeIdentifiers:(KGElementIdentifierSet *)arg1 sortedByStringPropertyForName:(NSString *)arg2 ascending:(bool)arg3 limit:(long long)arg4 error:(id*)arg5;
- (KGElementIdentifierSet *)edgeIdentifiersBetween:(KGElementIdentifierSet *)arg1 endNodeIdentifiers:(KGElementIdentifierSet *)arg2 edgeFilter:(KGEdgeFilter *)arg3 edgeDirection:(unsigned long long)arg4 error:(id*)arg5;
- (KGElementIdentifierSet *)edgeIdentifiersMatchingFilter:(KGEdgeFilter *)arg1 intersectingIdentifiers:(KGElementIdentifierSet *)arg2 error:(id*)arg3;
- (KGElementIdentifierSet *)edgeIdentifiersWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 edgeDirection:(unsigned long long)arg2 error:(id*)arg3;
- (KGElementIdentifierSet *)edgeIdentifiersWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 intersectingEdgeIdentifiers:(KGElementIdentifierSet *)arg2 edgeDirection:(unsigned long long)arg3 error:(id*)arg4;
- (NSSet *)edgeLabels;
- (NSUUID *)graphIdentifier;
- (NSSet *)labelsOfEdgesForIdentifiers:(KGElementIdentifierSet *)arg1;
- (NSSet *)labelsOfNodesForIdentifiers:(KGElementIdentifierSet *)arg1;
- (KGElementIdentifierSet *)neighborNodeIdentifiersWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 edgeDirection:(unsigned long long)arg2 edgeFilter:(KGEdgeFilter *)arg3 error:(id*)arg4;
- (bool)noFatalError;
- (NSArray *)nodeChangesAfterToken:(KGTransactionToken *)arg1 transactionLimit:(long long)arg2 nodeFilter:(KGNodeFilter *)arg3 error:(id*)arg4;
- (NSArray *)nodeIdentifiers:(KGElementIdentifierSet *)arg1 sortedByFloatPropertyForName:(NSString *)arg2 ascending:(bool)arg3 limit:(long long)arg4 error:(id*)arg5;
- (NSArray *)nodeIdentifiers:(KGElementIdentifierSet *)arg1 sortedByIntegerPropertyForName:(NSString *)arg2 ascending:(bool)arg3 limit:(long long)arg4 error:(id*)arg5;
- (NSArray *)nodeIdentifiers:(KGElementIdentifierSet *)arg1 sortedByStringPropertyForName:(NSString *)arg2 ascending:(bool)arg3 limit:(long long)arg4 error:(id*)arg5;
- (NSArray *)nodeIdentifiers:(KGElementIdentifierSet *)arg1 sortedByUnsignedIntegerPropertyForName:(NSString *)arg2 ascending:(bool)arg3 limit:(long long)arg4 error:(id*)arg5;
- (KGElementIdentifierSet *)nodeIdentifiersMatchingFilter:(KGNodeFilter *)arg1 intersectingIdentifiers:(KGElementIdentifierSet *)arg2 error:(id*)arg3;
- (KGElementIdentifierSet *)nodeIdentifiersOfEdgesWithIdentifiers:(KGElementIdentifierSet *)arg1 edgeDirection:(unsigned long long)arg2 error:(id*)arg3;
- (NSSet *)nodeLabels;
- (NSArray *)orderedArrayOfEdgesWithIdentifiers:(NSArray *)arg1 entityFactory:(id <KGEntityFactory>)arg2 error:(id*)arg3;
- (NSArray *)orderedArrayOfNodesWithIdentifiers:(NSArray *)arg1 entityFactory:(id <KGEntityFactory>)arg2 error:(id*)arg3;
- (KGPropertyValueArray *)propertiesForEdgesWithIdentifiers:(KGElementIdentifierSet *)arg1 propertyName:(NSString *)arg2 error:(id*)arg3;
- (KGPropertyValueArray *)propertiesForNodesWithIdentifiers:(KGElementIdentifierSet *)arg1 propertyName:(NSString *)arg2 error:(id*)arg3;
- (KGDirectedBinaryAdjacency *)sourcesByTargetWithEdgeIdentifiers:(KGElementIdentifierSet *)arg1 error:(id*)arg2;
- (KGDirectedBinaryAdjacency *)targetsBySourceWithEdgeIdentifiers:(KGElementIdentifierSet *)arg1 error:(id*)arg2;
- (KGElementIdentifierSet *)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 edgeDirection:(unsigned long long)arg2 edgeFilter:(KGEdgeFilter *)arg3 error:(id*)arg4;

@end
