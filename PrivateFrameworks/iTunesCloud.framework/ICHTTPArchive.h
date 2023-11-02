
@interface ICHTTPArchive : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _archiveDirectoryPath;
    NSMutableArray * _archiveFilePaths;
    NSDictionary * _creatorDictionary;
    NSString * _currentArchiveFileName;
    NSDateFormatter * _dateFormatter;
    long long  _flushDelaySeconds;
    NSObject<OS_dispatch_source> * _flushTimer;
    bool  _hasValidArchiveDirectory;
    NSMutableArray * _loggedEvents;
    long long  _maxArchiveBodyLength;
    long long  _maxArchiveFiles;
}

+ (id)sharedArchive;

- (void).cxx_destruct;
- (id)_archiveCreator;
- (id)_archiveForRequest:(id)arg1;
- (id)_archiveForResponse:(id)arg1 responseData:(id)arg2;
- (id)_arrayFromHeaderDictionary:(id)arg1;
- (void)_loadExistingArchivePaths;
- (void)_onQueueFlush;
- (void)_pruneOldArchives;
- (void)archiveRequest:(id)arg1 withResponse:(id)arg2 responseData:(id)arg3;
- (void)archiveRequest:(id)arg1 withResponse:(id)arg2 responseData:(id)arg3 performanceMetrics:(id)arg4;
- (void)dealloc;
- (void)flush;
- (id)init;
- (id)initUnboundedArchiveWithDirectoryPath:(id)arg1;
- (id)initWithArchiveDirectoryPath:(id)arg1 maxArchiveFiles:(long long)arg2 maxArchiveBodyLength:(long long)arg3 flushDelaySeconds:(long long)arg4;

@end
