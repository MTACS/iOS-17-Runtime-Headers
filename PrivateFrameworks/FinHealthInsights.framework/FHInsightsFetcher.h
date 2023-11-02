
@interface FHInsightsFetcher : NSObject

+ (id)sharedInstance;

- (id)_init;
- (id)retrieveInsightsWithStartDate:(id)arg1 endDate:(id)arg2 insightTypeItems:(id)arg3 trendWindow:(long long)arg4;

@end
