
@interface HDMHValenceDistributionSummaryBuilder : NSObject {
    NSMutableArray * _dailyValenceValues;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    NSCalendar * _gregorianCalendar;
    NSMutableArray * _momentaryValenceDistributions;
    double  _valenceMergeInterval;
}

@property (nonatomic, retain) NSMutableArray *dailyValenceValues;
@property (nonatomic, readonly) struct { long long x1; long long x2; } dayIndexRange;
@property (nonatomic, readonly) NSCalendar *gregorianCalendar;
@property (nonatomic, retain) NSMutableArray *momentaryValenceDistributions;
@property (nonatomic) double valenceMergeInterval;

- (void).cxx_destruct;
- (id)_calculateAverageDailyValenceDistribution;
- (void)_mergeAdjacentValenceDistributions:(id)arg1;
- (void)_mergeStatesOfMind:(id)arg1 intoValenceDistributions:(id)arg2;
- (double)_valenceMergeInterval;
- (bool)_value:(double)arg1 isBetweenMinValue:(double)arg2 maxValue:(double)arg3;
- (void)addDaySummary:(id)arg1;
- (id)dailyValenceValues;
- (struct { long long x1; long long x2; })dayIndexRange;
- (id)gregorianCalendar;
- (id)initWithDayIndexRange:(struct { long long x1; long long x2; })arg1 gregorianCalendar:(id)arg2;
- (id)momentaryValenceDistributions;
- (void)setDailyValenceValues:(id)arg1;
- (void)setMomentaryValenceDistributions:(id)arg1;
- (void)setValenceMergeInterval:(double)arg1;
- (id)valenceDistributionSummary;
- (double)valenceMergeInterval;

@end
