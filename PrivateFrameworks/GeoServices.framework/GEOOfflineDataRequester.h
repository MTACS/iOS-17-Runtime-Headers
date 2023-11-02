
@interface GEOOfflineDataRequester : NSObject <GEODataURLSessionTaskDelegate, GEOOfflineDataRequester> {
    GEODataURLSession * _dataSession;
    <GEOOfflineDataRequesterDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
    NSString * _logPrefix;
    GEOOfflineDataRequest * _request;
    unsigned long long  _requestOptions;
    GEODataURLSessionTask * _task;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOOfflineDataRequesterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOOfflineDataRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;
- (id)delegate;
- (id)initWithRequest:(id)arg1 requestOptions:(unsigned long long)arg2 log:(id)arg3 logPrefix:(id)arg4;
- (id)request;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
