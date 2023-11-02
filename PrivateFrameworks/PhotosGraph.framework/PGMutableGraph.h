
@interface PGMutableGraph : PGGraph

- (id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 didCreate:(bool*)arg4;
- (id)addUniquelyIdentifiedNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 didCreate:(bool*)arg4;

@end
