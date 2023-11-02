
@interface SYAddLinkContextService : NSObject <NSXPCListenerDelegate, SYAddLinkContextServiceProtocol> {
    bool  __forTesting;
    NSXPCListener * __listener;
    NSObject<OS_dispatch_queue> * __serviceQueue;
    <SYAddLinkContextServiceDelegate> * _delegate;
}

@property (nonatomic, readonly) bool _forTesting;
@property (nonatomic, retain) NSXPCListener *_listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SYAddLinkContextServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_forTesting;
- (id)_listener;
- (id)_listenerEndpoint;
- (id)_serviceQueue;
- (void)beginListeningToConnections;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initForTesting:(bool)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)set_listener:(id)arg1;
- (void)set_serviceQueue:(id)arg1;
- (oneway void)userDidRemoveContentItemDatas:(id)arg1;
- (oneway void)userEditDidAddContentItemDatas:(id)arg1;
- (oneway void)userWillAddLinkWithActivityData:(id)arg1 completion:(id /* block */)arg2;

@end
