
@interface SPHandle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _destination;
    long long  _type;
}

@property (nonatomic, copy) NSString *destination;
@property (nonatomic) long long type;

+ (id)handleWithEmailAddress:(id)arg1;
+ (id)handleWithPhoneNumber:(id)arg1;
+ (id)handleWithString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 destination:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
