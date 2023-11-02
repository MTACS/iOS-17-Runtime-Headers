
@interface URTAlertService : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableArray * _connections;
    <URTAlertServiceDelegate> * _delegate;
    URTAlertServiceDelegateProxy * _delegateProxy;
    NSString * _domain;
    <BSInvalidatable> * _domainActivationToken;
    BSServiceConnectionListener * _listener;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, readonly) NSMutableArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <URTAlertServiceDelegate> *delegate;
@property (nonatomic, readonly) URTAlertServiceDelegateProxy *delegateProxy;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, retain) <BSInvalidatable> *domainActivationToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSServiceConnectionListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)arg1;
- (id)_connectionQueue_alertConnectionForConnection:(id)arg1;
- (void)_connectionQueue_dismissAlert:(id)arg1 forConnection:(id)arg2;
- (void)_connectionQueue_presentAlert:(id)arg1 preferringPresentationStyle:(long long)arg2 forConnection:(id)arg3;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_performClientActionForAlert:(id)arg1 clientAction:(id /* block */)arg2;
- (id)connectionQueue;
- (id)connections;
- (id)delegate;
- (id)delegateProxy;
- (id)domain;
- (id)domainActivationToken;
- (id)initWithDomain:(id)arg1;
- (void)invalidate;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDomainActivationToken:(id)arg1;

@end
