
@interface BiometricKitAccessory : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _flags;
    BiometricKitAccessoryGroup * _group;
    NSString * _name;
    unsigned int  _type;
    NSUUID * _uuid;
}

@property (nonatomic) unsigned int flags;
@property (nonatomic, retain) BiometricKitAccessoryGroup *group;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)group;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccessory:(id)arg1;
- (id)name;
- (void)setFlags:(unsigned int)arg1;
- (void)setGroup:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (unsigned int)type;
- (id)uuid;

@end
