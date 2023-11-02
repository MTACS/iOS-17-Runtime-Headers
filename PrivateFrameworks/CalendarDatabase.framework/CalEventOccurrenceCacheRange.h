
@interface CalEventOccurrenceCacheRange : NSObject {
    NSDate * _endDate;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;
- (id)startDate;
- (id)timeZone;

@end
