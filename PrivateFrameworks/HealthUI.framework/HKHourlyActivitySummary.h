
@interface HKHourlyActivitySummary : HKActivitySummary {
    NSDateComponents * _hourlyDateComponents;
}

@property (nonatomic, retain) NSDateComponents *hourlyDateComponents;

- (void).cxx_destruct;
- (bool)_useHourlyGoalComparison;
- (id)dateComponentsForCalendar:(id)arg1;
- (id)hourlyDateComponents;
- (void)setHourlyDateComponents:(id)arg1;

@end
