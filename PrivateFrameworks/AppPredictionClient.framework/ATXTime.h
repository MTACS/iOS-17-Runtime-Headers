
@interface ATXTime : NSObject <NSCopying, NSSecureCoding> {
    long long  _hour;
    long long  _minute;
}

@property (nonatomic, readonly) long long hour;
@property (nonatomic, readonly) long long minute;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)hour;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHour:(long long)arg1 minute:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXTime:(id)arg1;
- (long long)minute;

@end
