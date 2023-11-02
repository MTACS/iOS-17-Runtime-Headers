
@interface MXStorageUtil : NSObject <MXStorageUtilProtocol> {
    NSFileManager * _fileManager;
    NSObject<OS_os_log> * _logHandle;
}

@property (retain) NSFileManager *fileManager;
@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (id)_filesFromDirectory:(id)arg1 error:(id*)arg2;
- (bool)_removeFile:(id)arg1 error:(id*)arg2;
- (bool)_removeFiles:(id)arg1 fromDirectory:(id)arg2 error:(id*)arg3;
- (id)archivedDataWithObject:(id)arg1 error:(id*)arg2;
- (id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)createDirectory:(id)arg1 error:(id*)arg2;
- (id)dataFromPath:(id)arg1;
- (id)fileManager;
- (id)filesFromDirectory:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)isDataExistAsDirectoryForPath:(id)arg1;
- (id)logHandle;
- (bool)removeExistingFilesFromDirectory:(id)arg1;
- (void)removeFile:(id)arg1 error:(id*)arg2;
- (bool)removeFiles:(id)arg1 fromDirectory:(id)arg2 error:(id*)arg3;
- (void)removeFiles:(id)arg1 withFilenameContainsSubstring:(id)arg2 fromDirectory:(id)arg3 error:(id*)arg4;
- (bool)saveData:(id)arg1 withFilePath:(id)arg2;
- (void)setAuthProtectionForPath:(id)arg1 fromAttributes:(id)arg2;
- (void)setFileManager:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;

@end
