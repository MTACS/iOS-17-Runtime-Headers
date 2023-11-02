
@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {
    NSString * _embeddedApplicationIdentifier;
    NSString * _personaString;
}

- (void).cxx_destruct;
- (bool)_matchesIdentity:(id)arg1;
- (id)copyWithAuid:(unsigned int)arg1;
- (id)copyWithPersonaString:(id)arg1;
- (id)debugDescription;
- (unsigned char)defaultManageFlags;
- (id)embeddedApplicationIdentifier;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isAnonymous;
- (bool)isApplication;
- (bool)isEmbeddedApplication;
- (bool)isEqual:(id)arg1;
- (id)personaString;
- (bool)supportsLaunchingDirectly;
- (bool)treatedAsAnAppByFrontBoard:(id*)arg1;

@end
