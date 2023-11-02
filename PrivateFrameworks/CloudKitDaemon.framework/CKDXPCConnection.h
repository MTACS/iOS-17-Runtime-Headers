
@interface CKDXPCConnection : NSObject <CKDSystemAvailabilityWatcher, CKDXPCConnectionMuxer, CKPropertiesDescription> {
    CKCoalescer * _activityCoalescer;
    NSPointerArray * _allContainerPointers;
    unsigned long long  _keepAlive;
    NSMutableDictionary * _logicalDeviceScopedClientProxiesByDeviceReference;
    CKDProcessScopedClientProxy * _processScopedClientProxy;
    NSHashTable * _sharedContainers;
    NSOperationQueue * _systemAvailableQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) CKCoalescer *activityCoalescer;
@property (nonatomic, retain) NSPointerArray *allContainerPointers;
@property (nonatomic, readonly) NSArray *allContainers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long keepAlive;
@property (nonatomic, retain) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference;
@property (nonatomic, retain) CKDProcessScopedClientProxy *processScopedClientProxy;
@property (nonatomic, retain) NSHashTable *sharedContainers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSOperationQueue *systemAvailableQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)activityCoalescer;
- (id)allContainerPointers;
- (id)allContainers;
- (void)allowToClose;
- (bool)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)containerFromSetupInfo:(id)arg1 containerScopedClientProxy:(id)arg2 outError:(id*)arg3;
- (void)dealloc;
- (id)description;
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)arg1 containerScopedClientProxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getDaemonTestServerManagerProxyCreatorWithCompletionHandler:(id /* block */)arg1;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)arg1 synchronous:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getProcessScopedClientProxyCreatorSynchronous:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(id /* block */)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (unsigned long long)keepAlive;
- (void)keepOpen;
- (id)logicalDeviceScopedClientProxiesByDeviceReference;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)arg1;
- (void)noteClientProcessScopedMetadata:(id)arg1;
- (id)processScopedClientProxy;
- (id)redactedDescription;
- (void)setAllContainerPointers:(id)arg1;
- (void)setKeepAlive:(unsigned long long)arg1;
- (void)setLogicalDeviceScopedClientProxiesByDeviceReference:(id)arg1;
- (void)setProcessScopedClientProxy:(id)arg1;
- (void)setSharedContainers:(id)arg1;
- (void)setSystemAvailableQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)sharedContainers;
- (bool)systemAvailabilityChanged:(unsigned long long)arg1;
- (id)systemAvailableQueue;
- (void)tearDown;
- (id)xpcConnection;

@end
