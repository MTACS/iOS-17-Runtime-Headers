
@interface WFBluetoothSettingsClient : WFSettingsClient <WFBooleanStateSetting> {
    id /* block */  _availabilityCompletion;
    BluetoothManager * _manager;
    NSMutableDictionary * _observeBlocksPerDeviceType;
}

@property (nonatomic, copy) id /* block */ availabilityCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BluetoothManager *manager;
@property (nonatomic, readonly) NSMutableDictionary *observeBlocksPerDeviceType;
@property (readonly) Class superclass;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)availabilityChanged:(id)arg1;
- (id /* block */)availabilityCompletion;
- (void)dealloc;
- (void)devicesChanged:(id)arg1;
- (void)getPairedDevicesMatchingType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithBluetoothManager:(id)arg1;
- (id)manager;
- (id)observeBlocksPerDeviceType;
- (void)observePairedDevicesMatchingType:(unsigned long long)arg1 update:(id /* block */)arg2;
- (void)registerForNotifications;
- (void)setAvailabilityCompletion:(id /* block */)arg1;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)waitForAvailabilityWithCompletionHandler:(id /* block */)arg1;

@end
