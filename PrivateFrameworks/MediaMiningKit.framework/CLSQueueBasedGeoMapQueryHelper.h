
@interface CLSQueueBasedGeoMapQueryHelper : NSObject {
    bool  _alreadyLaunched;
    id /* block */  _cancellerBlock;
    id /* block */  _completionBlock;
    bool  _didFinishQuery;
    double  _internalProgressTimeInterval;
    double  _nextRetryTime;
    double  _numberOfRetries;
    <CLSQueryProtocol> * _query;
    unsigned long long  _retryLevel;
    bool  _simulatesTimeout;
    double  _timeoutInterval;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic) bool alreadyLaunched;
@property (nonatomic, readonly, copy) id /* block */ cancellerBlock;
@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic) bool didFinishQuery;
@property (nonatomic) double internalProgressTimeInterval;
@property (nonatomic) double nextRetryTime;
@property (nonatomic) double numberOfRetries;
@property (nonatomic, readonly) <CLSQueryProtocol> *query;
@property (nonatomic) unsigned long long retryLevel;
@property (getter=isSimulatingTimeout, nonatomic) bool simulatesTimeout;
@property (nonatomic) double timeoutInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *timerQueue;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_handleError:(id)arg1;
- (void)_handleQueryResultsForQuery:(id)arg1 error:(id)arg2;
- (void)_heartBeat;
- (void)_startQuery;
- (bool)alreadyLaunched;
- (void)cancel;
- (id /* block */)cancellerBlock;
- (id /* block */)completionBlock;
- (bool)didFinishQuery;
- (id)initWithQueryObject:(id)arg1;
- (double)internalProgressTimeInterval;
- (bool)isSimulatingTimeout;
- (void)launchQueryWithCancellerBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (double)nextRetryTime;
- (double)numberOfRetries;
- (id)query;
- (unsigned long long)retryLevel;
- (void)setAlreadyLaunched:(bool)arg1;
- (void)setDidFinishQuery:(bool)arg1;
- (void)setInternalProgressTimeInterval:(double)arg1;
- (void)setNextRetryTime:(double)arg1;
- (void)setNumberOfRetries:(double)arg1;
- (void)setRetryLevel:(unsigned long long)arg1;
- (void)setSimulatesTimeout:(bool)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)setTimerQueue:(id)arg1;
- (double)timeoutInterval;
- (id)timer;
- (id)timerQueue;

@end
