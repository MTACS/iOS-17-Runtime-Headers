
@interface HMAccessorySettingsController : NSObject <HMFLogging> {
    _HMContext * _context;
    <HMAccessorySettingsControllerDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMAccessorySettingsMessenger * _messenger;
    <HMAccessorySettingsMessengerFactory> * _messengerFactory;
    HMAccessorySettingsMetricsDispatcher * _metricsDispatcher;
}

@property (readonly) _HMContext *context;
@property <HMAccessorySettingsControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <HMAccessorySettingsMessengerFactory> *messengerFactory;
@property (readonly) HMAccessorySettingsMetricsDispatcher *metricsDispatcher;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;

- (void).cxx_destruct;
- (id)context;
- (id)dataSource;
- (id)dataSourceHomeWithHomeIdentifier:(id)arg1;
- (id)initWithContext:(id)arg1 messengerFactory:(id)arg2 metricsDispatcher:(id)arg3;
- (id)messengerFactory;
- (id)messengerWithHomeUUID:(id)arg1;
- (id)metricsDispatcher;
- (void)setDataSource:(id)arg1;
- (void)setMessengerFactory:(id)arg1;
- (void)updateAccessorySettingWithAccessoryIdentifier:(id)arg1 keyPath:(id)arg2 settingValue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateAccessorySettingWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPath:(id)arg3 settingValue:(id)arg4 completionHandler:(id /* block */)arg5;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_updateAccessorySettingWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPath:(id)arg3 settingValue:(id)arg4;

@end
