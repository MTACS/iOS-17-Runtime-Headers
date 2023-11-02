
@interface IOSurfaceRemoteServer : NSObject {
    NSMutableArray * _clients;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableArray *clients;
@property (nonatomic, retain) NSObject<OS_xpc_object> *listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_handleClientConnection:(id)arg1;
- (void)_handleClientDisconnected:(id)arg1;
- (id)clients;
- (void)dealloc;
- (id)initWithListener:(id)arg1 options:(id)arg2;
- (id)listener;
- (id)queue;
- (void)setClients:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)shutdown;

@end
