
@interface HMDCAMDEmbeddedDeviceService : HMDCAMDEmbeddedDevice <HMDCAMDEmbeddedDeviceClientProxy, HMDCAMDEmbeddedDeviceServerProxy, HMFLogging> {
    unsigned long long  _backoffTimer;
    HMDCAMDBlockManager * _blockInvoker;
    NSXPCConnection * _connection;
    bool  _directInvocations;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    bool  _isRoot;
    bool  _isValid;
    unsigned long long  _requestTimeout;
}

@property (readonly) HMDCAMDBlockManager *blockInvoker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool directInvocations;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) bool isRoot;
@property (readonly) bool isValid;
@property unsigned long long requestTimeout;
@property (readonly) Class superclass;

+ (void)confirmSemaphoreAndSignal:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_fireActualBlockWithArguments:(id)arg1 forKey:(id)arg2;
- (id)_initAsRoot:(bool)arg1;
- (void)_performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 reply:(id /* block */)arg4;
- (void)_removeActualBlockForKey:(id)arg1;
- (void)_testCommunication:(id /* block */)arg1;
- (id)blockInvoker;
- (void)blockReleased:(id)arg1;
- (void)dealloc;
- (bool)directInvocations;
- (id)init;
- (id)initAsMobile;
- (id)initAsRoot;
- (id /* block */)interruptionHandler;
- (id /* block */)invalidationHandler;
- (bool)isRoot;
- (bool)isValid;
- (id)logIdentifier;
- (id)performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id*)arg4;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (unsigned long long)requestTimeout;
- (void)resetConnection;
- (void)setDirectInvocations:(bool)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRequestTimeout:(unsigned long long)arg1;
- (void)start;
- (bool)testCommunication;

@end
