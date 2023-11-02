
@interface PFCloudKitStoreMonitor : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _aliveLock;
    bool  _declaredDead;
    NSObject<OS_dispatch_group> * _monitorGroup;
    NSPersistentStoreCoordinator * _monitoredCoordinator;
    NSPersistentStore * _monitoredStore;
    int  _retryCount;
    NSString * _storeIdentifier;
    bool  _storeIsAlive;
    int  _timeoutSeconds;
}

- (void).cxx_destruct;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)dealloc;
- (id)initForStore:(id)arg1;

@end
