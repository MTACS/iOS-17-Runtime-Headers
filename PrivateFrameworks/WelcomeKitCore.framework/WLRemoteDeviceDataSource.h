
@interface WLRemoteDeviceDataSource : NSObject <WLMigrationDataSource> {
    NSString * _host;
    unsigned short  _port;
    NSOperationQueue * _queue;
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *host;
@property (nonatomic) unsigned short port;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)_requestSerialQueue;

- (void).cxx_destruct;
- (void)_downloadTaskWithRequest:(id)arg1 expectedContentLength:(unsigned long long)arg2 numberOfRetriesAllowed:(unsigned long long)arg3 startDate:(id)arg4 fileAccessor:(id /* block */)arg5 completion:(id /* block */)arg6;
- (double)_maximumRetriableTaskDurationForLongServerOperations;
- (unsigned long long)_newNumberOfRetriesAllowed:(unsigned long long)arg1 startDate:(id)arg2;
- (void)_performDownloadRequest:(id)arg1 expectedContentLength:(unsigned long long)arg2 numberOfRetriesAllowed:(unsigned long long)arg3 startDate:(id)arg4 fileAccessor:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)_performRequest:(id)arg1 expectedContentLength:(unsigned long long)arg2 numberOfRetriesAllowed:(unsigned long long)arg3 preventRetriesAfterTaskExceedsDuration:(bool)arg4 taskDurationLimit:(double)arg5 startDate:(id)arg6 completionHandler:(id /* block */)arg7;
- (long long)_retryLaterDelayInSeconds;
- (void)_runTaskWithRequest:(id)arg1 expectedContentLength:(unsigned long long)arg2 numberOfRetriesAllowed:(unsigned long long)arg3 preventRetriesAfterTaskExceedsDuration:(bool)arg4 taskDurationLimit:(double)arg5 startDate:(id)arg6 completionHandler:(id /* block */)arg7;
- (bool)_shouldHandleHTTPErrorWithResponse:(id)arg1 expectedContentLength:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_shouldRetryLaterWithResponse:(id)arg1 error:(id)arg2;
- (bool)_shouldRetryWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (bool)_shouldRetryWithPreventRetriesAfterTaskExceedsDuration:(bool)arg1 taskDurationLimit:(double)arg2 taskDuration:(double)arg3;
- (double)_taskDurationSinceStartDate:(id)arg1;
- (id)_urlForAccountsWithMigrator:(id)arg1;
- (id)_urlForRecordForMigrator:(id)arg1 withSummaryIdentifier:(id)arg2 accountIdentifier:(id)arg3 segmentByteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)_urlForRecordSummariesForMigrator:(id)arg1 withAccountIdentifier:(id)arg2;
- (double)_urlRequestTimeout;
- (id)_urlScheme;
- (void)_willRetryPerformRequest;
- (void)accountsDataForMigrator:(id)arg1 completion:(id /* block */)arg2;
- (void)cancel;
- (void)dataForSummary:(id)arg1 migrator:(id)arg2 completion:(id /* block */)arg3;
- (void)dataSegmentForSummary:(id)arg1 byteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 migrator:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void)fileForSummary:(id)arg1 migrator:(id)arg2 fileAccessor:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)host;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 session:(id)arg3;
- (void)itemSizeForSummary:(id)arg1 migrator:(id)arg2 completion:(id /* block */)arg3;
- (unsigned short)port;
- (id)session;
- (void)setHost:(id)arg1;
- (void)setPort:(unsigned short)arg1;
- (void)setSession:(id)arg1;
- (void)summariesDataForAccount:(id)arg1 migrator:(id)arg2 completion:(id /* block */)arg3;
- (void)updateUIWithProgress:(double)arg1 remainingTime:(double)arg2 logString:(id)arg3 completion:(id /* block */)arg4;

@end
