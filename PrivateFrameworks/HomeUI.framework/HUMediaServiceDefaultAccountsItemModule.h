
@interface HUMediaServiceDefaultAccountsItemModule : HFItemModule <HUMediaServiceItemProviderDelegate> {
    HMHome * _home;
    NSSet * _itemProviders;
    HUMediaServiceItemProvider * _mediaServiceItemProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) HUMediaServiceItemProvider *mediaServiceItemProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (bool)containsItem:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (id)mediaServiceItemProvider;
- (void)mediaServiceItemProviderDidUpdateServices:(id)arg1;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (id)updateDefaultAccount:(id)arg1;

@end
