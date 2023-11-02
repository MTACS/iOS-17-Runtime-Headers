
@interface CKVFilesystemBase : NSObject <NSCopying> {
    NSURL * _rootDirectory;
}

@property (nonatomic, readonly) NSURL *rootDirectory;

+ (id)baseURLWithTargetDirectoryPath:(id)arg1 relativeToDirectoryPath:(id)arg2;
+ (id)defaultBase;

- (void).cxx_destruct;
- (bool)_fileExistsAtURL:(id)arg1;
- (id)_resolveFileURLFromName:(id)arg1 directory:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)fileExistsWithName:(id)arg1 inDirectory:(id)arg2;
- (id)getOrCreateDirectoryWithRelativePath:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTargetDirectoryPath:(id)arg1 relativeToDirectoryPath:(id)arg2;
- (bool)isChildOfRootDirectory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFileManager:(id)arg1;
- (id)readDictionaryFromPlistFileWithName:(id)arg1 inDirectory:(id)arg2;
- (id)readFileWithName:(id)arg1 objectClass:(Class)arg2 inDirectory:(id)arg3;
- (bool)removeAllContents;
- (bool)removeItemAtURL:(id)arg1;
- (id)rootDirectory;
- (bool)writeDictionary:(id)arg1 toPlistFileWithName:(id)arg2 inDirectory:(id)arg3;
- (bool)writeObject:(id)arg1 toFileWithName:(id)arg2 inDirectory:(id)arg3;

@end
