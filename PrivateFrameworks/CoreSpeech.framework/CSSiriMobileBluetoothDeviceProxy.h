
@interface CSSiriMobileBluetoothDeviceProxy : NSObject <AFBluetoothDevice, AFInvalidating> {
    NSString * _address;
    CSSiriMobileBluetoothDeviceDataSource * _dataSource;
    AFBluetoothDeviceInfo * _deviceInfo;
    NSUUID * _deviceUID;
    AFBluetoothHeadphoneInEarDetectionState * _headphoneInEarDetectionState;
    long long  _headphoneListeningMode;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSUUID *deviceUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessBTDeviceAndAccessoryManagerUsingBlock:(id /* block */)arg1;
- (void)_enumerateObserversUsingBlock:(id /* block */)arg1;
- (void)_fetchDeviceInfoWithCompletion:(id /* block */)arg1;
- (void)_getDeviceInfo:(id /* block */)arg1;
- (void)_invalidate;
- (void)_reload:(bool)arg1;
- (void)_updateDeviceInfo:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)address;
- (void)connect:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceInfo;
- (id)deviceUID;
- (void)disconnect:(id /* block */)arg1;
- (void)getDeviceInfo:(id /* block */)arg1;
- (void)getHeadphoneInEarDetectionState:(id /* block */)arg1;
- (void)getHeadphoneListeningMode:(id /* block */)arg1;
- (id)identifier;
- (id)initWithAddress:(id)arg1 dataSource:(id)arg2 queue:(id)arg3;
- (id)initWithDeviceUID:(id)arg1 dataSource:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (void)prewarm;
- (void)reload;
- (void)removeObserver:(id)arg1;
- (void)setHeadphoneListeningMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateDeviceInfo:(id)arg1;

@end
