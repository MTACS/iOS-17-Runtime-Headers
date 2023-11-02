
@interface HKHandwashingDateRangeDataSourceDelegate : NSObject <HKDateRangeDataSourceDelegate> {
    double  _goal;
}

@property (nonatomic) double goal;

- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (double)goal;
- (id)initWithGoal:(double)arg1;
- (void)setGoal:(double)arg1;
- (void)setUpdateDelegate:(id)arg1;

@end
