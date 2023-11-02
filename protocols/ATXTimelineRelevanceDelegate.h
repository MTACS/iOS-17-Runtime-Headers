
@protocol ATXTimelineRelevanceDelegate <NSObject>

@required

- (unsigned long long)countOfInfoSuggestionsForBundleId:(NSString *)arg1;
- (unsigned long long)countOfInfoSuggestionsForSourceId:(NSString *)arg1;
- (NSDate *)latestUpdateDateForSourceId:(NSString *)arg1;
- (void)recordRecentTimelineEntries:(NSArray *)arg1 forWidget:(CHSWidget *)arg2;

@end
