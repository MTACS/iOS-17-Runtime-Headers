
@protocol KGMutableGraphImplementation <KGGraphImplementation>

@required

- (bool)addEdges:(NSArray *)arg1 error:(id*)arg2;
- (bool)addNodes:(NSArray *)arg1 error:(id*)arg2;
- (bool)beginTransactionWithError:(id*)arg1;
- (bool)commitTransactionWithError:(id*)arg1;
- (bool)removeEdgeForIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removeEdgesForIdentifiers:(KGElementIdentifierSet *)arg1 error:(id*)arg2;
- (bool)removeNodeForIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removeNodesForIdentifiers:(KGElementIdentifierSet *)arg1 error:(id*)arg2;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (bool)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(NSDictionary *)arg2 error:(id*)arg3;
- (bool)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(NSDictionary *)arg2 error:(id*)arg3;

@end
