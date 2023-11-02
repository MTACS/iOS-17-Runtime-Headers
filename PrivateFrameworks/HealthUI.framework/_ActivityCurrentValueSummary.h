
@interface _ActivityCurrentValueSummary : HKActivitySummary {
    double  _collatedSummaryCount;
    NSDateComponents * _collationDateComponents;
    long long  _timeScope;
}

@property (nonatomic) double collatedSummaryCount;
@property (nonatomic, retain) NSDateComponents *collationDateComponents;
@property (nonatomic) long long timeScope;

- (void).cxx_destruct;
- (id)_addQuantity:(id)arg1 toQuantity:(id)arg2;
- (id)_divideQuantity:(id)arg1 divisor:(double)arg2;
- (id)_maxQuantity:(id)arg1 otherQuantity:(id)arg2;
- (double)collatedSummaryCount;
- (id)collationDateComponents;
- (void)combineWithActivitySummary:(id)arg1;
- (id)dateComponentsForCalendar:(id)arg1;
- (void)finishCollatingSummaryWithGraphView:(id)arg1;
- (id)initWithTimeScope:(long long)arg1;
- (void)setCollatedSummaryCount:(double)arg1;
- (void)setCollationDateComponents:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (long long)timeScope;

@end
