
@interface CSLPRFPerApplicationSettingsModel : NSObject <CSLPRFApplicationLibraryObserving, CSLPRFPerApplicationSettingsDelegate, CSLPRFTwoWaySyncSettingDelegate> {
    <CSLPRFApplicationLibrary> * _applicationLibrary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <CSLPRFPerApplicationSettings> * _lock_globalSettings;
    NSMutableDictionary * _lock_settings;
    CSLPRFObservationHelper * _observationHelper;
    Class  _perApplicationSettingsClass;
    CSLPRFTwoWaySyncSetting * _syncedSettings;
}

@property (nonatomic, readonly) NSArray *allApplicationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_globalSettingsForCustomizedSettings:(id)arg1;
- (void)_processAddedOrUpdatedApplications:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allApplicationSettings;
- (void)applicationLibrary:(id)arg1 didAddApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didUpdateApplications:(id)arg2;
- (void)didUpdateSettings:(id)arg1;
- (id)globalSettings;
- (id)initWithApplicationLibrary:(id)arg1 perApplicationSettingsClass:(Class)arg2;
- (void)removeObserver:(id)arg1;
- (id)resolvedSettingsForApplication:(id)arg1;
- (id)resolvedSettingsForBundleIdentifier:(id)arg1;
- (id)settingsForApplication:(id)arg1;
- (id)settingsForBundleIdentifier:(id)arg1;
- (void)twoWaySyncSettingDidUpdate:(id)arg1;

@end
