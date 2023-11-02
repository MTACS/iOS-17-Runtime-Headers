
@interface NPKIDVRemoteDeviceServiceEventsCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _remoteProcessNotificationQueue;
    NPKIDVRemoteDeviceServiceContext * _serviceContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _serviceContextLock;
    NSString * _serviceContextPath;
}

@property (nonatomic, readonly) NSString *remoteDeviceID;

- (void).cxx_destruct;
- (void)_insideLockPersistServiceContext;
- (void)_notifyProcessWithServiceNames:(id)arg1 deviceEvent:(unsigned long long)arg2 forDeviceID:(id)arg3;
- (id)init;
- (void)initializeWithDevice:(id)arg1;
- (void)insideLockTeardownCurrentRemoteDeviceContextWithReason:(unsigned long long)arg1;
- (unsigned long long)registerEvents:(unsigned long long)arg1 forServiceName:(id)arg2;
- (id)remoteDeviceID;
- (void)setNeedsPrearmCredential:(bool)arg1;
- (void)teardownCurrentRemoteDeviceContextWithReason:(unsigned long long)arg1;
- (unsigned long long)unregisterEvents:(unsigned long long)arg1 forServiceName:(id)arg2;

@end
