
@interface HUMediaServiceSettingsItemModule : HFItemModule <HUMediaServiceItemProviderDelegate> {
    HFStaticItem * _defaultAccountsItem;
    HMHome * _home;
    NSSet * _itemProviders;
    HUMediaServiceItemProvider * _mediaServiceItemProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HFStaticItem *defaultAccountsItem;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, retain) HUMediaServiceItemProvider *mediaServiceItemProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)defaultAccountsItem;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (id)mediaServiceItemProvider;
- (void)mediaServiceItemProviderDidUpdateServices:(id)arg1;
- (void)registerForExternalUpdates;
- (void)setDefaultAccountsItem:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMediaServiceItemProvider:(id)arg1;
- (void)unregisterForExternalUpdates;

@end
