
@interface FCAssetDownloadOperation : FCNetworkOperation {
    NSURL * _URL;
    NSDictionary * _additionalRequestHTTPHeaders;
    unsigned long long  _cachePolicy;
    id /* block */  _dataDownloadCompletionHandler;
    long long  _downloadDestination;
    NSData * _downloadedData;
    NSURL * _downloadedFileURL;
    id /* block */  _fileDownloadCompletionHandler;
    NSString * _loggingKey;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    FCNetworkEvent * _networkEvent;
    int  _networkEventType;
    NSString * _requestUUID;
    FCURLRequestScheduler * _scheduler;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic, copy) id /* block */ dataDownloadCompletionHandler;
@property (nonatomic) long long downloadDestination;
@property (nonatomic, retain) NSData *downloadedData;
@property (nonatomic, retain) NSURL *downloadedFileURL;
@property (nonatomic, copy) id /* block */ fileDownloadCompletionHandler;
@property (nonatomic, copy) NSString *loggingKey;
@property (nonatomic, retain) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, retain) FCNetworkEvent *networkEvent;
@property (nonatomic) int networkEventType;
@property (nonatomic, retain) NSString *requestUUID;
@property (nonatomic, retain) FCURLRequestScheduler *scheduler;

+ (id)sharedURLRequestScheduler;
+ (id)sharedURLSession;

- (void).cxx_destruct;
- (id)URL;
- (id)additionalRequestHTTPHeaders;
- (unsigned long long)cachePolicy;
- (id /* block */)dataDownloadCompletionHandler;
- (long long)downloadDestination;
- (id)downloadedData;
- (id)downloadedFileURL;
- (id /* block */)fileDownloadCompletionHandler;
- (id)init;
- (id)initWithURLRequestScheduler:(id)arg1;
- (id)loggingKey;
- (unsigned long long)maxRetries;
- (id)networkBehaviorMonitor;
- (id)networkEvent;
- (int)networkEventType;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)requestUUID;
- (id)scheduler;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setDataDownloadCompletionHandler:(id /* block */)arg1;
- (void)setDownloadDestination:(long long)arg1;
- (void)setDownloadedData:(id)arg1;
- (void)setDownloadedFileURL:(id)arg1;
- (void)setFileDownloadCompletionHandler:(id /* block */)arg1;
- (void)setLoggingKey:(id)arg1;
- (void)setNetworkBehaviorMonitor:(id)arg1;
- (void)setNetworkEvent:(id)arg1;
- (void)setNetworkEventType:(int)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setURL:(id)arg1;
- (id)throttleGroup;
- (bool)validateOperation;

@end
