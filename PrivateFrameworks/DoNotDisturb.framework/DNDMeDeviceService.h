
@interface DNDMeDeviceService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientIdentifier;
    NSHashTable * _listeners;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForUpdates;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1;
- (bool)_queue_registerForStateUpdatesIfRequired;
- (void)addListener:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)clientIdentifier;
- (void)queryCurrentStateWithCompletionHandler:(id /* block */)arg1;
- (void)remoteService:(id)arg1 didReceiveUpdatedMeDeviceState:(id)arg2;
- (void)removeListener:(id)arg1;

@end
