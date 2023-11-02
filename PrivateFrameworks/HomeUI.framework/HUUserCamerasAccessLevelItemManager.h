
@interface HUUserCamerasAccessLevelItemManager : HFItemManager <HUUserItemManager> {
    NSArray * _accessLevelItems;
    HMHome * _homeForUser;
    HFItem * _removeItem;
}

@property (nonatomic, retain) NSArray *accessLevelItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *homeForUser;
@property (nonatomic, retain) HFItem *removeItem;
@property (nonatomic, retain) HFUserItem *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (unsigned long long)_accessLevelForUser:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_cameraAccessLevels;
- (id)_homeFuture;
- (bool)_isAllowedToEditTargetUser;
- (bool)_isEditingAllowedForUser:(id)arg1;
- (bool)_isUserBeingEditedTheDeviceUser;
- (bool)_isUserOwner:(id)arg1;
- (id)accessLevelItems;
- (id)homeForUser;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;
- (id)removeItem;
- (void)setAccessLevelItems:(id)arg1;
- (void)setHomeForUser:(id)arg1;
- (void)setRemoveItem:(id)arg1;
- (id)user;

@end
