
@protocol PHCollectionPresentationHints <NSObject>

@required

- (unsigned long long)forbiddenMoods;
- (NSDictionary *)musicGenreDistribution;
- (long long)qualityCategory;
- (unsigned long long)recommendedMoods;
- (unsigned long long)socialRelationships;
- (long long)tripType;

@end
