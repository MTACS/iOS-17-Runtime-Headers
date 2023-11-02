
@protocol TRIPaths

@required

+ (NSString *)resolveHardCodedPath:(NSString *)arg1;

- (NSString *)assetStore;
- (NSString *)assetStoreUsingGlobal:(bool)arg1;
- (TRIAppContainer *)container;
- (NSString *)containerDir;
- (NSString *)databaseDir;
- (NSString *)decryptionKeyDirForAppleInternal:(bool)arg1;
- (NSString *)deviceIdentifierFile;
- (NSString *)experimentsDir;
- (NSString *)localTempDir;
- (NSString *)logDir;
- (NSString *)namespaceDescriptorsBMLTDir;
- (NSString *)namespaceDescriptorsDefaultDir;
- (NSString *)namespaceDescriptorsDevOverrideDir;
- (NSString *)namespaceDescriptorsDir;
- (NSString *)namespaceDescriptorsDirUsingGlobal:(bool)arg1;
- (NSString *)namespaceDescriptorsExperimentDir;
- (NSString *)namespaceDescriptorsPathForLayer:(unsigned long long)arg1;
- (NSString *)namespaceDescriptorsRolloutDir;
- (<TRIPaths> *)pathsForContainer:(TRIAppContainer *)arg1 asClientProcess:(bool)arg2;
- (NSString *)subjectDataFile;
- (NSString *)systemDataFile;
- (NSString *)treatmentsDir;
- (NSString *)treatmentsDirUsingGlobal:(bool)arg1;
- (NSString *)trialRootDir;
- (NSString *)trialRootDirUsingGlobal:(bool)arg1;
- (NSString *)trialVolume;
- (bool)validateWithError:(id*)arg1;
- (NSString *)volumeForDirectory:(NSString *)arg1;

@end
