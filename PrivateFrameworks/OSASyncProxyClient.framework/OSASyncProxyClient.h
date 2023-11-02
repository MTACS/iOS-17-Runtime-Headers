
@interface OSASyncProxyClient : NSObject <OSASyncProxyServices> {
    NSXPCConnection * _connection;
    <OSASyncProxyServices> * _synchRemoteObjectProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
- (id)init;
- (id)initWithErrorHandler:(id /* block */)arg1;
- (void)listDevices:(id /* block */)arg1;
- (void)request:(id)arg1 logList:(id /* block */)arg2;
- (void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferLog:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferLog:(id)arg2 withOptions:(id)arg3 onComplete:(id /* block */)arg4;
- (void)requestProxyMetadata:(id)arg1 onComplete:(id /* block */)arg2;
- (void)synchronize:(id)arg1 withOptions:(id)arg2 onComplete:(id /* block */)arg3;

@end
