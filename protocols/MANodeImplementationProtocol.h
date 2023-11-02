
@protocol MANodeImplementationProtocol <NSObject>

@required

- (unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 matchingFilter:(MAEdgeFilter *)arg2;
- (void)enumerateEdgesOfType:(void *)arg1 matchingFilter:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, MAEdgeFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAEdge *, bool*, void*
- (void)enumerateEdgesOfType:(void *)arg1 withNode:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, MANode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAEdge *, bool*, void*
- (void)enumerateNeighborEdgesAndNodesMatchingFilter:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: MANodeFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAEdge *, MANode *, bool*, void*
- (void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(void *)arg1 matchingFilter:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, MAEdgeFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAEdge *, MANode *, bool*, void*
- (void)enumerateNeighborNodesMatchingFilter:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: MANodeFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (void)enumerateNeighborNodesThroughEdgesOfType:(void *)arg1 matchingFilter:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, MAEdgeFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (bool)hasEdgeOfType:(unsigned long long)arg1 matchingFilter:(MAEdgeFilter *)arg2;
- (bool)hasEdgeOfType:(unsigned long long)arg1 withNode:(MANode *)arg2;
- (unsigned long long)memoryFootprint:(MAMemoryFootprint *)arg1;

@end
