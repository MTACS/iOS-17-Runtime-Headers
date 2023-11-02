
@interface HUTVViewingProfilesEditorItemManager : HFItemManager {
    HUTVViewingProfilesDevicesItemModule * _tvpDevicesModule;
}

@property (nonatomic, readonly) HUTVViewingProfilesDevicesItemModule *tvpDevicesModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 userItem:(id)arg2;
- (id)tvpDevicesModule;

@end
