
@interface HMDFetchedSettingsDriverPreferences : NSObject <HMDFetchedSettingsDriver, HMFLogging> {
    NSString * _prefix;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _userDefaults;
    <HMDFetchedSettingsDriverDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDFetchedSettingsDriverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (void)fetchSettingsForKeyPaths:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 userDefaults:(id)arg2 prefix:(id)arg3 defaultValues:(id)arg4;
- (void)languageValueListWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)startWithKeyPaths:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSettingWithKeyPath:(id)arg1 boolSettingValue:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingWithKeyPath:(id)arg1 integerSettingValue:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingWithKeyPath:(id)arg1 languageSettingValue:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingWithKeyPath:(id)arg1 primaryUserInfo:(id)arg2 completion:(id /* block */)arg3;

@end
