
@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying> {
    NSCollectionLayoutSpacing * _bottom;
    NSCollectionLayoutSpacing * _leading;
    NSCollectionLayoutSpacing * _top;
    NSCollectionLayoutSpacing * _trailing;
}

@property (nonatomic, readonly) NSCollectionLayoutSpacing *bottom;
@property (nonatomic, readonly) NSCollectionLayoutSpacing *leading;
@property (nonatomic, readonly) NSCollectionLayoutSpacing *top;
@property (nonatomic, readonly) NSCollectionLayoutSpacing *trailing;

+ (id)defaultSpacing;
+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;
+ (id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;

- (void).cxx_destruct;
- (id)_externalDescription;
- (bool)_hasSpacing;
- (id)_spacingForEdge:(unsigned long long)arg1;
- (id)bottom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeOutsets;
- (id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSpacingFixedForEdge:(unsigned long long)arg1;
- (bool)isSpacingFlexibleForEdge:(unsigned long long)arg1;
- (id)leading;
- (double)spacingForEdge:(unsigned long long)arg1;
- (id)top;
- (id)trailing;

@end
