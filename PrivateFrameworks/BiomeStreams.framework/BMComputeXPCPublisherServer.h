
@interface BMComputeXPCPublisherServer : NSObject <BMComputePublisher, NSXPCListenerDelegate> {
    id /* block */  _activationCompletion;
    <BMComputeXPCPublisherServerDelegate> * _delegate;
    unsigned long long  _domain;
    NSXPCInterface * _interface;
    NSXPCListener * _listener;
    NSObject<OS_xpc_event_publisher> * _publisher;
    NSObject<OS_dispatch_queue> * _queue;
    BMComputeSubscriptionMarkerManager * _subscriptionMarkerManager;
    NSMutableArray * _subscriptions;
    BMComputeXPCPublisherStorage * _systemStorage;
    BMComputeXPCPublisherStorage * _userStorage;
}

@property (nonatomic, copy) id /* block */ activationCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <BMComputeXPCPublisherServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCInterface *interface;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) NSObject<OS_xpc_event_publisher> *publisher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) BMComputeXPCPublisherStorage *storage;
@property (nonatomic, readonly) BMComputeSubscriptionMarkerManager *subscriptionMarkerManager;
@property (nonatomic, readonly) NSMutableArray *subscriptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMComputeXPCPublisherStorage *systemStorage;
@property (nonatomic, readonly) BMComputeXPCPublisherStorage *userStorage;

+ (id)new;

- (void).cxx_destruct;
- (void)_addSubscription:(id)arg1;
- (void)_handlePublisherAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;
- (void)_removeActiveSubscriptionMarkersForSubscription:(id)arg1;
- (void)_removeSubscriptionWithIdentifier:(id)arg1 client:(id)arg2;
- (void)_removeSubscriptionWithToken:(unsigned long long)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)activationCompletion;
- (id)delegate;
- (id)description;
- (unsigned long long)domain;
- (id)init;
- (id)initWithQueue:(id)arg1 domain:(unsigned long long)arg2 delegate:(id)arg3;
- (id)initWithQueue:(id)arg1 listener:(id)arg2 domain:(unsigned long long)arg3 delegate:(id)arg4 computePublisherStreamName:(id)arg5;
- (id)interface;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)publisher;
- (id)queue;
- (void)receiveInputForSubscription:(id)arg1 streamIdentifier:(id)arg2 storeEvent:(id)arg3;
- (void)setActivationCompletion:(id /* block */)arg1;
- (id)storage;
- (void)subscribe:(id)arg1;
- (id)subscriptionMarkerManager;
- (id)subscriptions;
- (id)subscriptionsForStream:(id)arg1;
- (id)systemStorage;
- (void)unsubscribeWithIdentifier:(id)arg1;
- (id)userStorage;

@end
