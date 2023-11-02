
@interface PRRegulatoryAssistanceEndpoint : NSObject {
    NSXPCConnection * _conn;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)endpointWithQueue:(id)arg1;

- (void).cxx_destruct;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (id)initInternalWithQueue:(id)arg1;
- (void)invalidate;
- (void)provideIsoCode:(id)arg1;

@end
