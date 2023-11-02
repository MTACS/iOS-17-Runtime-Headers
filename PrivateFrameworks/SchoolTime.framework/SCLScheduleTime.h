
@interface SCLScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _hour;
    unsigned long long  _minute;
}

@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;
@property (nonatomic, readonly) unsigned long long hour;
@property (nonatomic, readonly) unsigned long long minute;

+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponents;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hour;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (id)initWithScheduleTime:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)minute;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
