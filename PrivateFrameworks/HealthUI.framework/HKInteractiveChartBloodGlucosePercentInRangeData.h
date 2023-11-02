
@interface HKInteractiveChartBloodGlucosePercentInRangeData : NSObject <HKGraphSeriesChartData> {
    long long  _countInEuglycemia;
    long long  _countInHyperglycemia;
    long long  _countInLevel1Hypoglycemia;
    long long  _countInLevel2Hypoglycemia;
}

@property (nonatomic) long long countInEuglycemia;
@property (nonatomic) long long countInHyperglycemia;
@property (nonatomic) long long countInLevel1Hypoglycemia;
@property (nonatomic) long long countInLevel2Hypoglycemia;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)countForClassification:(long long)arg1;
- (long long)countInEuglycemia;
- (long long)countInHyperglycemia;
- (long long)countInLevel1Hypoglycemia;
- (long long)countInLevel2Hypoglycemia;
- (double)fractionForClassification:(long long)arg1;
- (void)setCountInEuglycemia:(long long)arg1;
- (void)setCountInHyperglycemia:(long long)arg1;
- (void)setCountInLevel1Hypoglycemia:(long long)arg1;
- (void)setCountInLevel2Hypoglycemia:(long long)arg1;
- (long long)totalCount;

@end
