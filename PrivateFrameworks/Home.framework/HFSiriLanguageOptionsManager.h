
@interface HFSiriLanguageOptionsManager : NSObject <HFAccessorySettingAdapterDisplayArbitrating, HFAccessorySettingsManagerProtocol, HFHomeKitAccessorySettingsDataSourceDelegate> {
    NSUUID * _accessoryIdentifier;
    NSSet * _availableLanguageOptions;
    NAFuture * _availableLanguagesFuture;
    HMHome * _home;
    NSHashTable * _observers;
    HFSiriLanguageOption * _selectedLanguageOption;
    HMAccessorySettingsController * _settingsController;
}

@property (nonatomic, retain) NSUUID *accessoryIdentifier;
@property (nonatomic, copy) NSSet *availableLanguageOptions;
@property (nonatomic, retain) NAFuture *availableLanguagesFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, retain) HFSiriLanguageOption *selectedLanguageOption;
@property (nonatomic, retain) HMAccessorySettingsController *settingsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchAvailableLanguagesAndGenerateOptions;
- (id)_settingKeyPaths;
- (void)_subscribeToSiriLanguageSettings;
- (void)_updateSettingsAndNotifyObservers:(id)arg1;
- (id)accessoryIdentifier;
- (void)addObserver:(id)arg1;
- (id)availableLanguageOptions;
- (id)availableLanguagesFuture;
- (id)availableSiriLanguageOptions;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg1 settings:(id)arg2;
- (id)home;
- (id)initWithSettingsController:(id)arg1 accessoryIdentifier:(id)arg2 home:(id)arg3;
- (id)initWithSettingsController:(id)arg1 sourceItem:(id)arg2 home:(id)arg3;
- (id)observers;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption;
- (id)preferredOutputVoiceOptionsForSelectedOption;
- (id)preferredRecognitionLanguageOptionsForSelectedOption;
- (void)removeObserver:(id)arg1;
- (id)selectedLanguageOption;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setAvailableLanguagesFuture:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setSelectedLanguageOption:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (id)settingsController;
- (bool)shouldShowSettingsEntity:(id)arg1;
- (id)updateSelectedLanguageOption:(id)arg1;
- (id)updateSelectedLanguageOption:(id)arg1 accessoryIdentifier:(id)arg2;

@end
