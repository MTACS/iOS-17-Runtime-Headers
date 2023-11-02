
@interface CLFindMyAccessoryUserStats : NSObject <NSCopying, NSSecureCoding> {
    long long  _crashCount;
    double  _multiTime;
    double  _nearOwnerTime;
    long long  _overflowFlag;
    long long  _rangingCount;
    double  _rangingTime;
    long long  _soundCount;
    double  _soundTime;
    double  _wildTime;
}

@property (readonly) long long crashCount;
@property (readonly) double multiTime;
@property (readonly) double nearOwnerTime;
@property (readonly) long long overflowFlag;
@property (readonly) long long rangingCount;
@property (readonly) double rangingTime;
@property (readonly) long long soundCount;
@property (readonly) double soundTime;
@property (readonly) double wildTime;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)crashCount;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOverflowFlag:(long long)arg1 crashCount:(long long)arg2 multiTime:(double)arg3 nearOwnerTime:(double)arg4 wildTime:(double)arg5 soundCount:(long long)arg6 soundTime:(double)arg7 rangingCount:(long long)arg8 rangingTime:(double)arg9;
- (id)initWithPayload:(id)arg1;
- (double)multiTime;
- (double)nearOwnerTime;
- (long long)overflowFlag;
- (long long)rangingCount;
- (double)rangingTime;
- (long long)soundCount;
- (double)soundTime;
- (double)wildTime;

@end
