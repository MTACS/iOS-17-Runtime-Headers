
@interface HUQuickControlPresentationItemManager : HFItemManager {
    HFAccessoryItemProvider * _accessoryItemProvider;
    HFCameraItemProvider * _cameraItemProvider;
    HFGenericAccessoryItemProvider * _genericItemProvider;
    NSUUID * _homeKitObjectUUID;
    HFMediaAccessoryItemProvider * _mediaAccessoryItemProvider;
    unsigned long long  _presentationItemType;
    HFProgrammableSwitchItemProvider * _programmableSwitchItemProvider;
    HFServiceItemProvider * _serviceItemProvider;
    HFTargetControlItemProvider * _targetControlItemProvider;
}

@property (nonatomic, retain) HFAccessoryItemProvider *accessoryItemProvider;
@property (nonatomic, retain) HFCameraItemProvider *cameraItemProvider;
@property (nonatomic, retain) HFGenericAccessoryItemProvider *genericItemProvider;
@property (nonatomic, readonly) NSUUID *homeKitObjectUUID;
@property (nonatomic, retain) HFMediaAccessoryItemProvider *mediaAccessoryItemProvider;
@property (nonatomic, readonly) unsigned long long presentationItemType;
@property (nonatomic, retain) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider;
@property (nonatomic, retain) HFServiceItemProvider *serviceItemProvider;
@property (nonatomic, retain) HFTargetControlItemProvider *targetControlItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (bool)_shouldDisableOptionalDataDuringFastInitialUpdate;
- (id)accessoryItemProvider;
- (id)cameraItemProvider;
- (id)genericItemProvider;
- (id)homeKitObjectUUID;
- (id)initWithHomeKitObjectUUID:(id)arg1 type:(unsigned long long)arg2;
- (id)mediaAccessoryItemProvider;
- (unsigned long long)presentationItemType;
- (id)programmableSwitchItemProvider;
- (id)serviceItemProvider;
- (void)setAccessoryItemProvider:(id)arg1;
- (void)setCameraItemProvider:(id)arg1;
- (void)setGenericItemProvider:(id)arg1;
- (void)setMediaAccessoryItemProvider:(id)arg1;
- (void)setProgrammableSwitchItemProvider:(id)arg1;
- (void)setServiceItemProvider:(id)arg1;
- (void)setTargetControlItemProvider:(id)arg1;
- (id)targetControlItemProvider;

@end
