
@interface PGGraphNodeCollection : MANodeCollection

+ (id)filter;
+ (Class)nodeClass;
+ (id)nodesInGraph:(id)arg1;
+ (id)subsetInCollection:(id)arg1;

- (id)initWithSubsetInGraph:(id)arg1 elementIdentifiers:(id)arg2;

@end
