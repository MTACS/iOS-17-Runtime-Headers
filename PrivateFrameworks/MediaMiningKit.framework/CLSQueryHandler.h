
@interface CLSQueryHandler : NSObject {
    bool  _alreadyLaunched;
    id /* block */  _completionBlock;
    bool  _didQueryFinish;
    CLSGeoServiceThread * _geoServiceThread;
    double  _internalProgressTimeInterval;
    NSObject<OS_os_log> * _loggingConnection;
    double  _nextRetryTime;
    unsigned long long  _numberOfRetries;
    id /* block */  _progressBlock;
    <CLSQueryPerformerProtocol> * _query;
    unsigned long long  _retryLevel;
    bool  _simulatesTimeout;
    double  _timeoutInterval;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) CLSGeoServiceThread *geoServiceThread;
@property (nonatomic) unsigned long long numberOfRetries;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (getter=isSimulatingTimeout, nonatomic) bool simulatesTimeout;
@property (nonatomic) double timeoutInterval;

- (void).cxx_destruct;
- (unsigned long long)_cacheMapItems:(id)arg1;
- (void)_cancel;
- (void)_forwardToGeoThread;
- (void)_handleError:(id)arg1 numberOfItems:(unsigned long long)arg2;
- (void)_handleQueryResultsForQuery:(id)arg1 items:(id)arg2 error:(id)arg3;
- (void)_heartBeat;
- (void)_startQuery;
- (void)cacheItems;
- (void)cancel;
- (id /* block */)completionBlock;
- (id)geoServiceThread;
- (id)initWithQueryPerformer:(id)arg1 geoServiceThread:(id)arg2 loggingConnection:(id)arg3;
- (bool)isSimulatingTimeout;
- (unsigned long long)numberOfRetries;
- (id /* block */)progressBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setGeoServiceThread:(id)arg1;
- (void)setNumberOfRetries:(unsigned long long)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setSimulatesTimeout:(bool)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;

@end
