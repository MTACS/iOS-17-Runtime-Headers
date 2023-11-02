
@interface PKPassAuxiliaryRegistrationRequirement : NSObject <NSCopying, NSSecureCoding> {
    bool  _canLocallyInvalidateRegistrationState;
    NSString * _identifier;
    long long  _numberOfKeys;
    long long  _registrationBackoffCounter;
}

@property (nonatomic, readonly) bool canLocallyInvalidateRegistrationState;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) long long numberOfKeys;
@property (nonatomic) long long registrationBackoffCounter;
@property (nonatomic, readonly) unsigned long long role;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_copyInto:(id)arg1;
- (id)_mutableDictionaryRepresentation;
- (bool)canLocallyInvalidateRegistrationState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassAuxiliaryRegistrationRequirement:(id)arg1;
- (long long)numberOfKeys;
- (long long)registrationBackoffCounter;
- (unsigned long long)role;
- (void)setIdentifier:(id)arg1;
- (void)setRegistrationBackoffCounter:(long long)arg1;

@end
