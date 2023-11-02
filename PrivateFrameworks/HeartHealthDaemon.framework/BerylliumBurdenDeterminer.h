
@interface BerylliumBurdenDeterminer : NSObject <HKHRAFibBurdenDeterminer> {
    HKAnalyticsEventSubmissionManager * _analyticsEventSubmissionManager;
    ABAfibBurdenAnalyzer * _analyzer;
}

- (void).cxx_destruct;
- (id)burdenForTachogramClassifications:(id)arg1 calculationType:(long long)arg2 calculationTypeContext:(id)arg3 error:(id*)arg4;
- (id)initWithAnalyticsEventSubmissionManager:(id)arg1;

@end
