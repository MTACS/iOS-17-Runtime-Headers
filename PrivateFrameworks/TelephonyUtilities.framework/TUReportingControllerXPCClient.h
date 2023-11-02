
@interface TUReportingControllerXPCClient : NSObject <TUReportingControllerDataSource, TUReportingControllerXPCServer> {
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)reportingControllerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (void)dealloc;
- (oneway void)didCleanUpForStream:(long long)arg1 reply:(id /* block */)arg2;
- (oneway void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(id /* block */)arg3;
- (id)init;
- (id)queue;
- (oneway void)registeredStream:(long long)arg1 withAvailability:(int)arg2 reply:(id /* block */)arg3;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
