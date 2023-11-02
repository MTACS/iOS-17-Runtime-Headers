
@interface HKHRJulianDayTimeZoneState : NSObject {
    long long  _count;
    NSDate * _lastSampleDate;
}

@property (nonatomic) long long count;
@property (nonatomic, retain) NSDate *lastSampleDate;

- (void).cxx_destruct;
- (long long)count;
- (id)init;
- (id)lastSampleDate;
- (void)setCount:(long long)arg1;
- (void)setLastSampleDate:(id)arg1;

@end
