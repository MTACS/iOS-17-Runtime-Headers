
@protocol HKHRAFibBurdenDeterminer

@required

- (HKHRAFibBurdenAnalysisResult *)burdenForTachogramClassifications:(NSArray *)arg1 calculationType:(long long)arg2 calculationTypeContext:(NSNumber *)arg3 error:(id*)arg4;
- (id)initWithAnalyticsEventSubmissionManager:(HKAnalyticsEventSubmissionManager *)arg1;

@end
