
@interface KGDirectedBinaryAdjacency : NSObject {
    _TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency * _underlyingObject;
}

@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) KGElementIdentifierSet *sources;
@property (nonatomic, readonly) unsigned long long sourcesCount;
@property (nonatomic, readonly) KGElementIdentifierSet *targets;

+ (id)identityWith:(id)arg1;

- (void).cxx_destruct;
- (bool)containsSource:(unsigned long long)arg1 target:(unsigned long long)arg2;
- (id)description;
- (id)differenceWith:(id)arg1;
- (void)enumerateTargetsBySourceWith:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUnderlyingObject:(id)arg1;
- (id)intersectingSourcesWith:(id)arg1;
- (id)intersectingTargetsWith:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)joinOnTargetsOfAdjacency:(id)arg1;
- (id)mutableCopy;
- (id)sources;
- (unsigned long long)sourcesCount;
- (id)subtractingSourcesWith:(id)arg1;
- (id)subtractingTargetsWith:(id)arg1;
- (id)targets;
- (id)targetsForSourceIdentifier:(unsigned long long)arg1;
- (id)targetsForSources:(id)arg1;
- (id)targetsWithMinimumCount:(unsigned long long)arg1;
- (id)transposed;
- (id)unionWith:(id)arg1;

@end
