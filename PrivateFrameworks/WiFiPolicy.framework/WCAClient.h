
@interface WCAClient : NSObject {
    long long  _changeCounter;
    NSXPCConnection * _connectionToService;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connectionToService;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)_establishDaemonConnection;
- (void)_invalidateDaemonConnectionIfPossible;
- (id)connectionToService;
- (void)executeFetchRequest:(id)arg1;
- (void)fetchWiFiAssetsFromServer;
- (id)init;
- (void)setConnectionToService:(id)arg1;

@end
