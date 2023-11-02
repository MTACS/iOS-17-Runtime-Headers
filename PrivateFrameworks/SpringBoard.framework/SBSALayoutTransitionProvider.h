
@interface SBSALayoutTransitionProvider : SBSABasePreferencesProvider <SBSAElementLayoutModeTransitioning> {
    bool  _awaitingCollision;
    bool  _initialized;
    SBSABasePreferencesProvider<SBSAElementLayoutModeSupporting> * _previousLayoutProvider;
    SBSABasePreferencesProvider<SBSAElementLayoutModeSupporting> * _targetLayoutProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInitialized, nonatomic, readonly) bool initialized;
@property (nonatomic, readonly) long long previousElementLayoutMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long targetElementLayoutMode;

- (void).cxx_destruct;
- (id)_elementLayoutModeSupportingChildProvider;
- (void)_ensureChildMitosisProviderExists:(bool)arg1 forBabyElementIdentifier:(id)arg2;
- (void)_ensureChildRecombinationProviderExists:(bool)arg1;
- (bool)_isMitosisProviderRequiredForTransitionFromLayoutMode:(long long)arg1 toLayoutMode:(long long)arg2;
- (bool)_isRecombinationProviderRequiredForTransitionFromLayoutMode:(long long)arg1 toLayoutMode:(long long)arg2;
- (id)_layoutProviderForLayoutMode:(long long)arg1;
- (id)description;
- (bool)isInitialized;
- (id)preferencesFromContext:(id)arg1;
- (long long)previousElementLayoutMode;
- (long long)targetElementLayoutMode;

@end
