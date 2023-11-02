
@interface SCLTimeInterval : NSObject <NSCopying, NSSecureCoding> {
    SCLScheduleTime * _endTime;
    SCLScheduleTime * _startTime;
}

@property (nonatomic, readonly, copy) SCLScheduleTime *endTime;
@property (nonatomic, readonly, copy) SCLScheduleTime *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsScheduleTime:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)crossesDayBoundary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (bool)intersectsTimeInterval:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)startTime;

@end
