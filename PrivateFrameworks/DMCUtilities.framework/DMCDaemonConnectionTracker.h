
@interface DMCDaemonConnectionTracker : NSObject {
    NSString * _clientName;
    NSMutableDictionary * _connectionCache;
    double  _connectionThreshold;
    id /* block */  _excessiveConncetionHandler;
    id /* block */  _excessiveRequestHandler;
    NSMutableDictionary * _pidNameCache;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requestCache;
    double  _requestThreshold;
}

@property (nonatomic, copy) NSString *clientName;
@property (nonatomic, retain) NSMutableDictionary *connectionCache;
@property (nonatomic) double connectionThreshold;
@property (nonatomic, copy) id /* block */ excessiveConncetionHandler;
@property (nonatomic, copy) id /* block */ excessiveRequestHandler;
@property (nonatomic, retain) NSMutableDictionary *pidNameCache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *requestCache;
@property (nonatomic) double requestThreshold;

- (void).cxx_destruct;
- (id)_nameForProcessWithPID:(int)arg1 cache:(id)arg2;
- (id)clientName;
- (id)connectionCache;
- (double)connectionThreshold;
- (id /* block */)excessiveConncetionHandler;
- (id /* block */)excessiveRequestHandler;
- (id)initWithProcessName:(id)arg1 connectionThreshold:(unsigned long long)arg2 requestThreshold:(unsigned long long)arg3;
- (id)pidNameCache;
- (id)queue;
- (id)requestCache;
- (double)requestThreshold;
- (void)setClientName:(id)arg1;
- (void)setConnectionCache:(id)arg1;
- (void)setConnectionThreshold:(double)arg1;
- (void)setExcessiveConncetionHandler:(id /* block */)arg1;
- (void)setExcessiveRequestHandler:(id /* block */)arg1;
- (void)setPidNameCache:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestCache:(id)arg1;
- (void)setRequestThreshold:(double)arg1;
- (void)trackConnectionFromPID:(int)arg1;
- (void)trackRequestFromPID:(int)arg1;

@end
