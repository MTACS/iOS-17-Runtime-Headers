
@interface CKLogicalDeviceScopedDaemonProxy : NSObject {
    <NSObject> * _connectionInterruptedObserver;
    CKLogicalDeviceContext * _deviceContext;
    bool  _hasValidLogicalDeviceScopedDaemonProxyCreator;
    <CKXPCLogicalDeviceScopedDaemon> * _logicalDeviceScopedDaemonProxyCreator;
}

@property (nonatomic, retain) <NSObject> *connectionInterruptedObserver;
@property (nonatomic, readonly) CKLogicalDeviceContext *deviceContext;
@property bool hasValidLogicalDeviceScopedDaemonProxyCreator;
@property (nonatomic, retain) <CKXPCLogicalDeviceScopedDaemon> *logicalDeviceScopedDaemonProxyCreator;

+ (id)CKXPCClientToDaemonLogicalDeviceScopedInterface;
+ (id)CKXPCDaemonToClientLogicalDeviceScopedInterface;

- (void).cxx_destruct;
- (void)_getLogicalDeviceScopedDaemonProxyCreatorSynchronous:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_getLogicalDeviceScopedDaemonProxySynchronous:(bool)arg1 errorHandler:(id /* block */)arg2 daemonProxyHandler:(id /* block */)arg3;
- (void)addClouddThrottle:(id)arg1;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)arg1;
- (void)clearAllClouddThrottles;
- (id)connectionInterruptedObserver;
- (void)dealloc;
- (id)deviceContext;
- (bool)hasValidLogicalDeviceScopedDaemonProxyCreator;
- (id)initWithDeviceContext:(id)arg1;
- (id)logicalDeviceScopedDaemonProxyCreator;
- (void)postClouddWalrusUpdateNotification;
- (void)setConnectionInterruptedObserver:(id)arg1;
- (void)setHasValidLogicalDeviceScopedDaemonProxyCreator:(bool)arg1;
- (void)setLogicalDeviceScopedDaemonProxyCreator:(id)arg1;

@end
