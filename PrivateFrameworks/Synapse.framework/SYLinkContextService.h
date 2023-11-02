
@interface SYLinkContextService : NSObject <NSXPCListenerDelegate, SYAddLinkContextServiceDelegate, SYLinkContextServiceProtocol> {
    NSXPCConnection * __activeConnection;
    NSArray * __contextsDataForTesting;
    bool  __forTesting;
    NSXPCListener * __listener;
    NSObject<OS_dispatch_queue> * __serviceQueue;
}

@property (nonatomic, retain) NSXPCConnection *_activeConnection;
@property (nonatomic, copy) NSArray *_contextsDataForTesting;
@property (nonatomic, readonly) bool _forTesting;
@property (nonatomic, retain) NSXPCListener *_listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeConnection;
- (id)_contextsDataForTesting;
- (bool)_forTesting;
- (id)_listener;
- (id)_listenerEndpoint;
- (id)_serviceQueue;
- (void)beginListeningToConnections;
- (void)dealloc;
- (oneway void)fetchLinkContextsDataForUserActivityInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initForTesting:(bool)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)set_activeConnection:(id)arg1;
- (void)set_contextsDataForTesting:(id)arg1;
- (void)set_listener:(id)arg1;
- (void)set_serviceQueue:(id)arg1;
- (oneway void)simpleMethod;
- (void)userDidRemoveContentItemDatas:(id)arg1;
- (void)userEditDidAddContentItemDatas:(id)arg1;
- (void)userWillAddLinkWithActivityData:(id)arg1 completion:(id /* block */)arg2;

@end
