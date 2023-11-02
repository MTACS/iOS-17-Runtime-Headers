
@interface BiometricKitAccessoryGroup : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    unsigned int  _type;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccessoryGroup:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (unsigned int)type;
- (id)uuid;

@end
