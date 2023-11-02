
@interface BMComputeXPCPublisherClient : NSObject <BMComputePublisher, BMComputePublishing> {
    BMComputeXPCPublisherClientDomainConfiguration * _configuration;
    NSXPCConnection * _connection;
    NSXPCListenerEndpoint * _listenerEndpoint;
    <BMComputePublisher> * _localComputePublisher;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingEvents;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _subscriptions;
    int  _token;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *pendingEvents;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableDictionary *subscriptions;
@property (readonly) Class superclass;

+ (void)_setQueue:(id)arg1 domain:(unsigned long long)arg2;
+ (void)initializeSharedClientWithQueue:(id)arg1 domain:(unsigned long long)arg2;
+ (id)new;
+ (id)shared;
+ (id)sharedWithQueue:(id)arg1 domain:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_handleEventWithPayload:(id)arg1;
- (void)_setXPCEvent:(id)arg1 identifier:(id)arg2;
- (id)computePublisherObjectWithErrorHandler:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (void)handleBiomeRelaunch;
- (id)init;
- (id)initWithQueue:(id)arg1 configuration:(id)arg2 listenerEndpoint:(id)arg3 localComputePublisher:(id)arg4;
- (id)initWithQueue:(id)arg1 domain:(unsigned long long)arg2 listenerEndpoint:(id)arg3 localComputePublisher:(id)arg4;
- (bool)isRegisteredForRelaunchNotification;
- (unsigned long long)numberOfExistingNonWakingSubscriptions;
- (id)pendingEvents;
- (id)queue;
- (void)receiveInputForIdentifier:(id)arg1 streamIdentifier:(id)arg2 storeEvent:(id)arg3;
- (void)registerBiomeLaunchNotification;
- (void)subscribe:(id)arg1;
- (void)subscribeViaNSXPC:(id)arg1;
- (void)subscribeViaXPCEvent:(id)arg1;
- (id)subscriptions;
- (void)unregisterBiomeLaunchNotification;
- (void)unsubscribeWithIdentifier:(id)arg1;

@end
