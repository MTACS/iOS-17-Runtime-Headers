
@interface ASCServicesConnection : NSObject <ASCServices> {
    NSXPCConnection * _connectionIfValid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, retain) NSXPCConnection *connectionIfValid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)log;
+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)connection;
- (id)connectionIfValid;
- (void)connectionWasInterrupted;
- (void)connectionWasInvalidated;
- (id)init;
- (id)lockupFetcherService;
- (id)metricsService;
- (id)offerStateServiceWithDelegate:(id)arg1;
- (id)serviceWithBlock:(id /* block */)arg1;
- (void)setConnectionIfValid:(id)arg1;
- (id)testConnection;
- (id)workQueue;

@end
