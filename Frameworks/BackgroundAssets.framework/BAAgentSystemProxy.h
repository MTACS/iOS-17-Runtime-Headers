
@interface BAAgentSystemProxy : NSObject <BAClientSystemXPCProtocol> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _progressObserverLock;
    BAAppStoreProgressConfiguration * _recentProgressConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applicationEventPerformedWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)applicationPrepareWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)applicationShouldTriggerPeriodicWithIdentifier:(id)arg1 bundleURLPath:(id)arg2 error:(id*)arg3;
- (id)init;
- (void)invalidate;
- (void)receiveAppStoreProgressWithAppBundleIdentifier:(id)arg1 progressInfo:(id)arg2;
- (void)runDebugCommand:(id)arg1;
- (bool)updateAppStoreProgressObservationWithConfiguration:(id)arg1 error:(id*)arg2;

@end
