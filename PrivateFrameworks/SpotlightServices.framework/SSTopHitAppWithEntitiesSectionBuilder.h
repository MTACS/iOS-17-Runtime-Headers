
@interface SSTopHitAppWithEntitiesSectionBuilder : SSSectionBuilder

+ (bool)supportsAppTopHitWithoutIndexFor:(id)arg1;
+ (bool)supportsBonusSPI:(id)arg1;
+ (bool)supportsFileProviderFor:(id)arg1;
+ (bool)supportsSection:(id)arg1;

- (id)buildBridgedResult;
- (id)buildCardSections;
- (id)buildCollectionCardSection;
- (id)buildCollectionStyle;
- (long long)maxCardSections;

@end
