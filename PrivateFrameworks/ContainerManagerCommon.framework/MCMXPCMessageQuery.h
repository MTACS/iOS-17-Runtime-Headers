
@interface MCMXPCMessageQuery : MCMXPCMessageBase <MCMParametersQuery> {
    unsigned long long  _containerClass;
    bool  _createIfNecessary;
    bool  _expectSingleResult;
    unsigned long long  _explicitFlags;
    bool  _fuzzyMatchInternalUUID;
    bool  _fuzzyMatchTransient;
    NSSet * _groupIdentifiers;
    NSSet * _identifiers;
    bool  _includeInfoInResult;
    bool  _includePathInResult;
    bool  _includeUnowned;
    bool  _includeUserManagedAssetsRelPath;
    NSUUID * _internalUUID;
    bool  _issueSandboxExtensions;
    bool  _legacyExtensionPolicy;
    bool  _legacyPersonaPolicy;
    unsigned long long  _privateFlags;
    bool  _transient;
    unsigned int  _uid;
    MCMUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) bool createIfNecessary;
@property (nonatomic, readonly) bool expectSingleResult;
@property (nonatomic, readonly) unsigned long long explicitFlags;
@property (nonatomic, readonly) bool fuzzyMatchInternalUUID;
@property (nonatomic, readonly) bool fuzzyMatchTransient;
@property (nonatomic, readonly) NSSet *groupIdentifiers;
@property (nonatomic, readonly) NSSet *identifiers;
@property (nonatomic, readonly) bool includeInfoInResult;
@property (nonatomic, readonly) bool includePathInResult;
@property (nonatomic, readonly) bool includeUnowned;
@property (nonatomic, readonly) bool includeUserManagedAssetsRelPath;
@property (nonatomic, readonly) NSUUID *internalUUID;
@property (nonatomic, readonly) bool issueSandboxExtensions;
@property (nonatomic, readonly) bool legacyExtensionPolicy;
@property (nonatomic, readonly) bool legacyPersonaPolicy;
@property (nonatomic, readonly) unsigned long long privateFlags;
@property (nonatomic, readonly) bool transient;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

- (void).cxx_destruct;
- (unsigned long long)containerClass;
- (bool)createIfNecessary;
- (unsigned int)disposition;
- (bool)expectSingleResult;
- (unsigned long long)explicitFlags;
- (bool)fuzzyMatchInternalUUID;
- (bool)fuzzyMatchTransient;
- (id)groupIdentifiers;
- (id)identifiers;
- (bool)includeInfoInResult;
- (bool)includePathInResult;
- (bool)includeUnowned;
- (bool)includeUserManagedAssetsRelPath;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (id)internalUUID;
- (bool)issueSandboxExtensions;
- (bool)legacyExtensionPolicy;
- (bool)legacyPersonaPolicy;
- (unsigned long long)privateFlags;
- (bool)transient;
- (unsigned int)uid;
- (id)userIdentity;

@end
