
@interface HFActionSetSuggestionVendor : NSObject {
    HMActionSet * _actionSet;
    HFActionSetSuggestionFilter * _filter;
    HMHome * _home;
    NSArray * _services;
}

@property (nonatomic, readonly) HMActionSet *actionSet;
@property (nonatomic, readonly) HFActionSetSuggestionFilter *filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSArray *services;

+ (id)supportedBuiltInActionSetTypes;

- (void).cxx_destruct;
- (id)_actionBuildersForBuiltInActionSetWithType:(id)arg1 outDependentServiceTypes:(out id*)arg2;
- (id)_actionBuildersForCustomActionSet;
- (id)_actionBuildersForCustomActionSetWithService:(id)arg1;
- (id)_actionBuildersToSetLightbulbBrightness:(double)arg1;
- (id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg1;
- (id)_actionBuildersToSetPowerState:(bool)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetBlindsPositionOpen:(bool)arg1;
- (id)_actionBuildersToSetTargetDoorState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetLockState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetSecuritySystemState:(long long)arg1;
- (id)_controlItemValueSourceForService:(id)arg1;
- (id)_deriveActionForPrimaryCharacteristic:(id)arg1;
- (id)_deriveActionForPrimaryCharacteristic:(id)arg1 candidateServices:(id)arg2 targetThreshold:(double)arg3;
- (id)_deriveActionForSecondaryCharacteristic:(id)arg1 candidateServices:(id)arg2;
- (id)actionSet;
- (id)build;
- (id)buildWithOutDependentServiceTypes:(out id*)arg1;
- (id)filter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2 filter:(id)arg3;
- (id)services;

@end
