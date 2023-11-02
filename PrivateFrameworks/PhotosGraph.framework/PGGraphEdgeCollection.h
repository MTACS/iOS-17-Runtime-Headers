
@interface PGGraphEdgeCollection : MAEdgeCollection

+ (Class)edgeClass;
+ (id)edgesFromNodes:(id)arg1;
+ (id)edgesFromNodes:(id)arg1 toNodes:(id)arg2;
+ (id)edgesInGraph:(id)arg1;
+ (id)edgesOfType:(unsigned long long)arg1 betweenNodes:(id)arg2 andNodes:(id)arg3;
+ (id)edgesOfType:(unsigned long long)arg1 onNodes:(id)arg2;
+ (id)edgesToNodes:(id)arg1;
+ (id)filter;

@end
