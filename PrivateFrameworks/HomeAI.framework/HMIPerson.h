
@interface HMIPerson : HMFObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSString * _name;
    NSSet * _personLinks;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSSet *personLinks;

+ (id)personFromHomePerson:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2;
- (id)initWithUUID:(id)arg1 name:(id)arg2 personLinks:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)personLinks;

@end
