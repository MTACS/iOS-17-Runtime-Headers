
@interface PGGraphHolidayMetricEvent : PGAbstractMetricEvent {
    NSString * _holidayName;
    unsigned long long  _numberOfCelebrations;
    NSDictionary * _payload;
}

@property (nonatomic, retain) NSString *holidayName;
@property (nonatomic) unsigned long long numberOfCelebrations;

+ (id)celebratedHolidayMetricEventsWithGraphManager:(id)arg1;

- (void).cxx_destruct;
- (id)holidayName;
- (id)identifier;
- (id)initWithHolidayName:(id)arg1 numberOfCelebrations:(unsigned long long)arg2;
- (unsigned long long)numberOfCelebrations;
- (id)payload;
- (void)setHolidayName:(id)arg1;
- (void)setNumberOfCelebrations:(unsigned long long)arg1;

@end
