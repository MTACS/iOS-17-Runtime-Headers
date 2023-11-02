
@interface PLSimpleDCIMDirectory : NSObject {
    NSMutableIndexSet * _availableFileNameNumbers;
    NSURL * _baseURL;
    unsigned long long  _currentSubDirectoryNumber;
    NSURL * _currentSubDirectoryURL;
    unsigned long long  _directoryLimit;
    NSFileManager * _fileManager;
    bool  _hasLoadedUserInfo;
    NSObject<OS_dispatch_queue> * _isolation;
    bool  _representsCameraRoll;
    bool  _shouldCheckForExistingFiles;
    NSString * _subDirSuffix;
    NSString * _userInfoPath;
}

@property (readonly) NSURL *directoryURL;
@property bool representsCameraRoll;
@property bool shouldCheckForExistingFiles;

+ (id)cameraRollPlistName;
+ (id)cloudPlistName;
+ (id)migrateOldPlistToNewPlist:(id)arg1;

- (void).cxx_destruct;
- (id)_availableFileNameNumbersInDirNumber:(unsigned long long)arg1;
- (id)_currentSubDirectory;
- (bool)_ensureDirectoryExists:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_fileNameNumberRangeForDirNumber:(unsigned long long)arg1;
- (void)_loadUserInfoLastUsedDirectoryNumber:(id*)arg1 lastUsedFileNumber:(id*)arg2;
- (id)_nextAvailableFileURLWithExtension:(id)arg1;
- (void)_saveUserInfo;
- (id)_subDirURLForNumber:(unsigned long long)arg1 create:(bool)arg2 didCreate:(bool*)arg3;
- (id)directoryURL;
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4;
- (id)nextAvailableFileURLWithExtension:(id)arg1;
- (bool)representsCameraRoll;
- (void)reset;
- (void)setRepresentsCameraRoll:(bool)arg1;
- (void)setShouldCheckForExistingFiles:(bool)arg1;
- (bool)shouldCheckForExistingFiles;

@end
