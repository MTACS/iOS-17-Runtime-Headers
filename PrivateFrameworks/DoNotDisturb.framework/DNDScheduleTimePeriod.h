
@interface DNDScheduleTimePeriod : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    DNDScheduleTime * _endTime;
    DNDScheduleTime * _startTime;
    unsigned long long  _weekdays;
}

@property (nonatomic, readonly, copy) DNDScheduleTime *endTime;
@property (nonatomic, readonly, copy) DNDScheduleTime *startTime;
@property (nonatomic, readonly) unsigned long long weekdays;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPeriod:(id)arg1;
- (id)_initWithStartTime:(id)arg1 endTime:(id)arg2 weekdays:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)startTime;
- (unsigned long long)weekdays;

@end
