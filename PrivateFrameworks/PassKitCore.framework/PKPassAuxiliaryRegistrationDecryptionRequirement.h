
@interface PKPassAuxiliaryRegistrationDecryptionRequirement : PKPassAuxiliaryRegistrationRequirement {
    unsigned long long  _decryptionSchemeVersion;
    NSString * _groupIdentifier;
    unsigned long long  _type;
    unsigned long long  _usage;
}

@property (nonatomic, readonly) unsigned long long decryptionSchemeVersion;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long usage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_mutableDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)decryptionSchemeVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassAuxiliaryRegistrationDecryptionRequirement:(id)arg1;
- (unsigned long long)role;
- (unsigned long long)type;
- (unsigned long long)usage;

@end
