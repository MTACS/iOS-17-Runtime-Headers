
@interface MAEdgeCollection : MAElementCollection

+ (id)edgesFromNodes:(id)arg1 matchingFilter:(id)arg2;
+ (id)edgesFromNodes:(id)arg1 toNodes:(id)arg2 matchingFilter:(id)arg3;
+ (id)edgesMatchingFilter:(id)arg1 inGraph:(id)arg2;
+ (id)edgesOfType:(unsigned long long)arg1 betweenNodes:(id)arg2 andNodes:(id)arg3 matchingFilter:(id)arg4;
+ (id)edgesOfType:(unsigned long long)arg1 onNodes:(id)arg2 matchingFilter:(id)arg3;
+ (id)edgesToNodes:(id)arg1 matchingFilter:(id)arg2;

- (void)_enumerateUsingBlock:(id /* block */)arg1;
- (id)anyEdge;
- (bool)containsEdge:(id)arg1;
- (id)edgesMatchingFilter:(id)arg1;
- (void)enumerateDoublePropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateEdgesUsingBlock:(id /* block */)arg1;
- (void)enumerateIntegerPropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateStringPropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (id)firstEdge;
- (id)initWithEdge:(id)arg1;
- (id)labels;
- (id)randomEdge;

@end
