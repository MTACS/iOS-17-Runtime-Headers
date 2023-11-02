
@interface BMComputeSourceServer : NSObject <NSXPCListenerDelegate> {
    NSMapTable * _connections;
    NSXPCInterface * _interface;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    <BMComputeSource> * _source;
}

@property (nonatomic, readonly) NSMapTable *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCInterface *interface;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) <BMComputeSource> *source;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)activate;
- (id)connections;
- (id)description;
- (id)init;
- (id)initWithQueue:(id)arg1 machServiceName:(id)arg2 source:(id)arg3;
- (id)initWithQueue:(id)arg1 source:(id)arg2 listener:(id)arg3;
- (id)interface;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (id)source;

@end
