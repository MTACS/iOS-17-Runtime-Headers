
@interface CWFActivity : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSString * _reason;
    unsigned long long  _timeout;
    long long  _type;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) long long type;

+ (id)activityWithType:(long long)arg1 reason:(id)arg2;
+ (id)activityWithType:(long long)arg1 reason:(id)arg2 UUID:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActivity:(id)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUUID:(id)arg1;
- (unsigned long long)timeout;
- (long long)type;

@end
