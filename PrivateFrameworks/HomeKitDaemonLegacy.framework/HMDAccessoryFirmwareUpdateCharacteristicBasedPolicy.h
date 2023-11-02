
@interface HMDAccessoryFirmwareUpdateCharacteristicBasedPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate> {
    NSString * _characteristicType;
    unsigned long long  _debounceDuration;
    HMFTimer * _debounceTimer;
    id /* block */  _policyHandler;
    NSString * _serviceType;
}

@property (readonly) HMDCharacteristic *characteristic;
@property (readonly) NSString *characteristicType;
@property (readonly) unsigned long long debounceDuration;
@property (nonatomic, retain) HMFTimer *debounceTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id /* block */ policyHandler;
@property (readonly) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_policyStatusFromCharacteristic:(id)arg1;
- (void)_startDebounceTimer;
- (void)_stopDebounceTimer;
- (id)characteristic;
- (id)characteristicType;
- (void)configure;
- (void)dealloc;
- (unsigned long long)debounceDuration;
- (id)debounceTimer;
- (bool)evaluate;
- (void)handleCharacteristicValuesChanged:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 serviceType:(id)arg2 characteristicType:(id)arg3 debounceDuration:(unsigned long long)arg4 policyHandler:(id /* block */)arg5 workQueue:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id /* block */)policyHandler;
- (void)registerForNotifications;
- (id)serviceType;
- (void)setDebounceTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
