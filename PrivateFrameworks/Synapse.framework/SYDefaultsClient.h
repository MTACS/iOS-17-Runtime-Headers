
@interface SYDefaultsClient : NSObject {
    NSObject<OS_dispatch_queue> * __clientQueue;
    NSXPCConnection * __connection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_clientQueue;
@property (nonatomic, retain) NSXPCConnection *_connection;

- (void).cxx_destruct;
- (id)_clientQueue;
- (void)_configureConnectionAndResume;
- (id)_connection;
- (void)_createConnectionIfNeeded;
- (void)_invalidateConnection;
- (void)dealloc;
- (void)indicatorCoverageWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)setIndicatorCoverage:(long long)arg1 completion:(id /* block */)arg2;
- (void)set_clientQueue:(id)arg1;
- (void)set_connection:(id)arg1;

@end
