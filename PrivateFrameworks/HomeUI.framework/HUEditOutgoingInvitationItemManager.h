
@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager> {
    HFStaticItem * _inviteAgainItem;
    HMHome * _overrideHome;
    HFStaticItem * _removeItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFStaticItem *inviteAgainItem;
@property (nonatomic, readonly) HMOutgoingHomeInvitation *outgoingInvitation;
@property (nonatomic, retain) HMHome *overrideHome;
@property (nonatomic, retain) HFStaticItem *removeItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_removeTitleForInvitationState:(long long)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 home:(id)arg3;
- (id)inviteAgainItem;
- (id)outgoingInvitation;
- (id)overrideHome;
- (id)removeItem;
- (void)setInviteAgainItem:(id)arg1;
- (void)setOverrideHome:(id)arg1;
- (void)setRemoveItem:(id)arg1;

@end
