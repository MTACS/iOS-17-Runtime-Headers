
@protocol ATXFaceSuggestionParameters <NSObject>

@required

- (NSArray *)dayZeroFeaturedDescriptors;
- (NSSet *)extensionBundleIdsEligibleForComplicationsInFaceGallery;
- (NSDictionary *)globalPopularityScores;
- (NSArray *)heroSectionOrder;
- (NSDictionary *)hiddenRegions;
- (NSArray *)sectionOrder;
- (NSDictionary *)unpromotableRegions;
- (NSDictionary *)uprankedDateIntervals;

@end
