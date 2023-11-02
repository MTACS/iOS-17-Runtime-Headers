
@interface CRSUIClusterWindow : CRSUIWindow <CRSUIClusterZoomActionDelegate, _UISceneSettingsDiffAction> {
    CRSUIInstrumentClusterSettingsDiffInspector * _clusterSettingsDiffInspector;
    CARObserverHashTable * _observers;
}

@property (nonatomic, retain) CRSUIInstrumentClusterSettingsDiffInspector *clusterSettingsDiffInspector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clusterSettings;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)addClusterSettingsObserver:(id)arg1;
- (id)clusterSettingsDiffInspector;
- (void)commonInit;
- (unsigned long long)compassSetting;
- (unsigned long long)etaSetting;
- (void)handleZoomInDirection:(long long)arg1;
- (unsigned long long)itemType;
- (unsigned long long)layoutJustification;
- (id)observers;
- (void)removeClusterSettingsObserver:(id)arg1;
- (void)setClusterSettingsDiffInspector:(id)arg1;
- (void)setObservers:(id)arg1;
- (unsigned long long)speedLimitSetting;

@end
