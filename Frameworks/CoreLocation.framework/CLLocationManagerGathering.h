
@interface CLLocationManagerGathering : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) NSXPCConnection *connection;

- (id)connection;
- (void)dealloc;
- (void)fetchAdvertisementsDetailedWithHandler:(id /* block */)arg1;
- (void)fetchAdvertisementsWithHandler:(id /* block */)arg1;
- (id)getConnection;
- (id)getRemoteObjectProxy;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)setConnection:(id)arg1;

@end
