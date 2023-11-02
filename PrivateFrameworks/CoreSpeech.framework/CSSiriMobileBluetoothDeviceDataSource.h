
@interface CSSiriMobileBluetoothDeviceDataSource : NSObject <AFInvalidating> {
    struct BTAccessoryManagerImpl { } * _accessoryManager;
    bool  _attachingToSession;
    NSMutableDictionary * _deviceProxiesByAddress;
    NSMutableDictionary * _deviceProxiesByDeviceUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deviceProxiesLock;
    struct BTLocalDeviceImpl { } * _localDevice;
    NSObject<OS_dispatch_queue> * _queue;
    struct BTSessionImpl { } * _session;
    NSObject<OS_dispatch_group> * _sessionSetupGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attachToSession;
- (void)_cleanUpDeviceProxies;
- (void)_detachFromSession;
- (id)_deviceProxies;
- (id)_deviceProxyWithAddress:(id)arg1 createsIfAbsent:(bool)arg2;
- (id)_deviceProxyWithUID:(id)arg1 createsIfAbsent:(bool)arg2;
- (void)_reloadForDevice:(struct BTDeviceImpl { }*)arg1;
- (void)_sessionAttached:(struct BTSessionImpl { }*)arg1 result:(int)arg2;
- (void)_sessionDetached:(struct BTSessionImpl { }*)arg1;
- (void)_sessionTerminated:(struct BTSessionImpl { }*)arg1;
- (void)_setUpAccessoryManager;
- (void)_setUpLocalDevice;
- (void)_tearDownAccessoryManager;
- (void)_tearDownLocalDevice;
- (void)accessoryManager:(struct BTAccessoryManagerImpl { }*)arg1 event:(int)arg2 device:(struct BTDeviceImpl { }*)arg3 state:(int)arg4;
- (void)device:(struct BTDeviceImpl { }*)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;
- (id)deviceWithAddress:(id)arg1;
- (id)deviceWithUID:(id)arg1;
- (void)getBTDeviceWithAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)getBTDeviceWithDeviceUID:(id)arg1 completion:(id /* block */)arg2;
- (void)getBTLocalDeviceWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)localDevice:(struct BTLocalDeviceImpl { }*)arg1 event:(int)arg2 result:(int)arg3;

@end
