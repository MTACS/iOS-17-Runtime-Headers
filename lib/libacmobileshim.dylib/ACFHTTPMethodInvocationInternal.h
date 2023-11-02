
@interface ACFHTTPMethodInvocationInternal : NSObject {
    NSURLConnection * _connection;
    NSRecursiveLock * _invocationGuard;
    bool  _isFinished;
    NSMutableData * _receivedDataAccumulator;
    NSMutableDictionary * _runLoops;
    NSRecursiveLock * _schedulingGuard;
}

@property (retain) NSURLConnection *connection;
@property (retain) NSRecursiveLock *invocationGuard;
@property bool isFinished;
@property (retain) NSMutableData *receivedDataAccumulator;
@property (retain) NSMutableDictionary *runLoops;
@property (retain) NSRecursiveLock *schedulingGuard;

- (id)connection;
- (void)dealloc;
- (id)init;
- (id)invocationGuard;
- (bool)isFinished;
- (id)receivedDataAccumulator;
- (id)runLoops;
- (id)schedulingGuard;
- (void)setConnection:(id)arg1;
- (void)setInvocationGuard:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setReceivedDataAccumulator:(id)arg1;
- (void)setRunLoops:(id)arg1;
- (void)setSchedulingGuard:(id)arg1;

@end
