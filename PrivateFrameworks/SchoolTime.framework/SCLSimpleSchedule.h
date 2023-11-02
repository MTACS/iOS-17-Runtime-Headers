
@interface SCLSimpleSchedule : SCLSchedule {
    SCLScheduleTime * _endTime;
    long long  _repeatSchedule;
    SCLScheduleTime * _startTime;
}

@property (nonatomic, readonly, copy) SCLScheduleTime *endTime;
@property (nonatomic, readonly) long long repeatSchedule;
@property (nonatomic, readonly, copy) SCLScheduleTime *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSimpleSchedule:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)recurrences;
- (long long)repeatSchedule;
- (id)startTime;

@end
