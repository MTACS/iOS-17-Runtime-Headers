
@interface AVCQoSMonitor : NSObject {
    AVConferenceXPCClient * _connection;
    <AVCQoSMonitorDelegate> * _delegate;
    NSMutableArray * _registeredStreamTokens;
    NSMutableDictionary * _reportingIntervals;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic) <AVCQoSMonitorDelegate> *delegate;
@property (nonatomic, readonly) NSArray *streamTokens;

- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (bool)generateInvalidStreamTokenWithError:(id*)arg1;
- (id)initWithStreamToken:(long long)arg1 queue:(id)arg2 error:(id*)arg3;
- (void)registerBlocksForNotifications;
- (id)registerStreamToken:(long long)arg1;
- (long long)reportingIntervalForStreamToken:(long long)arg1;
- (void)requestQoSReport;
- (void)setDelegate:(id)arg1;
- (id)streamTokens;
- (void)terminateConnection;

@end
