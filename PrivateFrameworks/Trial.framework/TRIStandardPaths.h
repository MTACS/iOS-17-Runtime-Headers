
@interface TRIStandardPaths : NSObject <TRIPaths> {
    TRIAppContainer * _container;
    NSString * _containerPath;
    bool  _isClient;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _loggedRootDir;
    unsigned int  _schemaVersion;
}

+ (unsigned int)currentSchemaVersion;
+ (unsigned int)legacySchemaVersion;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)resolveHardCodedPath:(id)arg1;
+ (id)schemaVersionFile;
+ (id)sharedSystemPaths;

- (void).cxx_destruct;
- (id)_pathErrorWithDescription:(id)arg1;
- (id)_realHomeDirectory;
- (id)_trialSystemRootDir;
- (id)_trialSystemRootDirWithError:(id*)arg1;
- (id)_versionSpecificStorageDir;
- (id)_versionSpecificStorageDirUsingGlobal:(bool)arg1;
- (id)_versionSpecificSystemStorageDir;
- (id)assetStore;
- (id)assetStoreUsingGlobal:(bool)arg1;
- (id)container;
- (id)containerDir;
- (id)databaseDir;
- (id)decryptionKeyDirForAppleInternal:(bool)arg1;
- (id)deviceIdentifierFile;
- (id)experimentsDir;
- (id)init;
- (id)initWithCurrentSchemaVersion;
- (id)initWithSchemaVersion:(unsigned int)arg1;
- (id)initWithSchemaVersion:(unsigned int)arg1 container:(id)arg2 asClientProcess:(bool)arg3;
- (id)localTempDir;
- (id)logDir;
- (id)namespaceDescriptorsBMLTDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)namespaceDescriptorsDir;
- (id)namespaceDescriptorsDirUsingGlobal:(bool)arg1;
- (id)namespaceDescriptorsExperimentDir;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)arg1;
- (id)namespaceDescriptorsRolloutDir;
- (id)pathsForContainer:(id)arg1 asClientProcess:(bool)arg2;
- (id)subjectDataFile;
- (id)systemDataFile;
- (id)treatmentsDir;
- (id)treatmentsDirUsingGlobal:(bool)arg1;
- (id)trialRootDir;
- (id)trialRootDirUsingGlobal:(bool)arg1;
- (id)trialRootDirWithError:(id*)arg1;
- (id)trialVolume;
- (bool)validateWithError:(id*)arg1;
- (id)volumeForDirectory:(id)arg1;

@end
