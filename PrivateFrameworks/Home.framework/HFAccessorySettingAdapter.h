
@interface HFAccessorySettingAdapter : NSObject <HFHomeKitSettingsObserver, HFMediaObjectObserver> {
    HMAccessory * _accessory;
    HFHomeKitDispatcher * _dispatcher;
    <HFHomeKitSettingsVendor> * _homeKitSettingsVendor;
    NSMutableDictionary * _keyPathStringToFuture;
    NSSet * _keyPaths;
    unsigned long long  _mode;
    HMSettings * _settings;
    id /* block */  _updateHandler;
    HFHomeKitSettingsValueManager * _valueManager;
    NSMutableDictionary * _watchedSettings;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFHomeKitDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitSettingsVendor> *homeKitSettingsVendor;
@property (nonatomic, retain) NSMutableDictionary *keyPathStringToFuture;
@property (nonatomic, readonly, copy) NSSet *keyPaths;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) HMSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ updateHandler;
@property (nonatomic, readonly) HFHomeKitSettingsValueManager *valueManager;
@property (nonatomic, retain) NSMutableDictionary *watchedSettings;

+ (id)createDefaultHomeSettingAdapterCollectionForProfile:(id)arg1;
+ (id)createDefaultHomeSettingAdapterCollectionWithoutMobileTimerAdapterForProfile:(id)arg1;

- (void).cxx_destruct;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (id)_endMonitoringSettingsKeyPath:(id)arg1;
- (id)_missingKeyPaths;
- (void)_reportUpdatedValueForSetting:(id)arg1;
- (bool)_setupKeyPaths;
- (void)_setupMissingKeyPaths;
- (void)_tearDownKeyPaths;
- (void)_teardownSetting:(id)arg1;
- (bool)_updateRootAccessorySettings;
- (bool)_updateRootAccessorySettingsIfNeeded;
- (void)_watchSetting:(id)arg1;
- (id)accessory;
- (id)dispatcher;
- (id)home;
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)homeKitSettingsVendor;
- (id)init;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandlerBlock:(id /* block */)arg3;
- (id)keyPathStringToFuture;
- (id)keyPaths;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (unsigned long long)mode;
- (void)setDispatcher:(id)arg1;
- (void)setKeyPathStringToFuture:(id)arg1;
- (void)setWatchedSettings:(id)arg1;
- (id)settingForKeyPath:(id)arg1;
- (id)settingWatchFutureForKeyPath:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 didUpdateForIdentifier:(id)arg2 keyPath:(id)arg3;
- (void)settings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3 homeKitObjectIdentifiers:(id)arg4;
- (void)settings:(id)arg1 willWriteValueForSettings:(id)arg2;
- (void)settingsDidUpdate:(id)arg1;
- (id /* block */)updateHandler;
- (id)updateSetting:(id)arg1 value:(id)arg2;
- (id)updateSettingWithKeyPath:(id)arg1 value:(id)arg2;
- (id)valueManager;
- (id)watchedSettings;

@end
