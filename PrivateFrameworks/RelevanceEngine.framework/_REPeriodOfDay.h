
@interface _REPeriodOfDay : NSObject <_REPeriodOfDayProperties> {
    NSDateInterval * _interval;
    unsigned long long  _periodOfDay;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) unsigned long long periodOfDay;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithInterval:(id)arg1 periodOfDay:(unsigned long long)arg2;
- (id)interval;
- (bool)isEqual:(id)arg1;
- (unsigned long long)periodOfDay;
- (id)startDate;

@end
