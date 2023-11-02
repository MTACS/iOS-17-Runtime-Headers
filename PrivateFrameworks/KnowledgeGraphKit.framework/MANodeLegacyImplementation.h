
@interface MANodeLegacyImplementation : NSObject <MANodeImplementationProtocol> {
    NSMutableArray * _edges;
    MANode * _node;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addEdge:(id)arg1;
- (unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 matchingFilter:(id)arg2;
- (void)enumerateEdgesOfType:(unsigned long long)arg1 matchingFilter:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEdgesOfType:(unsigned long long)arg1 withNode:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNeighborEdgesAndNodesMatchingFilter:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(unsigned long long)arg1 matchingFilter:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNeighborNodesMatchingFilter:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 matchingFilter:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)hasEdgeOfType:(unsigned long long)arg1 matchingFilter:(id)arg2;
- (bool)hasEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2;
- (id)initWithNode:(id)arg1;
- (unsigned long long)memoryFootprint:(id)arg1;
- (void)removeEdge:(id)arg1;

@end
