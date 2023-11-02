
@interface IDSDependencyProvider : NSObject <IDSKeychainAdapter, IDSPushAdapter, IDSServiceLoader, IDSXPCAdapter> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _registeredAdapters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)XPCAdapter;
+ (id)keychainAdapter;
+ (id)pushAdapter;
+ (void)registerObject:(id)arg1 forProtocol:(id)arg2;
+ (id)registeredObjectForProtocol:(id)arg1;
+ (id)serviceLoader;
+ (id)sharedProvider;
+ (id)systemMonitorAdapter;
+ (id)userDefaults;

- (void).cxx_destruct;
- (id)_init;
- (id)apsConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(bool)arg3 queue:(id)arg4;
- (id)createServiceConnectionWithServiceName:(const char *)arg1 invalidationHandler:(id /* block */)arg2 terminationHandler:(id /* block */)arg3 peerEventHandler:(id /* block */)arg4 peerQueue:(id)arg5;
- (id)createSim2HostServiceConnectionWithServiceName:(const char *)arg1 invalidationHandler:(id /* block */)arg2 terminationHandler:(id /* block */)arg3 peerEventHandler:(id /* block */)arg4 peerQueue:(id)arg5;
- (bool)getKeychainData:(id*)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int*)arg5;
- (id)loadServiceDictionaries;
- (id)placeholderMachPort;
- (void)registerObject:(id)arg1 forProtocol:(id)arg2;
- (id)registeredObjectForProtocol:(id)arg1;
- (bool)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int*)arg3;
- (bool)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(bool)arg5 error:(int*)arg6;

@end
