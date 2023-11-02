
@interface MCMMetadata : MCMMetadataMinimal <MCMMetadata> {
    int  _dataProtectionClass;
    NSURL * _fileURL;
    MCMFSNode * _fsNode;
    NSDictionary * _info;
    NSString * _userManagedAssetsDirName;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) MCMConcreteContainerIdentityForLibsystem *containerIdentity;
@property (nonatomic, readonly) MCMContainerPath *containerPath;
@property (nonatomic, readonly) int dataProtectionClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool existed;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) MCMFSNode *fsNode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) NSNumber *schemaVersion;
@property (nonatomic, readonly) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool transient;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;
@property (nonatomic, readonly) NSString *userManagedAssetsDirName;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_clearPersistedStatus;
- (bool)_initFromMetadataInDictionary:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 fsNode:(id)arg5 fileURL:(id)arg6 userIdentityCache:(id)arg7 error:(id*)arg8;
- (bool)_persisted;
- (bool)_writeFileURL:(id)arg1 dictionary:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct container_object_s { }*)createLibsystemContainerWithError:(id*)arg1;
- (int)dataProtectionClass;
- (id)debugDescription;
- (id)description;
- (id)fileURL;
- (id)fsNode;
- (id)info;
- (id)initByReadingAndValidatingMetadataAtFileURL:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 userIdentityCache:(id)arg5 error:(id*)arg6;
- (id)initWithContainerIdentity:(id)arg1 containerPath:(id)arg2 schemaVersion:(id)arg3 userIdentityCache:(id)arg4;
- (id)initWithContainerIdentity:(id)arg1 info:(id)arg2 containerPath:(id)arg3 userManagedAssetsDirName:(id)arg4 schemaVersion:(id)arg5 dataProtectionClass:(int)arg6 fsNode:(id)arg7 userIdentityCache:(id)arg8;
- (id)initWithContainerIdentity:(id)arg1 info:(id)arg2 containerPath:(id)arg3 userManagedAssetsDirName:(id)arg4 schemaVersion:(id)arg5 dataProtectionClass:(int)arg6 userIdentityCache:(id)arg7;
- (id)metadataByChangingDataProtectionClass:(int)arg1;
- (id)metadataBySettingInfoValue:(id)arg1 forKey:(id)arg2;
- (id)metadataBySettingUserManagedAssetsDirName:(id)arg1;
- (id)shortDescription;
- (id)userManagedAssetsDirName;
- (bool)verifyWithError:(id*)arg1;
- (bool)writeMetadataToDiskWithError:(id*)arg1;
- (bool)writeMetadataToFileURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
