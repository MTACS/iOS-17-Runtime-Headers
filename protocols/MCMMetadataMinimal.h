
@protocol MCMMetadataMinimal <NSObject, NSCopying>

@required

- (unsigned long long)containerClass;
- (MCMConcreteContainerIdentityForLibsystem *)containerIdentity;
- (MCMContainerPath *)containerPath;
- (struct container_object_s { }*)createLibsystemContainerWithError:(id*)arg1;
- (bool)existed;
- (NSString *)identifier;
- (id)metadataByChangingContainerIdentity:(MCMConcreteContainerIdentityForLibsystem *)arg1;
- (id)metadataByChangingContainerPath:(MCMContainerPath *)arg1;
- (id)metadataByChangingSchemaVersion:(NSNumber *)arg1;
- (id)metadataByChangingUUID:(NSUUID *)arg1;
- (id)metadataBySettingTransient:(bool)arg1;
- (unsigned int)platform;
- (NSNumber *)schemaVersion;
- (NSString *)shortDescription;
- (bool)transient;
- (MCMUserIdentity *)userIdentity;
- (NSUUID *)uuid;

@end
