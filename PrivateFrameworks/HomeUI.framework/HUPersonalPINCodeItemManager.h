
@interface HUPersonalPINCodeItemManager : HFItemManager {
    HFStaticItem * _createUserPINButtonItem;
    bool  _operationInProgress;
    HMHome * _overrideHome;
    HFStaticItem * _pinCodeChangeItem;
    HFPinCodeManager * _pinCodeManager;
    HFStaticItem * _pinCodeValueItem;
    HFStaticItem * _removeUserPINButtonItem;
    HFStaticItem * _shareButtonItem;
}

@property (nonatomic, retain) HFStaticItem *createUserPINButtonItem;
@property (nonatomic) bool operationInProgress;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, retain) HFStaticItem *pinCodeChangeItem;
@property (nonatomic, readonly) HFPinCodeManager *pinCodeManager;
@property (nonatomic, retain) HFStaticItem *pinCodeValueItem;
@property (nonatomic, retain) HFStaticItem *removeUserPINButtonItem;
@property (nonatomic, retain) HFStaticItem *shareButtonItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_itemsToUpdateForApplicationResignActive;
- (id)_itemsToUpdateWhenApplicationDidBecomeActive;
- (id)createUserPINButtonItem;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 item:(id)arg2 pinCodeManager:(id)arg3 home:(id)arg4;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (bool)operationInProgress;
- (id)overrideHome;
- (id)pinCodeChangeItem;
- (id)pinCodeManager;
- (id)pinCodeValueItem;
- (id)removeUserPINButtonItem;
- (void)setCreateUserPINButtonItem:(id)arg1;
- (void)setOperationInProgress:(bool)arg1;
- (void)setPinCodeChangeItem:(id)arg1;
- (void)setPinCodeValueItem:(id)arg1;
- (void)setRemoveUserPINButtonItem:(id)arg1;
- (void)setShareButtonItem:(id)arg1;
- (id)shareButtonItem;

@end
