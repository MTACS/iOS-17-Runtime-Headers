
@interface MXSourceManager : NSObject <MXSourceXPCClient> {
    NSXPCConnection * _connection;
    NSObject<OS_os_log> * _sourceManagerLogHandle;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_os_log> *sourceManagerLogHandle;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_createXPCConnection;
- (id)connection;
- (id)init;
- (void)sendDiagnostic:(id)arg1 forDate:(id)arg2 andSourceID:(long long)arg3;
- (void)sendMetrics:(id)arg1 forDate:(id)arg2 andSourceID:(long long)arg3;
- (void)setConnection:(id)arg1;
- (void)setSourceManagerLogHandle:(id)arg1;
- (void)simulatePayloadDeliveryForClient:(id)arg1;
- (id)sourceManagerLogHandle;

@end
