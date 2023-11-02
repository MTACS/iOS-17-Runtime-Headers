
@interface ILMessageFilter : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (void)performCapabilitiesQueryRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)performClassificationReportRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)performQueryRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)performReportRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
