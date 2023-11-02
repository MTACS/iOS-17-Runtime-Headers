
@interface REMAlarmTimeIntervalTrigger : REMAlarmTrigger <NSSecureCoding> {
    double  _timeInterval;
}

@property (nonatomic) double timeInterval;

+ (id)cdEntityName;
+ (bool)supportsSecureCoding;

- (id)_deepCopy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 timeInterval:(double)arg2;
- (id)initWithTimeInterval:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTemporal;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;

@end
