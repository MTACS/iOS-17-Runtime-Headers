
@interface AudioPlaybackHostingService : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary * _clients;
    unsigned long long  _connectionIdentifierCounter;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectionIdentifier:(unsigned long long)arg1 streamTokenDidComplete:(unsigned long long)arg2;
- (id)endpoint;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
