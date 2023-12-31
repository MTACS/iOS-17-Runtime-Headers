
@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding> {
    NSString * _emailAddress;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *name;

+ (id)emailToNameDictionaryWithNamedEmailAddresses:(id)arg1;
+ (id)namedEmailAddressWithCSPerson:(id)arg1;
+ (id)namedEmailAddressWithFieldValue:(id)arg1;
+ (id)namedEmailAddressesWithEmailToNameDictionary:(id)arg1;
+ (id)namedEmailAddressesWithFieldValues:(id)arg1;
+ (id)serializeAll:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asCSPerson;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2;
- (id)initWithNamedHandle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEmailAddress:(id)arg1;
- (id)name;
- (id)serialized;

@end
