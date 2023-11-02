
@interface IXApplicationIdentity : MIAppIdentity <NSCopying, NSSecureCoding> {
    bool  _isPersonalPersonaPlaceholder;
}

@property (nonatomic) bool isPersonalPersonaPlaceholder;
@property (nonatomic, readonly) MIAppIdentity *miAppIdentity;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)identitiesForBundleIdentifiers:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)canonicalSerializationForPlistKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 personaUniqueString:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlistKeySerialization:(id)arg1;
- (bool)isPersonalPersonaPlaceholder;
- (id)miAppIdentity;
- (id)possibleSerializationsForPlistKey;
- (bool)resolvePersonaRespectingSandboxingWithError:(id*)arg1;
- (id)resolvePersonaUsingModuleSpecificLogicWithError:(id*)arg1;
- (bool)resolvePersonaWithError:(id*)arg1;
- (void)setIsPersonalPersonaPlaceholder:(bool)arg1;
- (id)uniqueIdentifier;

@end
