
@interface PRIncomingPosterConfiguration : NSObject <PRPosterContents> {
    NSDictionary * _attributes;
    PRPosterConfiguredProperties * _configuredProperties;
    NSUUID * _destinationUUID;
    unsigned long long  _incomingPosterType;
    NSUUID * _originalPosterUUID;
    NSUUID * _parentPosterUUID;
    PRSPosterPath * _path;
    PRSServerPosterIdentity * _sourceIdentity;
    NSMutableSet * _temporaryState;
}

@property (nonatomic, readonly, copy) NSURL *assetDirectory;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) PRPosterConfiguredProperties *configuredProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *descriptorIdentifier;
@property (nonatomic, readonly) NSUUID *destinationUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long incomingPosterType;
@property (nonatomic, readonly) NSUUID *originalPosterUUID;
@property (nonatomic, readonly) NSUUID *parentPosterUUID;
@property (nonatomic, readonly) PRSPosterPath *path;
@property (nonatomic, readonly, copy) NSString *role;
@property (nonatomic, readonly) PRSServerPosterIdentity *sourceIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetDirectory;
- (id)attributes;
- (id)configuredProperties;
- (void)dealloc;
- (id)description;
- (id)descriptorIdentifier;
- (id)destinationUUID;
- (unsigned long long)hash;
- (unsigned long long)incomingPosterType;
- (id)initWithConfigurationToDuplicate:(id)arg1 destinationPosterUUID:(id)arg2;
- (id)initWithNewPath:(id)arg1 destinationPosterUUID:(id)arg2 parentPosterUUID:(id)arg3 sourceIdentity:(id)arg4 configuredProperties:(id)arg5 attributes:(id)arg6;
- (id)initWithNewPath:(id)arg1 destinationPosterUUID:(id)arg2 sourceIdentity:(id)arg3 configuredProperties:(id)arg4 attributes:(id)arg5;
- (id)initWithType:(unsigned long long)arg1 path:(id)arg2 sourceIdentity:(id)arg3 configuredProperties:(id)arg4 attributes:(id)arg5;
- (id)initWithUpdatedPath:(id)arg1 updatedPosterUUID:(id)arg2 parentPosterUUID:(id)arg3 sourceIdentity:(id)arg4 configuredProperties:(id)arg5 attributes:(id)arg6;
- (id)initWithUpdatedPath:(id)arg1 updatedPosterUUID:(id)arg2 sourceIdentity:(id)arg3 configuredProperties:(id)arg4 attributes:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)loadUserInfoWithError:(out id*)arg1;
- (id)objectForUserInfoKey:(id)arg1;
- (id)originalPosterUUID;
- (id)parentPosterUUID;
- (id)path;
- (id)role;
- (id)sourceIdentity;
- (void)trackTemporaryState:(id)arg1;

@end
