
@interface GTTransportClient : NSObject {
    <GTXPCConnection> * _connection;
    NSObject<OS_os_log> * _log;
}

- (void).cxx_destruct;
- (id)allServices;
- (id)capture;
- (id)initWithConnection:(id)arg1;
- (id)launcher;
- (id)loopback;
- (id)replayer;
- (id)serviceProvider;

@end
