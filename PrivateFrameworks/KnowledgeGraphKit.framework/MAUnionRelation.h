
@interface MAUnionRelation : MARelation {
    NSArray * _relations;
}

@property (nonatomic, readonly) NSArray *relations;

+ (id)scanRelationWithScanner:(id)arg1;

- (void).cxx_destruct;
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;
- (unsigned long long)hash;
- (id)initWithRelations:(id)arg1;
- (id)inverse;
- (bool)isEqual:(id)arg1;
- (id)relations;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;
- (id)visualString;

@end
