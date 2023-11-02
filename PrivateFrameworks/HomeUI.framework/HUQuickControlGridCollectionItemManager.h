
@interface HUQuickControlGridCollectionItemManager : HFItemManager <HFHomeKitAccessorySettingsDataSourceDelegate, HUQuickControlCollectionItemManaging> {
    HFAccessoryControlItem * _accessoryControlItem;
    NSNumber * _airPlayEnabledSettingNumberValue;
    HFItemProvider * _controlItemProvider;
    NSMapTable * _controlItemToQuickControlContextTable;
    NSSet * _controlItems;
    bool  _isRTL;
    bool  _isSpeakerAccessory;
    NSArray * _mediaControlItems;
    HFItemProvider * _overflowItemProvider;
    HFServiceItemProvider * _serviceItemProvider;
    HFItem<HFServiceLikeItem> * _sourceServiceLikeItem;
    HFItemProvider * _supplementaryItemProvider;
}

@property (nonatomic, copy) HFAccessoryControlItem *accessoryControlItem;
@property (nonatomic, retain) NSNumber *airPlayEnabledSettingNumberValue;
@property (nonatomic, retain) HFItemProvider *controlItemProvider;
@property (nonatomic, retain) NSMapTable *controlItemToQuickControlContextTable;
@property (nonatomic, retain) NSSet *controlItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRTL;
@property (nonatomic) bool isSpeakerAccessory;
@property (nonatomic, retain) NSArray *mediaControlItems;
@property (nonatomic, readonly) HFItemProvider *overflowItemProvider;
@property (nonatomic, retain) HFServiceItemProvider *serviceItemProvider;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *sourceServiceLikeItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFItemProvider *supplementaryItemProvider;

+ (bool)isPrimaryOrBinaryStateControlItem:(id)arg1;
+ (unsigned long long)preferredControlForControlItem:(id)arg1 allControlItems:(id)arg2 isSupplementary:(bool)arg3;
+ (id /* block */)serviceItemComparator;
+ (unsigned long long)specialCaseSectionSortingForControlItem:(id)arg1 quickControlContext:(id)arg2 fromControlItems:(id)arg3 primaryServiceType:(id)arg4;

- (void).cxx_destruct;
- (void)_addMediaAlarmsAndTimers:(id)arg1 toSections:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_catchAllLayoutForGridViewProfiles:(id)arg1 supplementaryViewProfiles:(id)arg2;
- (id)_composeIdentifierForService:(id)arg1 section:(unsigned long long)arg2;
- (id)_findAndRemoveMediaAlarmsAndTimerItemsFromSection:(id)arg1;
- (id)_findAndRemoveMediaControlItemsFromSection:(id)arg1;
- (id)_generateQuickControlGroupContextForControlItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_mediaAlarmsAndTimerItemsFromControlItems:(id)arg1;
- (bool)_shouldDisableOptionalDataDuringFastInitialUpdate;
- (id)accessoryControlItem;
- (id)airPlayEnabledSettingNumberValue;
- (id)configuration;
- (id)controlItemProvider;
- (id)controlItemToQuickControlContextTable;
- (id)controlItems;
- (id)gridItemProvider;
- (id)headerAccessoryButtonTargetForSection:(unsigned long long)arg1;
- (id)headerAccessoryButtonTitleForSection:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 controlItems:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (bool)isRTL;
- (bool)isSpeakerAccessory;
- (id)mediaControlItems;
- (id)overflowItemProvider;
- (id)quickControlContextForItem:(id)arg1;
- (id)serviceItemProvider;
- (void)setAccessoryControlItem:(id)arg1;
- (void)setAirPlayEnabledSettingNumberValue:(id)arg1;
- (void)setControlItemProvider:(id)arg1;
- (void)setControlItemToQuickControlContextTable:(id)arg1;
- (void)setControlItems:(id)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setIsSpeakerAccessory:(bool)arg1;
- (void)setMediaControlItems:(id)arg1;
- (void)setServiceItemProvider:(id)arg1;
- (void)setSourceServiceLikeItem:(id)arg1;
- (id)sourceItem;
- (id)sourceServiceLikeItem;
- (id)supplementaryItemProvider;
- (void)tearDown;
- (id)titleForItem:(id)arg1;
- (void)updateSettingValue:(id)arg1 forKeyPath:(id)arg2;

@end
