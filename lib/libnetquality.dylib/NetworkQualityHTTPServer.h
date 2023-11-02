
@interface NetworkQualityHTTPServer : NSObject {
    bool  bonjourEnabled;
    NSObject<OS_dispatch_data> * config_response_data;
    int  httpVersion;
    NSObject<OS_dispatch_data> * large_response_data;
    bool  launchdInvoked;
    NSObject<OS_nw_listener> * listener;
    NSString * name;
    unsigned int  port;
    NSObject<OS_dispatch_queue> * queue;
    NSObject<OS_sec_identity> * sec_identity;
    NSObject<OS_dispatch_data> * small_response_data;
    bool  tlsEnabled;
}

- (void).cxx_destruct;
- (id)configForConnection:(id)arg1;
- (id)configForConnection:(id)arg1 mirrorIP:(bool)arg2;
- (id)init;
- (id)initWithLaunchd;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1 enableHTTP3:(bool)arg2;
- (id)initWithPort:(unsigned int)arg1 tlsEnabled:(bool)arg2 httpVersion:(int)arg3 bonjourEnabled:(bool)arg4;
- (void)receiveLoop:(id)arg1;
- (void)start:(id /* block */)arg1;
- (void)stop;
- (id)urlForType:(id)arg1 withAddress:(id)arg2 mirrorIP:(bool)arg3;
- (id)urlFormatAddress:(id)arg1;

@end
