
@interface PKPassAuxiliaryRegistrationSignatureRequirement : PKPassAuxiliaryRegistrationRequirement {
    unsigned long long  _signatureSchemeVersion;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long signatureSchemeVersion;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (id)_mutableDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassAuxiliaryRegistrationSignatureRequirement:(id)arg1;
- (unsigned long long)role;
- (unsigned long long)signatureSchemeVersion;
- (unsigned long long)type;

@end
