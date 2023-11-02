
@interface TPSURLSessionTask : NSObject {
    bool  _cancelled;
    NSError * _dataError;
    NSMutableData * _dataTaskData;
    long long  _dataType;
    struct TPSURLSessionDelegateResponds { 
        bool willCacheResponse; 
        bool downloadTaskDidFinishDownloadingToURL; 
        bool didReceiveResponse; 
        bool didCompleteWithError; 
        bool taskDidReceiveChallenge; 
    }  _delegateResponds;
    unsigned long long  _downloadTaskTotalBytes;
    id  _formattedData;
    NSString * _identifier;
    bool  _isCacheData;
    NSString * _lastModified;
    <TPSURLSessionDelegate> * _networkDelegate;
    NSString * _requestType;
    NSHTTPURLResponse * _response;
    unsigned long long  _retryCount;
    NSObject<OS_dispatch_queue> * _sessionTaskDelegateQueue;
    NSHashTable * _sessionTaskDelegates;
    NSURLSessionTask * _task;
    NSURLSession * _underlyingSession;
}

@property (nonatomic, readonly) NSURL *URL;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, retain) NSError *dataError;
@property (nonatomic, retain) NSMutableData *dataTaskData;
@property (nonatomic) long long dataType;
@property (nonatomic) struct TPSURLSessionDelegateResponds { bool x1; bool x2; bool x3; bool x4; bool x5; } delegateResponds;
@property (nonatomic) unsigned long long downloadTaskTotalBytes;
@property (nonatomic, retain) id formattedData;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isCacheData;
@property (nonatomic, retain) NSString *lastModified;
@property (nonatomic) <TPSURLSessionDelegate> *networkDelegate;
@property (nonatomic) float priority;
@property (nonatomic, retain) NSString *requestType;
@property (nonatomic, retain) NSHTTPURLResponse *response;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, retain) NSHashTable *sessionTaskDelegates;
@property (nonatomic, retain) NSURLSessionTask *task;
@property (nonatomic) NSURLSession *underlyingSession;

+ (struct TPSURLSessionDelegateResponds { bool x1; bool x2; bool x3; bool x4; bool x5; })delegateRespondsWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (void)cancel;
- (id)dataError;
- (id)dataTaskData;
- (long long)dataType;
- (void)dealloc;
- (struct TPSURLSessionDelegateResponds { bool x1; bool x2; bool x3; bool x4; bool x5; })delegateResponds;
- (void)didCompleteWithError:(id)arg1;
- (unsigned long long)downloadTaskTotalBytes;
- (id)formattedData;
- (id)identifier;
- (id)initWithSessionTask:(id)arg1 identifier:(id)arg2;
- (bool)isCacheData;
- (bool)isCancelled;
- (id)lastModified;
- (id)networkDelegate;
- (float)priority;
- (void)registerDelegate:(id)arg1;
- (id)requestType;
- (id)response;
- (void)resume;
- (unsigned long long)retryCount;
- (id)sessionTaskDelegates;
- (void)setCancelled:(bool)arg1;
- (void)setDataError:(id)arg1;
- (void)setDataTaskData:(id)arg1;
- (void)setDataType:(long long)arg1;
- (void)setDelegateResponds:(struct TPSURLSessionDelegateResponds { bool x1; bool x2; bool x3; bool x4; bool x5; })arg1;
- (void)setDownloadTaskTotalBytes:(unsigned long long)arg1;
- (void)setFormattedData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsCacheData:(bool)arg1;
- (void)setLastModified:(id)arg1;
- (void)setNetworkDelegate:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setRequestType:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setSessionTaskDelegates:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setUnderlyingSession:(id)arg1;
- (id)task;
- (id)underlyingSession;
- (void)unregisterDelegate:(id)arg1;

@end
