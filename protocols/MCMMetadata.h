
@protocol MCMMetadata <MCMMetadataMinimal>

@required

- (int)dataProtectionClass;
- (NSURL *)fileURL;
- (MCMFSNode *)fsNode;
- (NSDictionary *)info;
- (id)metadataByChangingDataProtectionClass:(int)arg1;
- (id)metadataBySettingInfoValue:(id)arg1 forKey:(NSString *)arg2;
- (id)metadataBySettingUserManagedAssetsDirName:(NSString *)arg1;
- (NSString *)userManagedAssetsDirName;
- (bool)verifyWithError:(id*)arg1;
- (bool)writeMetadataToDiskWithError:(id*)arg1;
- (bool)writeMetadataToFileURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
