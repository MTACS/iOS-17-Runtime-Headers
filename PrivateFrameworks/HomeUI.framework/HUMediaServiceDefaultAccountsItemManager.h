
@interface HUMediaServiceDefaultAccountsItemManager : HFItemManager <HUUserItemManager> {
    HUMediaServiceDefaultAccountsItemModule * _defaultAccountsItemModule;
    HFItem * _defaultAccountsTitleItem;
    HMHome * _homeForUser;
    HFItem * _removeItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HUMediaServiceDefaultAccountsItemModule *defaultAccountsItemModule;
@property (nonatomic, retain) HFItem *defaultAccountsTitleItem;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *homeForUser;
@property (nonatomic, retain) HFItem *removeItem;
@property (nonatomic, retain) HFUserItem *sourceItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)defaultAccountsItemModule;
- (id)defaultAccountsTitleItem;
- (id)homeForUser;
- (id)initWithHome:(id)arg1 sourceItem:(id)arg2 delegate:(id)arg3;
- (id)removeItem;
- (void)setDefaultAccountsItemModule:(id)arg1;
- (void)setDefaultAccountsTitleItem:(id)arg1;
- (void)setHomeForUser:(id)arg1;
- (void)setRemoveItem:(id)arg1;

@end
