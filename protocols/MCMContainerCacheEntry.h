
@protocol MCMContainerCacheEntry <NSObject, NSCopying>

@required

- (MCMConcreteContainerIdentityForLibsystem *)containerIdentity;
- (MCMContainerPath *)containerPath;
- (bool)corrupt;
- (NSString *)identifier;
- (id)initFromContainerPath:(MCMContainerPath *)arg1 identifier:(NSString *)arg2 uuid:(NSUUID *)arg3 schemaVersion:(NSNumber *)arg4 userIdentityCache:(MCMUserIdentityCache *)arg5;
- (id)initWithIdentifier:(NSString *)arg1 containerPath:(MCMContainerPath *)arg2 schemaVersion:(NSNumber *)arg3 uuid:(NSUUID *)arg4 metadata:(id <MCMMetadata>)arg5 userIdentityCache:(MCMUserIdentityCache *)arg6;
- (id)initWithMetadata:(id <MCMMetadataMinimal>)arg1 userIdentityCache:(MCMUserIdentityCache *)arg2;
- (<MCMMetadataMinimal> *)metadataMinimal;
- (<MCMMetadata> *)metadataWithError:(id*)arg1;
- (NSNumber *)schemaVersion;
- (void)setCorrupt:(bool)arg1;
- (NSUUID *)uuid;
- (bool)verify;

@end
