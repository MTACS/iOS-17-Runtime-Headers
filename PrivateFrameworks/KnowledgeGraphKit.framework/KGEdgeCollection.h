
@interface KGEdgeCollection : KGElementCollection

- (id)allObjects;
- (void)enumerateEdgesSortedByFloatPropertyForName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEdgesSortedByIntegerPropertyForName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEdgesSortedByStringPropertyForName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEdgesUsingBlock:(id /* block */)arg1;
- (void)enumerateElementsWithBatchSize:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateOrderedEdges:(id)arg1 withBatchSize:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;

@end
