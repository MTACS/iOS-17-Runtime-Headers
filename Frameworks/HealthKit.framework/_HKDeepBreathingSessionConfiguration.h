
@interface _HKDeepBreathingSessionConfiguration : HKTaskConfiguration {
    double  _inhaleExhaleRatio;
    double  _respirationsPerMinute;
    double  _sessionDuration;
    NSDate * _startDate;
}

@property (nonatomic) double inhaleExhaleRatio;
@property (nonatomic) double respirationsPerMinute;
@property (nonatomic) double sessionDuration;
@property (nonatomic, copy) NSDate *startDate;

+ (id)sessionConfigurationWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)inhaleExhaleRatio;
- (id)initWithCoder:(id)arg1;
- (double)respirationsPerMinute;
- (double)sessionDuration;
- (void)setInhaleExhaleRatio:(double)arg1;
- (void)setRespirationsPerMinute:(double)arg1;
- (void)setSessionDuration:(double)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
