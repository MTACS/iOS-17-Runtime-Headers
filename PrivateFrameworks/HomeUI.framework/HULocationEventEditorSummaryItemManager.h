
@interface HULocationEventEditorSummaryItemManager : HFItemManager <HUPresenceUserPickerItemModuleDelegate> {
    HUTriggerConditionEditorItemModule * _conditionEditorModule;
    HUEventUIFlow * _flow;
    HFItem * _locationItem;
    HUPresenceUserPickerItemModule * _userPickerModule;
    HFItem * _usersInstructionsItem;
}

@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *conditionEditorModule;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUEventUIFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *locationItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUPresenceUserPickerItemModule *userPickerModule;
@property (nonatomic, retain) HFItem *usersInstructionsItem;

+ (id)locationSectionID;
+ (id)usersHeaderSectionID;
+ (id)usersListFooterSectionID;
+ (id)usersListSectionID;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_canEditLocation;
- (bool)_hasCustomLocation;
- (id)_userPickerOptions;
- (bool)canAddRegionToTriggerBuilder;
- (bool)canChangeLocation;
- (id)conditionEditorModule;
- (id)flow;
- (id)home;
- (id)initWithDelegate:(id)arg1 flow:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (bool)isInstructionsItem:(id)arg1;
- (id)locationEventRegion;
- (id)locationItem;
- (void)setFlow:(id)arg1;
- (void)setLocationItem:(id)arg1;
- (void)setUsersInstructionsItem:(id)arg1;
- (void)updateLocationEventWithRegion:(id)arg1;
- (id)userPickerModule;
- (void)userPickerModule:(id)arg1 didUpdatePresenceEvent:(id)arg2;
- (id)usersInstructionsItem;

@end
