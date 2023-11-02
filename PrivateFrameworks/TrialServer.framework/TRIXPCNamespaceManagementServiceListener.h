
@interface TRIXPCNamespaceManagementServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface * _interface;
    TRIXPCServerContextPromise * _promise;
    TRIServerContext * _serverContext;
    <TRITaskQueuing> * _taskQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithServerContextPromise:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
