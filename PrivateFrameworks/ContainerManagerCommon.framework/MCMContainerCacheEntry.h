
@interface MCMContainerCacheEntry : NSObject <MCMContainerCacheControlsXattrs, MCMContainerCacheEntry, MCMContainerCacheEntry_Internal> {
    <MCMContainerCacheUpdatable> * _cache;
    MCMContainerPath * _containerPath;
    bool  _corrupt;
    MCMFSNode * _fsNode;
    NSString * _identifier;
    <MCMMetadata> * _metadata;
    NSNumber * _schemaVersion;
    MCMUserIdentityCache * _userIdentityCache;
    NSUUID * _uuid;
}

@property (nonatomic) <MCMContainerCacheUpdatable> *cache;
@property (nonatomic, retain) MCMContainerPath *containerPath;
@property (nonatomic) bool corrupt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MCMFSNode *fsNode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) <MCMMetadata> *metadata;
@property (nonatomic, retain) NSNumber *schemaVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)UUIDForFileHandle:(id)arg1;
+ (id)UUIDForURL:(id)arg1;
+ (id)_fileHandleForURL:(id)arg1 writeable:(bool)arg2;
+ (void)clearAttributesForFileHandle:(id)arg1;
+ (void)clearAttributesForURL:(id)arg1;
+ (id)identifierForFileHandle:(id)arg1;
+ (id)identifierForURL:(id)arg1;
+ (id)schemaVersionForFileHandle:(id)arg1;
+ (id)schemaVersionForURL:(id)arg1;
+ (void)setIdentifier:(id)arg1 forFileHandle:(id)arg2;
+ (void)setIdentifier:(id)arg1 forURL:(id)arg2;
+ (void)setSchemaVersion:(id)arg1 forFileHandle:(id)arg2;
+ (void)setSchemaVersion:(id)arg1 forURL:(id)arg2;
+ (void)setUUID:(id)arg1 forFileHandle:(id)arg2;
+ (void)setUUID:(id)arg1 forURL:(id)arg2;

- (void).cxx_destruct;
- (id)_fabricateMetadataForContainerPath:(id)arg1 identifier:(id)arg2 uuid:(id)arg3 schemaVersion:(id)arg4 userIdentityCache:(id)arg5;
- (id)_findUserManagedAssetsDirectoryAtContainerRootURL:(id)arg1;
- (id)_identifierForContainerPath:(id)arg1;
- (id)_metadataFromContainerPath:(id)arg1 identifier:(id)arg2 uuid:(id)arg3 schemaVersion:(id)arg4 userIdentityCache:(id)arg5;
- (id)_readMetadataForIdentifier:(id)arg1 containerPath:(id)arg2 error:(id*)arg3;
- (id)cache;
- (id)containerIdentity;
- (id)containerPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)corrupt;
- (id)description;
- (id)fsNode;
- (id)fullDescription;
- (unsigned long long)hash;
- (id)identifier;
- (id)initFromContainerPath:(id)arg1 identifier:(id)arg2 uuid:(id)arg3 schemaVersion:(id)arg4 userIdentityCache:(id)arg5;
- (id)initWithIdentifier:(id)arg1 containerPath:(id)arg2 schemaVersion:(id)arg3 uuid:(id)arg4 metadata:(id)arg5 userIdentityCache:(id)arg6;
- (id)initWithMetadata:(id)arg1 userIdentityCache:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainerCacheEntry:(id)arg1;
- (id)metadata;
- (id)metadataMinimal;
- (id)metadataWithError:(id*)arg1;
- (id)schemaVersion;
- (void)setCache:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setCorrupt:(bool)arg1;
- (void)setFsNode:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSchemaVersion:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setXattrs;
- (void)setXattrsWithFileHandle:(id)arg1;
- (id)userIdentityCache;
- (id)uuid;
- (bool)verify;

@end
