
@interface HKInteractiveChartHandwashingEventData : HKInteractiveChartTimePeriodData {
    bool  _meetsGoal;
}

@property (nonatomic) bool meetsGoal;

- (id)initWithTimePeriod:(double)arg1 meetsGoal:(bool)arg2;
- (bool)meetsGoal;
- (void)setMeetsGoal:(bool)arg1;

@end
