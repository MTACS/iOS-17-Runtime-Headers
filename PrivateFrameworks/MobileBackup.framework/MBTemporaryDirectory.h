
@interface MBTemporaryDirectory : NSObject {
    bool  _disposed;
    char * _fsRepPath;
    NSString * _identifier;
    NSString * _path;
}

@property (nonatomic, readonly) NSString *path;

+ (id)sharedTemporaryDirectoryForTesting;
+ (id)sharedTemporaryDirectoryIdentifiedBy:(id)arg1;
+ (id)temporaryDirectoryOnSameVolumeAsPath:(id)arg1 identifiedBy:(id)arg2 error:(id*)arg3;
+ (id)userTemporaryDirectoryForPersona:(id)arg1 identifiedBy:(id)arg2;
+ (id)userTemporaryDirectoryForTesting;

- (void).cxx_destruct;
- (id)_initWithExistingFsRepPath:(char *)arg1 identifier:(id)arg2;
- (bool)_purgeContentsAt:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (bool)dispose;
- (bool)disposeWithError:(id*)arg1;
- (id)makeTemporaryFilePath;
- (id)path;
- (bool)purgeContentsWithError:(id*)arg1;

@end
