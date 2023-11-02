
@interface ContextSyncClient : NSObject <ContextSyncClientProtocol> {
    NSString * _clientName;
    NSXPCConnection * _connection;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientName;
- (id)connection;
- (id)initWithClientName:(id)arg1;
- (id)log;
- (bool)registerForUpdates:(id)arg1 withIdentifier:(id)arg2 forUseCase:(id)arg3 shouldWake:(bool)arg4 forDeviceTypes:(long long)arg5;
- (bool)registerForUpdates:(id)arg1 withIdentifier:(id)arg2 forUseCase:(id)arg3 shouldWake:(bool)arg4 forDeviceTypes:(long long)arg5 withError:(id*)arg6;
- (bool)registerForUpdates:(id)arg1 withIdentifier:(id)arg2 forUseCase:(id)arg3 shouldWake:(bool)arg4 forDevices:(id)arg5 withError:(id*)arg6;
- (bool)registerForUpdates:(id)arg1 withIdentifier:(id)arg2 shouldWake:(bool)arg3 forDeviceTypes:(long long)arg4;
- (bool)registerForUpdates:(id)arg1 withIdentifier:(id)arg2 shouldWake:(bool)arg3 forDeviceTypes:(long long)arg4 withError:(id*)arg5;
- (void)setClientName:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setLog:(id)arg1;
- (bool)unregisterForUpdates:(id)arg1 withIdentifier:(id)arg2 forDeviceTypes:(long long)arg3;
- (bool)unregisterForUpdates:(id)arg1 withIdentifier:(id)arg2 forDeviceTypes:(long long)arg3 withError:(id*)arg4;
- (bool)unregisterForUpdates:(id)arg1 withIdentifier:(id)arg2 forUseCase:(id)arg3 forDeviceTypes:(long long)arg4;
- (bool)unregisterForUpdates:(id)arg1 withIdentifier:(id)arg2 forUseCase:(id)arg3 forDeviceTypes:(long long)arg4 withError:(id*)arg5;
- (bool)unregisterForUpdates:(id)arg1 withIdentifier:(id)arg2 forUseCase:(id)arg3 forDevices:(id)arg4 withError:(id*)arg5;

@end
