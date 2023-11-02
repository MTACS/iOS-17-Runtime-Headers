
@protocol MCMParametersQuery

@required

- (unsigned long long)containerClass;
- (bool)createIfNecessary;
- (bool)expectSingleResult;
- (unsigned long long)explicitFlags;
- (bool)fuzzyMatchInternalUUID;
- (bool)fuzzyMatchTransient;
- (NSSet *)groupIdentifiers;
- (NSSet *)identifiers;
- (bool)includeInfoInResult;
- (bool)includePathInResult;
- (bool)includeUnowned;
- (bool)includeUserManagedAssetsRelPath;
- (NSUUID *)internalUUID;
- (bool)issueSandboxExtensions;
- (bool)legacyExtensionPolicy;
- (bool)legacyPersonaPolicy;
- (unsigned long long)privateFlags;
- (bool)transient;
- (unsigned int)uid;
- (MCMUserIdentity *)userIdentity;

@end
