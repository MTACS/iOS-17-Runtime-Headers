
@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol> {
    NSMutableArray * _interruptionHandlers;
    NSXPCConnection * _sharedConnection;
    NSObject<OS_dispatch_queue> * _sharedConnectionAccessQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *interruptionHandlers;
@property (nonatomic, retain) NSXPCConnection *sharedConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectionProxyWithAccessBlock:(id /* block */)arg1;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)arg1;
- (void)_errorForwardingProxyForServiceProxy:(id)arg1 proxyReplyError:(id)arg2 interface:(id)arg3 proxyPromise:(id)arg4;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (void)_initializeConnection;
- (id)_serviceInterfaceForSelector:(SEL)arg1;
- (id)accountCachedServerDataService;
- (id)accountSignOutServiceProxy;
- (void)addInterruptionHandler:(id /* block */)arg1;
- (void)attemptResumeIfRequired;
- (id)callService:(id)arg1 then:(id /* block */)arg2;
- (id)cookieServiceProxy;
- (id)cookieServiceProxySyncWithError:(id*)arg1;
- (void)dealloc;
- (id)deviceMessengerProxyWithDelegate:(id)arg1;
- (id)dismissQRDialogServiceProxy;
- (id)fraudReportServiceProxy;
- (id)init;
- (id)interruptionHandlers;
- (id)keychainServiceProxy;
- (id)purchaseServiceProxy;
- (id)pushNotificationService;
- (id)securityServiceProxyWithDelegate:(id)arg1;
- (void)setSharedConnection:(id)arg1;
- (id)sharedConnection;
- (id)sharedConnectionAccessQueue;

@end
