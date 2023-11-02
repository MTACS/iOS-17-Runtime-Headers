
@interface CXHandle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _siriDisplayName;
    long long  _type;
    NSString * _value;
}

@property (nonatomic, retain) NSString *siriDisplayName;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *value;

+ (id)stringForType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)initWithType:(long long)arg1 value:(id)arg2 siriDisplayName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandle:(id)arg1;
- (void)setSiriDisplayName:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)siriDisplayName;
- (long long)type;
- (id)value;

@end
