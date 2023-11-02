
@interface HUUsersAndGuestsPinCodeItemManager : HFItemManager {
    HMAccessory * _accessory;
    HMHome * _overrideHome;
    HFPinCodeManager * _pinCodeManager;
    NAFuture * _restoreFuture;
    HFStaticItem * _restoreHomeKeyAccessItem;
    HFUserItemProvider * _userItemProvider;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, retain) HFPinCodeManager *pinCodeManager;
@property (nonatomic, retain) NAFuture *restoreFuture;
@property (nonatomic, retain) HFStaticItem *restoreHomeKeyAccessItem;
@property (nonatomic, retain) HFUserItemProvider *userItemProvider;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)accessory;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithPinCodeManager:(id)arg1 delegate:(id)arg2 home:(id)arg3 forAccessory:(id)arg4;
- (id)overrideHome;
- (id)pinCodeManager;
- (id)restoreFuture;
- (id)restoreHomeKeyAccessItem;
- (void)setAccessory:(id)arg1;
- (void)setPinCodeManager:(id)arg1;
- (void)setRestoreFuture:(id)arg1;
- (void)setRestoreHomeKeyAccessItem:(id)arg1;
- (void)setUserItemProvider:(id)arg1;
- (id)userItemProvider;

@end
