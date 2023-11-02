
@interface HMDFetchedSettingsDriverHomePodSettings : NSObject <HMDFetchedSettingsDriver, HMDHPSAccessorySettingServiceDelegate, HMFLogging> {
    <HMDFetchedSettingsDriverDelegate> * _delegate;
    <HMDHPSSettingsObjectFactoryProtocol> * _hmdhpsObjectFactory;
    NSObject<OS_dispatch_queue> * _queue;
    <HMDHPSAccessorySettingService> * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDFetchedSettingsDriverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMDHPSSettingsObjectFactoryProtocol> *hmdhpsObjectFactory;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) <HMDHPSAccessorySettingService> *service;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_hpLanguageValueFromLanguageValue:(id)arg1;
- (id)_languageValueList;
- (void)_processReadResults:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_readSettingsAtKeyPaths:(id)arg1 completion:(id /* block */)arg2;
- (id)_transformPreferredMediaUserEvent:(id)arg1;
- (id)_transformToImmutableSetting:(id)arg1;
- (void)_writeSetting:(id)arg1 keyPath:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (void)didReconnect;
- (void)didUpdateSetting:(id)arg1 forKeyPath:(id)arg2;
- (void)fetchSettingsForKeyPaths:(id)arg1 completion:(id /* block */)arg2;
- (id)hmdhpsObjectFactory;
- (id)initWithQueue:(id)arg1 settingsObjectFactory:(id)arg2;
- (void)languageValueListWithCompletion:(id /* block */)arg1;
- (id)queue;
- (id)service;
- (void)serviceDidInitializeForCurrentAccessory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startWithKeyPaths:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSettingWithKeyPath:(id)arg1 boolSettingValue:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingWithKeyPath:(id)arg1 integerSettingValue:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingWithKeyPath:(id)arg1 languageSettingValue:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingWithKeyPath:(id)arg1 primaryUserInfo:(id)arg2 completion:(id /* block */)arg3;

@end
