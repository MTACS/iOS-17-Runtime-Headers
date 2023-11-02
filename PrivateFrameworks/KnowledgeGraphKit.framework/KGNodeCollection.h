
@interface KGNodeCollection : KGElementCollection

- (id)allObjects;
- (void)enumerateElementsWithBatchSize:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateIdentifiersSortedByDoublePropertyForName:(id)arg1 ascending:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateIdentifiersSortedByIntegerPropertyForName:(id)arg1 ascending:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateIdentifiersSortedByStringPropertyForName:(id)arg1 ascending:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateIdentifiersSortedByUnsignedIntegerPropertyForName:(id)arg1 ascending:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNodesSortedByFloatPropertyForName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNodesSortedByIntegerPropertyForName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNodesSortedByStringPropertyForName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateOrderedNodes:(id)arg1 withBatchSize:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;

@end
