
@interface HRERankConfidenceController : NSObject

+ (double)_limitRankToValidRange:(double)arg1;
+ (long long)version;

- (void)calculateRankForRecommendations:(id)arg1 fromTemplate:(id)arg2;
- (id)rankRecommendations:(id)arg1;
- (id)rankRecommendationsFromSet:(id)arg1;

@end
