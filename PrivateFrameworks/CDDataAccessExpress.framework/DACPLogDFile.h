
@interface DACPLogDFile : NSObject {
    NSString * _UUID;
    NSString * _baseName;
    int  _fd;
    NSObject<OS_dispatch_source> * _fileEventDispatchSource;
    bool  _fileWasDeleted;
    NSString * _folder;
    NSString * _path;
}

@property (nonatomic, readonly, retain) NSString *UUID;
@property (nonatomic, readonly, retain) NSString *baseName;
@property (nonatomic, readonly, retain) NSString *folder;

- (void).cxx_destruct;
- (id)UUID;
- (void)_beginWatchingFile;
- (void)_closeFileWithFileEventDispatchSource:(id)arg1;
- (id)_filePathsMatchingPattern:(id)arg1;
- (id)_getLatestMatchingFilePath;
- (void)_openFileOutDidCreateNewFile:(bool*)arg1 outNewFilePath:(id*)arg2;
- (id)_startNewFile;
- (id)baseName;
- (void)checkForMaximumFileSize:(long long)arg1 wantsCompressed:(bool)arg2 outDidCreateNewFile:(bool*)arg3 outNewFilePath:(id*)arg4;
- (void)cullFilesMaxFileCount:(long long)arg1;
- (id)folder;
- (id)initWithFolder:(id)arg1 baseName:(id)arg2;
- (bool)logData:(id)arg1 outDidCreateNewFile:(bool*)arg2 outNewFilePath:(id*)arg3;
- (id)startNewFile;

@end
