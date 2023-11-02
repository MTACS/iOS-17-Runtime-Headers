
@interface SBTraitsOrientationDefaultTreeResolver : SBTraitsOrientationStageComponent <TRAPreferencesStageResolving> {
    NSMutableDictionary * _mapResolverCache;
    TRASettingsValidator * _settingsValidator;
}

@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mapResolverForTargetOrientation:(long long)arg1 currentOrientation:(long long)arg2;
- (bool)_node:(id)arg1 validatesNewSettings:(id)arg2;
- (long long)_targetOrientationForResolutionInfo:(id)arg1 validatedInputs:(id)arg2 rawInputs:(id)arg3 participant:(id)arg4 parent:(id)arg5;
- (id)initWithComponentOrder:(id)arg1;
- (void)resolveStagePreferencesWithContext:(id)arg1 preferencesTree:(id)arg2;

@end
