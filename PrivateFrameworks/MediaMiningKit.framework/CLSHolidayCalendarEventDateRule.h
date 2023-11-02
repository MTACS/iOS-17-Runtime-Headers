
@interface CLSHolidayCalendarEventDateRule : NSObject {
    <CLSHolidayCalendarEventDateRuleDelegate> * _delegate;
    long long  _endYear;
    long long  _offsetDays;
    NSString * _relativeToRuleUUID;
    NSDateComponents * _simpleRuleComponents;
    long long  _startYear;
}

@property (nonatomic) <CLSHolidayCalendarEventDateRuleDelegate> *delegate;
@property (nonatomic) long long endYear;
@property (nonatomic) long long offsetDays;
@property (nonatomic, copy) NSString *relativeToRuleUUID;
@property (nonatomic, copy) NSDateComponents *simpleRuleComponents;
@property (nonatomic) long long startYear;

- (void).cxx_destruct;
- (id)_stringDescriptionForDateRuleComponentValue:(long long)arg1;
- (id)delegate;
- (id)description;
- (long long)endYear;
- (bool)hasEndYear;
- (bool)hasExplicitYear;
- (bool)hasStartYear;
- (id)initWithEventDescription:(id)arg1;
- (id)localDateByEvaluatingRuleForYear:(long long)arg1;
- (bool)matchesExplicitYear:(long long)arg1;
- (long long)offsetDays;
- (id)relativeToRuleUUID;
- (void)setDelegate:(id)arg1;
- (void)setEndYear:(long long)arg1;
- (void)setOffsetDays:(long long)arg1;
- (void)setRelativeToRuleUUID:(id)arg1;
- (void)setSimpleRuleComponents:(id)arg1;
- (void)setStartYear:(long long)arg1;
- (id)simpleRuleComponents;
- (long long)startYear;

@end
