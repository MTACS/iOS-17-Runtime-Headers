
@interface MARelation : NSObject

@property (nonatomic, readonly) MARelation *excludeSource;
@property (nonatomic, readonly) MARelation *inverse;
@property (nonatomic, readonly) bool isTransitive;
@property (nonatomic, readonly) MARelation *optionalStep;
@property (nonatomic, readonly) MARelation *transitiveClosure;
@property (nonatomic, readonly) NSString *visualString;

+ (id)_scanNonChainRelationWithScanner:(id)arg1;
+ (id)chain:(id)arg1;
+ (id)relationWithVisualString:(id)arg1;
+ (id)scanRelationWithScanner:(id)arg1;
+ (id)union:(id)arg1;

- (id)adjacencyByJoiningWithAdjacency:(id)arg1 graph:(id)arg2;
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;
- (id)description;
- (id)excludeSource;
- (id)initForSubclassing;
- (id)inverse;
- (bool)isTransitive;
- (id)optionalStep;
- (id)repeatWithCount:(unsigned long long)arg1;
- (id)repeatWithMinCount:(unsigned long long)arg1 maxCount:(unsigned long long)arg2;
- (id)transitiveClosure;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;
- (id)visualString;

@end
