
@interface BRKDataCollectionBundle : NSObject {
    NSString * _basePath;
    NSString * _folderName;
    bool  _isPackaged;
    NSMutableSet * _manifest;
    BRKSettings * _settings;
    NSMutableDictionary * _writers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _writersLock;
}

@property (nonatomic, readonly) NSArray *addedFiles;
@property (nonatomic, readonly) NSString *basePath;
@property (nonatomic, readonly) NSString *folderName;
@property (nonatomic, readonly) bool isPackaged;

+ (id)defaultLogDirectory;

- (void).cxx_destruct;
- (void)_writeData:(id)arg1 toFile:(id)arg2 updateManifest:(bool)arg3;
- (id)_writerForClass:(Class)arg1 file:(id)arg2 configuration:(id /* block */)arg3;
- (id)accelerationWriterForFile:(id)arg1;
- (id)accelerationWriterForFile:(id)arg1 valueCount:(unsigned long long)arg2;
- (id)addedFiles;
- (id)audioWriterForFile:(id)arg1;
- (id)basePath;
- (void)closeWriterForFile:(id)arg1;
- (id)folderName;
- (id)initWithFolderNamed:(id)arg1;
- (bool)isPackaged;
- (id)logWriterForFile:(id)arg1;
- (bool)packageBundleToPath:(id*)arg1 filePrioritization:(id)arg2;
- (bool)removeBundle;
- (void)writeData:(id)arg1 toFile:(id)arg2;
- (void)writeJSON:(id)arg1 toFile:(id)arg2;

@end
