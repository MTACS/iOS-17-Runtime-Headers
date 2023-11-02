
@interface HUAccessorySettingsSiriOutputVoiceItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver, HFSiriLanguageOptionsManagerObserver> {
    HUSiriLanguageOptionItemProvider * _accentOptionItemProvider;
    HFAccessorySettingSiriLanguageAdapter * _adapter;
    HUSiriLanguageOptionItemProvider * _genderOptionItemProvider;
    HFSiriLanguageOptionsManager * _siriLanguageOptionsManager;
}

@property (nonatomic, retain) HUSiriLanguageOptionItemProvider *accentOptionItemProvider;
@property (nonatomic, readonly) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUSiriLanguageOptionItemProvider *genderOptionItemProvider;
@property (nonatomic, readonly, copy) HFAccessorySettingGroupItem *groupItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFSiriLanguageOptionsManager *siriLanguageOptionsManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)accentOptionItemProvider;
- (id)adapter;
- (void)dealloc;
- (id)genderOptionItemProvider;
- (id)groupItem;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 groupItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 siriLanguageOptionsManager:(id)arg2 sourceItem:(id)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)setAccentOptionItemProvider:(id)arg1;
- (void)setGenderOptionItemProvider:(id)arg1;
- (void)setSiriLanguageOptionsManager:(id)arg1;
- (void)siriLanguageAdapter:(id)arg1 availableLanguageOptionsDidChange:(id)arg2;
- (void)siriLanguageAdapter:(id)arg1 selectedLanguageOptionDidChange:(id)arg2;
- (id)siriLanguageOptionsManager;
- (void)siriLanguageOptionsManager:(id)arg1 availableLanguageOptionsDidChange:(id)arg2;
- (void)siriLanguageOptionsManager:(id)arg1 selectedLanguageOptionDidChange:(id)arg2;
- (id)updateSelectionWithOptionItem:(id)arg1;

@end
