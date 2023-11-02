
@interface GEOConfigExpiringKey : NSObject <NSSecureCoding> {
    NSString * _expireOSVersion;
    NSDate * _expireTime;
    NSString * _keyPath;
}

@property (nonatomic, readonly) NSString *expireOSVersion;
@property (nonatomic, readonly) NSDate *expireTime;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) NSString *keyPath;

+ (id)expiringKey:(id)arg1 withTime:(id)arg2 osVersion:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isExpiredRelativeTo:(id)arg1 osVersion:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)expireOSVersion;
- (id)expireTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 time:(id)arg2 osVersion:(id)arg3;
- (bool)isExpired;
- (id)keyPath;

@end
