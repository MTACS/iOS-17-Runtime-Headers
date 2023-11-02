
@interface MCMCommandQuery : MCMCommand <MCMParametersQuery> {
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
    unsigned int  _platform;
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
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) unsigned long long privateFlags;
@property (nonatomic, readonly) bool transient;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)_containerIdentifiersIncludingUnownedForContainerClass:(unsigned long long)arg1 canAccessAllContainers:(bool*)arg2 error:(id*)arg3;
- (id)_executeQueryForContainerIdentity:(id)arg1 error:(id*)arg2;
- (bool)_executeQueryPlan:(id)arg1 resultContainers:(id)arg2 error:(id*)arg3;
- (id)_queryPlanWithIdentifiers:(id)arg1 isGroupClass:(bool)arg2 clientIdentity:(id)arg3 error:(id*)arg4;
- (id)_setOfUserIdentities;
- (id)_setOfUserIdentitiesForIdentifiers:(id)arg1 isGroupClass:(bool)arg2;
- (unsigned long long)containerClass;
- (bool)createIfNecessary;
- (void)execute;
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
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)initWithPlatform:(unsigned int)arg1 explicitFlags:(unsigned long long)arg2 identifiers:(id)arg3 containerClass:(unsigned long long)arg4 groupIdentifiers:(id)arg5 internalUUID:(id)arg6 createIfNecessary:(bool)arg7 includeInfoInResult:(bool)arg8 includePathInResult:(bool)arg9 issueSandboxExtensions:(bool)arg10 UID:(unsigned int)arg11 userIdentity:(id)arg12 transient:(bool)arg13 fuzzyMatchTransient:(bool)arg14 fuzzyMatchInternalUUID:(bool)arg15 includeUnowned:(bool)arg16 expectSingleResult:(bool)arg17 legacyPersonaPolicy:(bool)arg18 includeUserManagedAssetsRelPath:(bool)arg19 context:(id)arg20 resultPromise:(id)arg21;
- (id)internalUUID;
- (bool)issueSandboxExtensions;
- (bool)legacyExtensionPolicy;
- (bool)legacyPersonaPolicy;
- (unsigned int)platform;
- (bool)preflightClientAllowed;
- (unsigned long long)privateFlags;
- (bool)transient;
- (unsigned int)uid;
- (id)userIdentity;

@end
