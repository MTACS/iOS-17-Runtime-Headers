
@interface AutoBugCaptureCacheDelete : NSObject {
    DiagnosticStorageManager * _storageManager;
    NSString * logArchivePath;
    NSMutableArray * purgedFilePaths;
}

@property (nonatomic, retain) DiagnosticStorageManager *storageManager;

- (void).cxx_destruct;
- (id)cacheDeletePeriodicWithInfo:(struct __CFDictionary { }*)arg1;
- (void)initCacheDeletePurgeMonitor;
- (id)initWithStorageManager:(id)arg1;
- (void)processPurgedFilesForCDEvents:(id)arg1;
- (void)registerCallbacks:(const char *)arg1;
- (id)replyCacheDeleteDictionaryWithCDInfo:(id)arg1 amount:(unsigned long long)arg2;
- (void)setStorageManager:(id)arg1;
- (id)storageManager;

@end
