
@interface MCMMetadataMinimal : NSObject <MCMMetadataMinimal> {
    MCMConcreteContainerIdentityForLibsystem * _containerIdentity;
    MCMContainerPath * _containerPath;
    NSNumber * _schemaVersion;
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) MCMConcreteContainerIdentityForLibsystem *containerIdentity;
@property (nonatomic, readonly) MCMContainerPath *containerPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool existed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) NSNumber *schemaVersion;
@property (nonatomic, readonly) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool transient;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_clearPersistedStatus;
- (bool)_initFromMetadataInDictionary:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 fsNode:(id)arg5 fileURL:(id)arg6 userIdentityCache:(id)arg7 error:(id*)arg8;
- (bool)_persisted;
- (unsigned long long)containerClass;
- (id)containerIdentity;
- (id)containerPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct container_object_s { }*)createLibsystemContainerWithError:(id*)arg1;
- (id)debugDescription;
- (id)description;
- (bool)existed;
- (id)identifier;
- (id)initByReadingAndValidatingMetadataAtContainerPath:(id)arg1 userIdentity:(id)arg2 containerClass:(unsigned long long)arg3 userIdentityCache:(id)arg4 error:(id*)arg5;
- (id)initByReadingAndValidatingMetadataAtFileURL:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 userIdentityCache:(id)arg5 error:(id*)arg6;
- (id)initWithContainerIdentity:(id)arg1 containerPath:(id)arg2 schemaVersion:(id)arg3 userIdentityCache:(id)arg4;
- (id)metadataByChangingContainerIdentity:(id)arg1;
- (id)metadataByChangingContainerPath:(id)arg1;
- (id)metadataByChangingSchemaVersion:(id)arg1;
- (id)metadataByChangingUUID:(id)arg1;
- (id)metadataBySettingTransient:(bool)arg1;
- (unsigned int)platform;
- (id)schemaVersion;
- (id)shortDescription;
- (bool)transient;
- (id)userIdentity;
- (id)userIdentityCache;
- (id)uuid;

@end
