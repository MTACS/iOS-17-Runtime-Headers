
@interface HURemoteAccessItemManager : HFItemManager <HUUserItemManager> {
    HFItem * _allowRemoteAccessFooterItem;
    HFItem * _allowRemoteAccessItem;
    HMHome * _homeForUser;
    HFItem * _removeItem;
}

@property (nonatomic, retain) HFItem *allowRemoteAccessFooterItem;
@property (nonatomic, retain) HFItem *allowRemoteAccessItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *homeForUser;
@property (nonatomic, retain) HFItem *removeItem;
@property (nonatomic, retain) HFUserItem *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_hasResidentDevice;
- (id)_homeFuture;
- (bool)_isAllowedToEditTargetUser;
- (bool)_isEditingAllowedForUser:(id)arg1;
- (bool)_isRemoteAccessAllowedForUser:(id)arg1;
- (bool)_isUserBeingEditedTheDeviceUser;
- (bool)_isUserOwner:(id)arg1;
- (id)allowRemoteAccessFooterItem;
- (id)allowRemoteAccessItem;
- (id)homeForUser;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;
- (id)removeItem;
- (void)setAllowRemoteAccessFooterItem:(id)arg1;
- (void)setAllowRemoteAccessItem:(id)arg1;
- (void)setHomeForUser:(id)arg1;
- (void)setRemoveItem:(id)arg1;
- (id)user;

@end
