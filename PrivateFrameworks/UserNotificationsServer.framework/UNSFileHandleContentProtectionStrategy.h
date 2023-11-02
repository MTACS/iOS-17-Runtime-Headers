
@interface UNSFileHandleContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {
    bool  _excludeFromBackup;
    NSString * _fileProtectionType;
    NSMutableDictionary * _keyedFileHandles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_excludeItemFromBackupAtPath:(id)arg1;
- (id)_fileHandleForCreatingStoreAtPath:(id)arg1 protectionType:(id)arg2;
- (bool)_isFileProtectionTypeSupported:(id)arg1;
- (id)allDataAtPath:(id)arg1;
- (id)allPaths;
- (id)dataAtPath:(id)arg1;
- (bool)dataIsAvailableAtPath:(id)arg1;
- (id)initWithFileProtectionType:(id)arg1 excludeFromBackup:(bool)arg2;
- (void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;
- (bool)removeAllDataAtPath:(id)arg1 error:(id*)arg2;
- (bool)removeItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3;

@end
