
@interface HMUserHomeAccessScheduleRule : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _daysOfTheWeek;
    NSDateComponents * _endTime;
    NSDateComponents * _startTime;
    NSDate * _validFrom;
    NSDate * _validThrough;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property unsigned long long daysOfTheWeek;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSDateComponents *endTime;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (copy) NSDateComponents *startTime;
@property (readonly) Class superclass;
@property (copy) NSDate *validFrom;
@property (copy) NSDate *validThrough;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)daysOfTheWeek;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2 daysOfTheWeek:(unsigned long long)arg3 validFrom:(id)arg4 validThrough:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (void)setDaysOfTheWeek:(unsigned long long)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setValidFrom:(id)arg1;
- (void)setValidThrough:(id)arg1;
- (id)shortDescription;
- (id)startTime;
- (id)validFrom;
- (id)validThrough;

@end
