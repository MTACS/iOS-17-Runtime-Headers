
@interface MANodeCollection : MAElementCollection

+ (id)nodesMatchingFilter:(id)arg1 inGraph:(id)arg2;
+ (id)nodesOfEdges:(id)arg1;
+ (id)nodesRelatedToNodes:(id)arg1 withRelation:(id)arg2;
+ (id)sourceNodesOfEdges:(id)arg1;
+ (id)targetNodesOfEdges:(id)arg1;

- (void)_enumerateUsingBlock:(id /* block */)arg1;
- (id)anyNode;
- (bool)containsNode:(id)arg1;
- (id)debugDescription;
- (void)enumerateDoublePropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateIntegerPropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateNodesAsCollectionsSortedByDoublePropertyForName:(id)arg1 ascending:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNodesAsCollectionsSortedByIntegerPropertyForName:(id)arg1 ascending:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNodesAsCollectionsSortedByStringPropertyForName:(id)arg1 ascending:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNodesAsCollectionsSortedByUnsignedIntegerPropertyForName:(id)arg1 ascending:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNodesSortedByFloatPropertyForName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNodesSortedByIntegerPropertyForName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNodesSortedByStringPropertyForName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateStringPropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (id)firstNode;
- (id)initWithNode:(id)arg1;
- (id)labels;
- (id)nodesMatchingFilter:(id)arg1;
- (id)randomNode;

@end
