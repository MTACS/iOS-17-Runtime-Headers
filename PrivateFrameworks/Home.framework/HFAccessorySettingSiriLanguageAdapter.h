
@interface HFAccessorySettingSiriLanguageAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating> {
    NSSet * _availableLanguageOptions;
    NSHashTable * _observers;
    HFSiriLanguageOption * _selectedLanguageOption;
}

@property (nonatomic, copy) NSSet *availableLanguageOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NAFuture *languageSettingFuture;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, retain) HFSiriLanguageOption *selectedLanguageOption;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (void)_dumpAvailableLanguageOptionsWithReason:(id)arg1;
- (id)_reloadLanguagesFromHomeKitNotifyingObservers:(bool)arg1;
- (void)addObserver:(id)arg1;
- (id)availableLanguageOptions;
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (id)languageSettingFuture;
- (id)observers;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption:(id)arg1;
- (id)preferredOutputVoiceOptionsForSelectedOption:(id)arg1;
- (id)preferredRecognitionLanguageOptionsForSelectedOption:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)selectedLanguageOption;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setSelectedLanguageOption:(id)arg1;
- (bool)shouldShowSettingsEntity:(id)arg1;
- (id)updateAvailableLanguageOptions:(id)arg1;
- (id)updateSelectedLanguageOption:(id)arg1;

@end
