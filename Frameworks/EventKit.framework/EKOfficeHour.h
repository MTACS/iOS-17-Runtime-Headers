
@interface EKOfficeHour : NSObject <NSCopying> {
    bool  _enabled;
    NSDate * _endTime;
    NSDate * _startTime;
    NSTimeZone * _timeZone;
    long long  _weekday;
}

@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic) long long weekday;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enabled;
- (id)endTime;
- (id)initWithEnabled:(bool)arg1 weekday:(long long)arg2 startTime:(id)arg3 endTime:(id)arg4 timeZone:(id)arg5;
- (void)setEnabled:(bool)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWeekday:(long long)arg1;
- (id)startTime;
- (id)timeZone;
- (long long)weekday;

@end
