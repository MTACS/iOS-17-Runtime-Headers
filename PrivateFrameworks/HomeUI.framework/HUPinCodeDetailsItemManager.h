
@interface HUPinCodeDetailsItemManager : HFItemManager <HFPinCodeManagerObserver> {
    HFStaticItem * _addOrShowHomeKeyItem;
    HFStaticItem * _deleteGuestPINCodeItem;
    HFAccessoryItemProvider * _locksItemProvider;
    bool  _operationInProgress;
    HMHome * _overrideHome;
    HFStaticItem * _personalPINCodeItem;
    HFStaticItem * _pinCodeChangeItem;
    HFStaticItem * _pinCodeLabelItem;
    HFPinCodeManager * _pinCodeManager;
    HFStaticItem * _pinCodeRestoreAccessItem;
    HFStaticItem * _pinCodeValueItem;
    NAFuture * _restoreFuture;
    HFStaticItem * _restoreHomeKeyAccessItem;
    HFTransformItemProvider * _transformedLocksItemProvider;
}

@property (nonatomic, retain) HFStaticItem *addOrShowHomeKeyItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HFStaticItem *deleteGuestPINCodeItem;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFAccessoryItemProvider *locksItemProvider;
@property (nonatomic) bool operationInProgress;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, retain) HFStaticItem *personalPINCodeItem;
@property (nonatomic, retain) HFStaticItem *pinCodeChangeItem;
@property (nonatomic, retain) HFStaticItem *pinCodeLabelItem;
@property (nonatomic, readonly) HFPinCodeManager *pinCodeManager;
@property (nonatomic, retain) HFStaticItem *pinCodeRestoreAccessItem;
@property (nonatomic, retain) HFStaticItem *pinCodeValueItem;
@property (nonatomic, retain) NAFuture *restoreFuture;
@property (nonatomic, retain) HFStaticItem *restoreHomeKeyAccessItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFTransformItemProvider *transformedLocksItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_itemsToUpdateWhenApplicationDidBecomeActive;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)addOrShowHomeKeyItem;
- (id)deleteGuestPINCodeItem;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 pinCodeManager:(id)arg3 home:(id)arg4;
- (id)locksItemProvider;
- (bool)operationInProgress;
- (id)overrideHome;
- (id)personalPINCodeItem;
- (id)pinCodeChangeItem;
- (id)pinCodeLabelItem;
- (id)pinCodeManager;
- (void)pinCodeManagerDidUpdate:(id)arg1 pinCodes:(id)arg2;
- (id)pinCodeRestoreAccessItem;
- (id)pinCodeValueItem;
- (id)restoreFuture;
- (id)restoreHomeKeyAccessItem;
- (void)setAddOrShowHomeKeyItem:(id)arg1;
- (void)setDeleteGuestPINCodeItem:(id)arg1;
- (void)setLocksItemProvider:(id)arg1;
- (void)setOperationInProgress:(bool)arg1;
- (void)setPersonalPINCodeItem:(id)arg1;
- (void)setPinCodeChangeItem:(id)arg1;
- (void)setPinCodeLabelItem:(id)arg1;
- (void)setPinCodeRestoreAccessItem:(id)arg1;
- (void)setPinCodeValueItem:(id)arg1;
- (void)setRestoreFuture:(id)arg1;
- (void)setRestoreHomeKeyAccessItem:(id)arg1;
- (void)setTransformedLocksItemProvider:(id)arg1;
- (id)transformedLocksItemProvider;

@end
