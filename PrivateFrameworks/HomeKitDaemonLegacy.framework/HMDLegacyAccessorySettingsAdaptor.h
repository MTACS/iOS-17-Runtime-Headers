
@interface HMDLegacyAccessorySettingsAdaptor : NSObject <HMDLegacyAccessorySettingsAdaptor, HMEEventConsumer, HMFLogging> {
    NSUUID * _accessoryUUID;
    <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> * _currentAccessorySettingsController;
    NSUUID * _homeUUID;
    NSObject<OS_dispatch_queue> * _queue;
    <HMESubscriptionProviding> * _subscriptionProvider;
    <HMDLegacyAccessorySettingsAdaptorDelegate> * delegate;
}

@property (nonatomic, readonly) NSUUID *accessoryUUID;
@property (nonatomic, readonly) <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> *currentAccessorySettingsController;
@property (readonly, copy) NSString *debugDescription;
@property <HMDLegacyAccessorySettingsAdaptorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) <HMESubscriptionProviding> *subscriptionProvider;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)parsedBoolSettingEvent:(id)arg1 topic:(id)arg2;
+ (id)parsedIntegerSettingEvent:(id)arg1 topic:(id)arg2;
+ (id)parsedLanguageListSetting:(id)arg1 topic:(id)arg2;
+ (id)parsedLanguageSetting:(id)arg1 topic:(id)arg2;

- (void).cxx_destruct;
- (id)_settingValueForKeyPath:(id)arg1 value:(id)arg2;
- (id)_transformLegacyLanguageSettingValueToImmutableSetting:(id)arg1;
- (id)accessoryUUID;
- (id)currentAccessorySettingsController;
- (id)delegate;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)homeUUID;
- (id)initWithQueue:(id)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3 settingsController:(id)arg4 subscriptionProvider:(id)arg5;
- (id)languageValueList;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)startup;
- (id)subscriptionProvider;
- (void)updateSettingWithKeyPath:(id)arg1 settingValue:(id)arg2 completion:(id /* block */)arg3;

@end
