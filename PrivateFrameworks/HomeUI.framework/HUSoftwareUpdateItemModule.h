
@interface HUSoftwareUpdateItemModule : HFItemModule {
    NSSet * _accessories;
    bool  _hideAppleUpdates;
    bool  _hideThirdPartyUpdates;
    HMHome * _home;
    HUSoftwareUpdateInfoItemProvider * _softwareUpdateInfoItemProvider;
    HFItem<HFSoftwareUpdatableItemProtocol> * _sourceItem;
}

@property (nonatomic, readonly) NSSet *accessories;
@property (nonatomic) bool hideAppleUpdates;
@property (nonatomic) bool hideThirdPartyUpdates;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HUSoftwareUpdateInfoItemProvider *softwareUpdateInfoItemProvider;
@property (nonatomic, readonly) HFItem<HFSoftwareUpdatableItemProtocol> *sourceItem;

- (void).cxx_destruct;
- (void)_reloadItemProviders;
- (id)accessories;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (bool)hideAppleUpdates;
- (bool)hideThirdPartyUpdates;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;
- (void)setHideAppleUpdates:(bool)arg1;
- (void)setHideThirdPartyUpdates:(bool)arg1;
- (void)setSoftwareUpdateInfoItemProvider:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)softwareUpdateInfoItemProvider;
- (id)sourceItem;

@end
