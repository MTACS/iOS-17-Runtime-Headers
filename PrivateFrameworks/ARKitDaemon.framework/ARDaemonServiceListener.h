
@interface ARDaemonServiceListener : NSObject <NSXPCListenerDelegate> {
    bool  _anonymousListenerEnabled;
    <ARDaemonServiceListenerDelegate> * _delegate;
    NSMutableDictionary * _serviceClasses;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    NSMutableDictionary * _xpcListeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <ARDaemonServiceListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addServiceByName:(id)arg1 serviceClass:(Class)arg2;
- (bool)addServiceWithQueueByName:(id)arg1 serviceClass:(Class)arg2;
- (id)createService:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 enableAnonymousListeners:(bool)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerForServiceNamed:(id)arg1;

@end
