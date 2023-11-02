
@interface SKStatusPublishingDaemonConnection : NSObject {
    <SKStatusPublishingConnectionDelegateProtocol> * _connectionDelegate;
    <SKStatusPublishingDaemonDelegateProtocol> * _publishingDaemonDelegate;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <SKStatusPublishingConnectionDelegateProtocol> *connectionDelegate;
@property (nonatomic) <SKStatusPublishingDaemonDelegateProtocol> *publishingDaemonDelegate;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)daemonDelegateXPCInterface;
+ (id)daemonXPCInterface;
+ (id)logger;

- (void).cxx_destruct;
- (unsigned long long)_xpcConnectionOptions;
- (id)asynchronousRemoteDaemonWithErrorHandler:(id /* block */)arg1;
- (id)connectionDelegate;
- (id)initWithPublishingDaemonDelegate:(id)arg1 connectionDelegate:(id)arg2;
- (id)publishingDaemonDelegate;
- (void)setConnectionDelegate:(id)arg1;
- (void)setPublishingDaemonDelegate:(id)arg1;
- (void)setXPCConnection:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousRemoteDaemonWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
