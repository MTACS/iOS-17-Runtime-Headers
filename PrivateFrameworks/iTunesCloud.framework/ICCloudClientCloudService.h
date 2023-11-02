
@interface ICCloudClientCloudService : NSObject {
    <ICCloudServerListenerEndpointProviding> * _listenerEndpointProvider;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) <ICCloudServerListenerEndpointProviding> *listenerEndpointProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_xpcConnectionWithListenerEndpoint:(id)arg1;
- (id)initWithListenerEndpointProvider:(id)arg1;
- (id)listenerEndpointProvider;
- (id)serialQueue;
- (id)xpcConnection;

@end
