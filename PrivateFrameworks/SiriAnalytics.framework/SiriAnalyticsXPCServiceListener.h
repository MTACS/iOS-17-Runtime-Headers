
@interface SiriAnalyticsXPCServiceListener : NSObject <NSXPCListenerDelegate> {
    <SiriAnalyticsXPCConnectionHandlerDelegate> * _delegate;
    NSString * _entitlementsKey;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)arg1 entitlementsKey:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
