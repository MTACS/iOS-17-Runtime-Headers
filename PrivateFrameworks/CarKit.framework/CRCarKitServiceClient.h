
@interface CRCarKitServiceClient : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)serviceQueue;

- (void).cxx_destruct;
- (void)_serviceQueuePerformBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_setupConnection;
- (id)connection;
- (void)dealloc;
- (id)init;
- (void)performServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)performSynchronousServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;

@end
