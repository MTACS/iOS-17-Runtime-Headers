
@interface PKDateComponentsRangeFormatter : NSObject {
    NSDateIntervalFormatter * _dateIntervalFormatter;
}

@property (nonatomic, retain) NSDateIntervalFormatter *dateIntervalFormatter;

- (void).cxx_destruct;
- (bool)_areHoursDefinedInDateComponentsRange:(id)arg1;
- (id)_currentDateComponents;
- (id)_formatForDateComponentsRange:(id)arg1;
- (bool)_isSameDayInDateComponentsRange:(id)arg1;
- (bool)_isSameEraInDateComponentsRange:(id)arg1 currentDateComponents:(id)arg2;
- (bool)_isSameYearInDateComponentsRange:(id)arg1 currentDateComponents:(id)arg2;
- (long long)_resolvedEraFromEra:(long long)arg1 currentEra:(long long)arg2;
- (id)dateIntervalFormatter;
- (void)setDateIntervalFormatter:(id)arg1;
- (id)stringFromDateComponentsRange:(id)arg1;

@end
