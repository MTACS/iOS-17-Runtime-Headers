
@interface _LSClientSettingsStore : LSSettingsStore {
    LSSettingsStoreConfiguration * _configuration;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) LSSettingsStoreConfiguration *configuration;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__internalQueue_xpcConnectionWithError:(id*)arg1;
- (id)configuration;
- (void)dealloc;
- (id)init;
- (id)internalQueue;
- (bool)resetUserElectionsWithError:(id*)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (bool)setUserElection:(unsigned char)arg1 forExtensionKey:(id)arg2 error:(id*)arg3;
- (unsigned char)userElectionForExtensionKey:(id)arg1;

@end
