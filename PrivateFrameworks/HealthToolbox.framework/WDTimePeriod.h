
@interface WDTimePeriod : NSObject <NSCopying, WDTimePeriod> {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)sleep_timePeriodForSample:(id)arg1;
+ (id)timePeriodWithSample:(id)arg1;
+ (id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)sleep_titleString;
- (id)startDate;

@end
