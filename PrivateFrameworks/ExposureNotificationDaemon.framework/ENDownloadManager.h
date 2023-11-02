
@interface ENDownloadManager : NSObject {
    NSURLSession * _URLSession;
    bool  _didUnscheduleOnce;
    NSURL * _directoryURL;
    id /* block */  _errorMetricReporter;
    NSBackgroundActivityScheduler * _fetchScheduler;
    bool  _invalidated;
    NSArray * _pendingEndpoints;
    NSObject<OS_dispatch_queue> * _queue;
    ENDownloadManagerState * _state;
    ENSecureArchiveFileWrapper * _stateFileWrapper;
}

@property (nonatomic, retain) NSURLSession *URLSession;
@property (nonatomic, readonly, copy) NSURL *directoryURL;
@property (nonatomic, readonly) unsigned long long enabledEndpointCount;
@property (nonatomic, copy) id /* block */ errorMetricReporter;
@property (nonatomic, readonly) NSBackgroundActivityScheduler *fetchScheduler;
@property (nonatomic, readonly) ENDownloadManagerState *state;

- (void).cxx_destruct;
- (id)URLSession;
- (void)_activate;
- (double)_aggregateDownloadIntervalFromEndpoints:(id)arg1;
- (void)_backgroundActivityFiredWithCompletion:(id /* block */)arg1;
- (id)_baseDirectoryPathForEndpointWithState:(id)arg1;
- (bool)_copyDownloadedFileAtPath:(id)arg1 toPath:(id)arg2 removeExisting:(bool)arg3 error:(id*)arg4;
- (id)_countOfAvailableDownloadsWithError:(id*)arg1;
- (void)_downloadIndexWithTask:(id)arg1;
- (void)_downloadNextFileFromServerWithTask:(id)arg1;
- (id)_downloadsDirectoryPathForEndpointState:(id)arg1;
- (bool)_enumerateDownloadsWithError:(id*)arg1 handler:(id /* block */)arg2;
- (void)_handleFileDownloadFinishedForTask:(id)arg1 serverFilePath:(id)arg2 downloadedFilePath:(id)arg3;
- (void)_handleIndexFileDownloadFinishedForTask:(id)arg1 filePath:(id)arg2;
- (id)_indexFilePathForEndpointState:(id)arg1;
- (void)_invalidate;
- (id)_nextFilePathToDownloadWithEndpointState:(id)arg1;
- (void)_performDownloadsWithScheduler:(id)arg1 atDate:(id)arg2 forced:(bool)arg3 completion:(id /* block */)arg4;
- (void)_purgeAllDownloads;
- (void)_purgeExpiredDownloadsWithDate:(id)arg1;
- (void)_purgeKeepingDownloadsForIdentifiers:(id)arg1 expiryDate:(id)arg2;
- (bool)_readStateIfNecessaryWithError:(id*)arg1;
- (void)_reportErrorMetric:(unsigned int)arg1;
- (void)_reportErrorMetricForHTTPStatus:(long long)arg1 forIndexFile:(bool)arg2;
- (bool)_saveState;
- (bool)_saveStateWithError:(id*)arg1;
- (void)_setDownloadEndpoints:(id)arg1;
- (bool)_shouldFetchFromEndpointWithState:(id)arg1 time:(double)arg2;
- (void)_update;
- (void)_updateFetchSchedule;
- (void)activate;
- (id)countOfAvailableDownloadsWithError:(id*)arg1;
- (id)createScheduler;
- (id)description;
- (id)directoryURL;
- (unsigned long long)enabledEndpointCount;
- (bool)enumerateDownloadsWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id /* block */)errorMetricReporter;
- (id)fetchScheduler;
- (id)initWithDirectoryURL:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)performDownloadsAtDate:(id)arg1 forced:(bool)arg2 completion:(id /* block */)arg3;
- (void)performDownloadsForced:(bool)arg1 completion:(id /* block */)arg2;
- (void)purgeAllDownloads;
- (void)purgeExpiredDownloadsWithDate:(id)arg1;
- (bool)resetStateFile;
- (void)setDownloadEndpoints:(id)arg1;
- (void)setErrorMetricReporter:(id /* block */)arg1;
- (void)setURLSession:(id)arg1;
- (id)state;
- (void)update;

@end
