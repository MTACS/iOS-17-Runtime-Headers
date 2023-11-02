
@interface MABinaryAdjacency : NSObject {
    KGDirectedBinaryAdjacency * _adjacency;
    MAGraphReference * _graphReference;
    Class  _sourcesClass;
    Class  _targetsClass;
}

@property (nonatomic, readonly) KGDirectedBinaryAdjacency *adjacency;
@property (nonatomic, readonly) MAGraphReference *graphReference;
@property (nonatomic, readonly) MANodeCollection *sources;
@property (nonatomic, readonly) Class sourcesClass;
@property (nonatomic, readonly) unsigned long long sourcesCount;
@property (nonatomic, readonly) MANodeCollection *targets;
@property (nonatomic, readonly) Class targetsClass;

+ (id)adjacencyWithSources:(id)arg1 relation:(id)arg2 targetsClass:(Class)arg3;

- (void).cxx_destruct;
- (id)adjacency;
- (id)differenceWith:(id)arg1;
- (void)enumerateTargetsBySourceWithBlock:(id /* block */)arg1;
- (id)graphReference;
- (unsigned long long)hash;
- (id)initWithAdjacency:(id)arg1 graph:(id)arg2 sourcesClass:(Class)arg3 targetsClass:(Class)arg4;
- (id)initWithAdjacency:(id)arg1 graphReference:(id)arg2 sourcesClass:(Class)arg3 targetsClass:(Class)arg4;
- (id)intersectingSourcesWith:(id)arg1;
- (id)intersectingTargetsWith:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAdjacency:(id)arg1;
- (id)sources;
- (Class)sourcesClass;
- (unsigned long long)sourcesCount;
- (id)subtractingSourcesWith:(id)arg1;
- (id)subtractingTargetsWith:(id)arg1;
- (id)targets;
- (Class)targetsClass;
- (id)targetsForSourceIdentifier:(unsigned long long)arg1;
- (id)targetsForSources:(id)arg1;
- (id)targetsWithMinimumCount:(unsigned long long)arg1;
- (id)transposed;

@end
