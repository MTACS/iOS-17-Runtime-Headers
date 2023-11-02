
@interface HUSiriTriggerPhraseSettingDetailsItemManager : HFItemManager <HFMediaAccessoryCommonSettingsDelegate> {
    HFStaticItem * _hsItem;
    HFStaticItem * _hsOrJSItem;
    HFTransformItemProvider * _siriDeviceItemProvider;
    HFTransformItemProvider * _siriOtherDeviceItemProvider;
    HFStaticItemProvider * _siriTriggerPhraseSelectionItemProvider;
    NSMutableSet * _unsupportedLanguageCodes;
    NSMutableOrderedSet * _unsupportedMediaAccessories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFStaticItem *hsItem;
@property (nonatomic, retain) HFStaticItem *hsOrJSItem;
@property (nonatomic, retain) HFTransformItemProvider *siriDeviceItemProvider;
@property (nonatomic, retain) HFTransformItemProvider *siriOtherDeviceItemProvider;
@property (nonatomic, retain) HFStaticItemProvider *siriTriggerPhraseSelectionItemProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *unsupportedLanguageCodes;
@property (nonatomic, retain) NSMutableOrderedSet *unsupportedMediaAccessories;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)hsItem;
- (id)hsOrJSItem;
- (id)initWithSourceItem:(id)arg1 delegate:(id)arg2;
- (void)mediaProfileContainer:(id)arg1 didUpdateSettingKeypath:(id)arg2 value:(id)arg3;
- (void)setHsItem:(id)arg1;
- (void)setHsOrJSItem:(id)arg1;
- (void)setSiriDeviceItemProvider:(id)arg1;
- (void)setSiriOtherDeviceItemProvider:(id)arg1;
- (void)setSiriTriggerPhraseSelectionItemProvider:(id)arg1;
- (void)setUnsupportedLanguageCodes:(id)arg1;
- (void)setUnsupportedMediaAccessories:(id)arg1;
- (id)siriDeviceItemProvider;
- (id)siriOtherDeviceItemProvider;
- (id)siriTriggerPhraseSelectionItemProvider;
- (id)unsupportedLanguageCodes;
- (id)unsupportedMediaAccessories;
- (id)updateSiriTriggerPhrase:(id)arg1;

@end
