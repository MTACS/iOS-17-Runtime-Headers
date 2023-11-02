
@interface PGGraphPropertylessNode : PGGraphOptimizedNode

- (void)checkConsistencyOfProperties:(id)arg1 withExtraPropertyKeys:(id)arg2;
- (bool)hasProperties;
- (bool)hasProperties:(id)arg1;
- (id)propertyDictionary;

@end
