
@interface HUTVViewingProfilesDevicesItemModule : HFItemModule {
    HMHome * _home;
    NSSet * _itemProviders;
    HFUserItem * _sourceItem;
    HFItemProvider * _viewingProfileItemProvider;
}

@property (nonatomic, readonly) HMMediaContentProfileAccessControl *accessControl;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) HFUserItem *sourceItem;
@property (nonatomic, retain) HFItemProvider *viewingProfileItemProvider;
@property (nonatomic, copy) NSArray *viewingProfilesDevices;

- (void).cxx_destruct;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (void)_createItemProviders;
- (id)accessControl;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 userItem:(id)arg2;
- (bool)isTVViewingProfileDevice:(id)arg1;
- (id)itemProviders;
- (void)setViewingProfileItemProvider:(id)arg1;
- (void)setViewingProfilesDevices:(id)arg1;
- (id)sourceItem;
- (void)turnOnTVViewingProfilesForAllDevices;
- (id)viewingProfileItemProvider;
- (id)viewingProfilesDevices;

@end
