
@interface STBlueprintUsageLimitScheduleCustomDayItem : NSObject {
    double  _budgetLimit;
    unsigned long long  _day;
}

@property (nonatomic) double budgetLimit;
@property (nonatomic) unsigned long long day;

- (double)budgetLimit;
- (unsigned long long)day;
- (void)setBudgetLimit:(double)arg1;
- (void)setDay:(unsigned long long)arg1;

@end
