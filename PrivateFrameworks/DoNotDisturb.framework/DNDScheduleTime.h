
@interface DNDScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _hour;
    unsigned long long  _minute;
}

@property (nonatomic, readonly) unsigned long long hour;
@property (nonatomic, readonly) unsigned long long minute;

+ (id)defaultEndTime;
+ (id)defaultStartTime;
+ (bool)supportsSecureCoding;

- (id)_initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (id)_initWithTime:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponents;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hour;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)minute;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
