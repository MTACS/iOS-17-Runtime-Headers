
@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity * _serviceIdentity;
}

+ (bool)shouldManageExtensionWithExtensionPoint:(id)arg1;

- (void).cxx_destruct;
- (bool)_matchesIdentity:(id)arg1;
- (id)copyWithAuid:(unsigned int)arg1;
- (unsigned char)defaultManageFlags;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hostIdentifier;
- (id)hostIdentity;
- (bool)inheritsCoalitionBand;
- (id)initWithDecodeFromJob:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isAnonymous;
- (bool)isEqualToIdentity:(id)arg1;
- (bool)isExtension;
- (bool)isExternal;
- (bool)isXPCService;
- (bool)matchesRecoveredIdentity:(id)arg1;
- (id)persona;
- (id)personaString;
- (bool)supportsLaunchingDirectly;
- (id)uuid;
- (id)validationToken;
- (id)xpcServiceIdentifier;

@end
