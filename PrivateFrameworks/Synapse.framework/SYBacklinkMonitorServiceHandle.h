
@interface SYBacklinkMonitorServiceHandle : NSObject <SYBacklinkMonitorServiceProtocol> {
    NSXPCConnection * _connection;
    <SYBacklinkMonitorServiceHandleDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _handleQueue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SYBacklinkMonitorServiceHandleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handleQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int processIdentifier;
@property (readonly) Class superclass;

+ (id)handleWithConnection:(id)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (long long)_indicatorCoverage;
- (void)_killConnectionWithCallback;
- (oneway void)activeUserActivityDidChange:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)handleQueue;
- (oneway void)indicatorCoverageWithCompletion:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (int)processIdentifier;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilterCache:(id)arg1;
- (void)setHandleQueue:(id)arg1;
- (oneway void)setIndicatorCoverage:(id)arg1;

@end
