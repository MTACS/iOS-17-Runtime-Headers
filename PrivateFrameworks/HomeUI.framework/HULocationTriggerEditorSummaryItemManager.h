
@interface HULocationTriggerEditorSummaryItemManager : HFItemManager <HUPresenceUserPickerItemModuleDelegate> {
    HUTriggerConditionEditorItemModule * _conditionEditorModule;
    HFItem * _locationItem;
    HFEventTriggerBuilder * _triggerBuilder;
    HUPresenceUserPickerItemModule * _userPickerModule;
    HFItem * _usersInstructionsItem;
}

@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *conditionEditorModule;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *locationItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;
@property (nonatomic, readonly) HUPresenceUserPickerItemModule *userPickerModule;
@property (nonatomic, retain) HFItem *usersInstructionsItem;

+ (id)locationSectionID;
+ (id)usersHeaderSectionID;
+ (id)usersListFooterSectionID;
+ (id)usersListSectionID;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_canEditLocation;
- (bool)_hasCustomLocation;
- (id)_userPickerOptions;
- (bool)canAddRegionToTriggerBuilder;
- (bool)canChangeLocation;
- (id)conditionEditorModule;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 triggerBuilder:(id)arg2;
- (bool)isInstructionsItem:(id)arg1;
- (id)locationEventRegion;
- (id)locationItem;
- (void)setLocationItem:(id)arg1;
- (void)setUsersInstructionsItem:(id)arg1;
- (id)triggerBuilder;
- (void)updateLocationEventWithRegion:(id)arg1;
- (id)userPickerModule;
- (void)userPickerModule:(id)arg1 didUpdatePresenceEvent:(id)arg2;
- (id)usersInstructionsItem;

@end
