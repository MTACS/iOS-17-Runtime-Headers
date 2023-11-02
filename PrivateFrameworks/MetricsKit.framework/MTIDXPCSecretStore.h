
@interface MTIDXPCSecretStore : NSObject <MTIDSecretStore> {
    double  _idleCountDown;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)clearLocalData;
- (id)debugInfo;
- (id)init;
- (id)maintainSchemes:(id)arg1 options:(id)arg2;
- (id)newXPCConnection;
- (id)resetSchemes:(id)arg1 options:(id)arg2;
- (id)secretForScheme:(id)arg1 options:(id)arg2;
- (void)setXpcConnection:(id)arg1;
- (id)setupXPCConnection;
- (id)syncForSchemes:(id)arg1 options:(id)arg2;
- (id)xpcConnection;

@end
