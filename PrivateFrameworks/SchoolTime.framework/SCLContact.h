
@interface SCLContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _contactIdentifier;
    unsigned long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContactIdentifier:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)type;
- (id)value;

@end
