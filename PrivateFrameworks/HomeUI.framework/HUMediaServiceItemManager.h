
@interface HUMediaServiceItemManager : HFItemManager {
    HMHome * _homeForUser;
    HUMediaServiceItem * _mediaServiceItem;
    HFItem * _reconnectItem;
    HFItem * _reconnectTitleItem;
    HFItem * _removeItem;
    HFItem * _updateListeningHistoryFooterItem;
    HFItem * _updateListeningHistoryItem;
    HFUserItem * _userItem;
    HUAccessorySettingsItemModule * _userSettingsItemModule;
}

@property (nonatomic, retain) HMHome *homeForUser;
@property (nonatomic, retain) HUMediaServiceItem *mediaServiceItem;
@property (nonatomic, retain) HFItem *reconnectItem;
@property (nonatomic, retain) HFItem *reconnectTitleItem;
@property (nonatomic, retain) HFItem *removeItem;
@property (nonatomic, retain) HFItem *updateListeningHistoryFooterItem;
@property (nonatomic, retain) HFItem *updateListeningHistoryItem;
@property (nonatomic, retain) HFUserItem *userItem;
@property (nonatomic, retain) HUAccessorySettingsItemModule *userSettingsItemModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_hasAuthFatalError;
- (bool)_isAppleMusicService;
- (id)homeForUser;
- (id)initWithDelegate:(id)arg1;
- (id)initWithHome:(id)arg1 mediaServiceItem:(id)arg2 delegate:(id)arg3;
- (id)mediaServiceItem;
- (id)reconnectItem;
- (id)reconnectTitleItem;
- (id)removeItem;
- (void)setHomeForUser:(id)arg1;
- (void)setMediaServiceItem:(id)arg1;
- (void)setReconnectItem:(id)arg1;
- (void)setReconnectTitleItem:(id)arg1;
- (void)setRemoveItem:(id)arg1;
- (void)setUpdateListeningHistoryFooterItem:(id)arg1;
- (void)setUpdateListeningHistoryItem:(id)arg1;
- (void)setUserItem:(id)arg1;
- (void)setUserSettingsItemModule:(id)arg1;
- (id)updateListeningHistoryFooterItem;
- (id)updateListeningHistoryItem;
- (id)userItem;
- (id)userSettingsItemModule;

@end
