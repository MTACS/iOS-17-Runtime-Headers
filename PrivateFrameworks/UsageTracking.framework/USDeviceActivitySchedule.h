
@interface USDeviceActivitySchedule : NSObject <NSSecureCoding> {
    NSDateComponents * _intervalEnd;
    NSDateComponents * _intervalStart;
    bool  _repeats;
    NSDateComponents * _warningTime;
}

@property (readonly, copy) NSDateComponents *intervalEnd;
@property (readonly, copy) NSDateComponents *intervalStart;
@property (readonly, copy) NSDateInterval *nextInterval;
@property (readonly) bool repeats;
@property (readonly, copy) NSDateComponents *warningTime;

+ (id)nextIntervalForStartComponents:(id)arg1 endComponents:(id)arg2;
+ (id)nextWarningDateForComponents:(id)arg1 referenceDate:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntervalStart:(id)arg1 intervalEnd:(id)arg2 repeats:(bool)arg3 warningTime:(id)arg4;
- (id)intervalEnd;
- (id)intervalStart;
- (bool)isEqual:(id)arg1;
- (id)nextInterval;
- (bool)repeats;
- (id)warningTime;

@end
