
@interface HUPresenceUserPickerItemModule : HFItemModule {
    NSDictionary * _activationOptionStateByGranularity;
    <HUPresenceUserPickerItemModuleDelegate> * _delegate;
    HUPresenceLocationDeviceFooterItem * _footerItem;
    HMHome * _home;
    HULocationDeviceManager * _locationDeviceManager;
    HUPresenceUserPickerItemModuleOptions * _options;
    HFPresenceEventBuilder * _presenceEventBuilder;
    HUPresenceActivationOptionItem * _singleUserSummaryItem;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, readonly) NSDictionary *activationOptionStateByGranularity;
@property (nonatomic) <HUPresenceUserPickerItemModuleDelegate> *delegate;
@property (nonatomic, readonly) HFItem *footerItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;
@property (nonatomic, retain) HUPresenceUserPickerItemModuleOptions *options;
@property (nonatomic, readonly) HFPresenceEventBuilder *presenceEventBuilder;
@property (nonatomic, readonly) HFItem *singleUserSummaryItem;
@property (nonatomic, readonly) HFStaticItemProvider *staticItemProvider;

+ (id /* block */)_userItemComparator;
+ (id)footerSectionID;
+ (id)sectionID;

- (void).cxx_destruct;
- (unsigned long long)_activationGranularityForUserItem:(id)arg1;
- (id)_allSelectedAndSupportedUsers;
- (bool)_canDeselectUserHandle:(id)arg1;
- (void)_createItemProviders;
- (bool)_isPresenceAuthorizedForUser:(id)arg1;
- (bool)_isUserHandleSelected:(id)arg1;
- (void)_resetSelectionForCustomLocation;
- (bool)_shouldUseSingleUserStyle;
- (id)_sortedActivationGranularities;
- (void)_updateSelected:(bool)arg1 forUserHandle:(id)arg2;
- (id)activationOptionItemForGranularity:(unsigned long long)arg1;
- (id)activationOptionStateByGranularity;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)confirmationPromptForOptionItem:(id)arg1;
- (id)delegate;
- (void)deselectUserItem:(id)arg1;
- (id)footerItem;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 presenceEvent:(id)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)itemProviders;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (id)locationDeviceManager;
- (id)options;
- (id)presenceEventBuilder;
- (void)selectActivationOptionItem:(id)arg1;
- (void)selectUserItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(id)arg1;
- (id)singleUserSummaryItem;
- (id)stateForActivationOptionItem:(id)arg1;
- (id)stateForUserItem:(id)arg1;
- (id)staticItemProvider;
- (void)toggleExpandedForActivationOptionItem:(id)arg1;

@end
