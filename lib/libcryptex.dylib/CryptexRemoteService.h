
@interface CryptexRemoteService : NSObject {
    NSObject<OS_dispatch_queue> * _client_queue;
    OS_remote_device * _device;
    unsigned long long  _flags;
    NSObject<OS_dispatch_queue> * _internal_queue;
    OS_xpc_remote_connection * connection;
    OS_remote_service * service;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *client_queue;
@property (nonatomic, readonly) OS_remote_device *device;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internal_queue;

- (void).cxx_destruct;
- (id)client_queue;
- (void)dealloc;
- (id)device;
- (unsigned long long)flags;
- (int)initService;
- (id)initWithDevice:(id)arg1 queue:(id)arg2 flags:(unsigned long long)arg3;
- (id)internal_queue;
- (id)remote_conn;
- (int)sendRequestSync:(id)arg1 response:(id*)arg2;

@end
