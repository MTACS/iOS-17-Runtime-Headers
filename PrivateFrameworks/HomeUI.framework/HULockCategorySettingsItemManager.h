
@interface HULockCategorySettingsItemManager : HFItemManager <HFPinCodeManagerObserver> {
    HFStaticItem * _guestsItem;
    HFServiceItemProvider * _lockServiceItemProvider;
    HMHome * _overrideHome;
    HFPinCodeManager * _pinCodeManager;
    HFStaticItemProvider * _staticItemProvider;
    HFUserNotificationServiceTopic * _topic;
    HFUserItemProvider * _userItemProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFStaticItem *guestsItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFServiceItemProvider *lockServiceItemProvider;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, retain) HFPinCodeManager *pinCodeManager;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFUserNotificationServiceTopic *topic;
@property (nonatomic, retain) HFUserItemProvider *userItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)guestsItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 topic:(id)arg2 home:(id)arg3;
- (id)initWithDelegate:(id)arg1 topic:(id)arg2 pinCodeManager:(id)arg3 home:(id)arg4;
- (id)lockServiceItemProvider;
- (id)overrideHome;
- (id)pinCodeManager;
- (void)setGuestsItem:(id)arg1;
- (void)setLockServiceItemProvider:(id)arg1;
- (void)setPinCodeManager:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUserItemProvider:(id)arg1;
- (id)staticItemProvider;
- (id)topic;
- (id)userItemProvider;

@end
