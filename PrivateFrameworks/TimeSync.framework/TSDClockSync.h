
@interface TSDClockSync : NSObject {
    unsigned long long  _asyncCallbackRefcon;
    unsigned long long  _clockIdentifier;
    IODConnection * _connection;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    unsigned long long  _referenceCount;
    IOKService * _service;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _serviceLock;
    NSPointerArray * _updateClients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _updateClientsLock;
}

@property (nonatomic, readonly) unsigned long long clockIdentifier;

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_handleNotification:(int)arg1 withArgs:(unsigned long long*)arg2 ofCount:(unsigned int)arg3;
- (void)_handleRefreshConnection;
- (void)addReference;
- (void)addUpdateClient:(id)arg1;
- (unsigned long long)clockIdentifier;
- (id)connection;
- (bool)deregisterAsyncCallback;
- (void)finalizeNotifications;
- (id)initWithClockIdentifier:(unsigned long long)arg1 pid:(int)arg2;
- (bool)registerAsyncCallback;
- (unsigned long long)releaseReference;
- (void)removeUpdateClient:(id)arg1;
- (id)service;

@end
