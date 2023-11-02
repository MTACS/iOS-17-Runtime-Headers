
@protocol MXStorageUtilProtocol

@required

- (NSData *)archivedDataWithObject:(id)arg1 error:(id*)arg2;
- (NSDictionary *)attributesOfItemAtPath:(NSString *)arg1 error:(id*)arg2;
- (bool)createDirectory:(NSString *)arg1 error:(id*)arg2;
- (NSData *)dataFromPath:(NSString *)arg1;
- (NSArray *)filesFromDirectory:(NSString *)arg1 error:(id*)arg2;
- (bool)isDataExistAsDirectoryForPath:(NSString *)arg1;
- (bool)removeExistingFilesFromDirectory:(NSString *)arg1;
- (void)removeFile:(NSString *)arg1 error:(id*)arg2;
- (bool)removeFiles:(NSArray *)arg1 fromDirectory:(NSString *)arg2 error:(id*)arg3;
- (void)removeFiles:(NSArray *)arg1 withFilenameContainsSubstring:(NSString *)arg2 fromDirectory:(NSString *)arg3 error:(id*)arg4;
- (bool)saveData:(NSData *)arg1 withFilePath:(NSString *)arg2;
- (void)setAuthProtectionForPath:(NSString *)arg1 fromAttributes:(NSDictionary *)arg2;
- (id)unarchivedObjectOfClass:(Class)arg1 fromData:(NSData *)arg2 error:(id*)arg3;

@end
