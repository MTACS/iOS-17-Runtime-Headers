
@interface SFSuggestedUser : NSObject <NSCopying, NSSecureCoding> {
    long long  _type;
    long long  _usageFrequency;
    NSString * _value;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic) long long usageFrequency;
@property (nonatomic, readonly, copy) NSString *value;

+ (id)suggestedUserWithValue:(id)arg1 type:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setUsageFrequency:(long long)arg1;
- (long long)type;
- (long long)usageFrequency;
- (id)value;

@end
