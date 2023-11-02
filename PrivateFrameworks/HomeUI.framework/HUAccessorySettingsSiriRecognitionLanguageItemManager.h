
@interface HUAccessorySettingsSiriRecognitionLanguageItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver, HFSiriLanguageOptionsManagerObserver> {
    HFItem<HFServiceLikeItem> * _accessoryItem;
    HFAccessorySettingSiriLanguageAdapter * _adapter;
    HUSiriLanguageOptionItemProvider * _optionItemProvider;
}

@property (nonatomic, retain) HFItem<HFServiceLikeItem> *accessoryItem;
@property (nonatomic, readonly) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) HFAccessorySettingGroupItem *groupItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUSiriLanguageOptionItemProvider *optionItemProvider;
@property (nonatomic, readonly) HFSiriLanguageOptionsManager *siriLanguageOptionsManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)accessoryItem;
- (id)adapter;
- (id)groupItem;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 accessorySettingItem:(id)arg2 accessoryItem:(id)arg3;
- (id)initWithDelegate:(id)arg1 groupItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)mediaProfileContainer;
- (id)optionItemProvider;
- (void)setAccessoryItem:(id)arg1;
- (void)setOptionItemProvider:(id)arg1;
- (void)siriLanguageAdapter:(id)arg1 availableLanguageOptionsDidChange:(id)arg2;
- (void)siriLanguageAdapter:(id)arg1 selectedLanguageOptionDidChange:(id)arg2;
- (id)siriLanguageOptionsManager;
- (void)siriLanguageOptionsManager:(id)arg1 availableLanguageOptionsDidChange:(id)arg2;
- (void)siriLanguageOptionsManager:(id)arg1 selectedLanguageOptionDidChange:(id)arg2;
- (id)updateSelectionWithOptionItem:(id)arg1;

@end
