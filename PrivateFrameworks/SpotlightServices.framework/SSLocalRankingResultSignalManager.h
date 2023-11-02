
@interface SSLocalRankingResultSignalManager : NSObject

+ (id)_getSpotlightRecentEngagementAttributes;
+ (id)_getSpotlightRecentEngagementAttributesNonUnique;
+ (id)getSpotlightRecentEngagementAttributes;
+ (id)getSpotlightRecentEngagementAttributesNonUnique;
+ (id)updateRecentEngagementAttributes:(id)arg1 queryString:(id)arg2 renderPosition:(id)arg3 engagementAttributes:(id)arg4 unique:(bool)arg5;

@end
