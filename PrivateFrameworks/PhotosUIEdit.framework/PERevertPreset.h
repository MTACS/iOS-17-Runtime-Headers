
@interface PERevertPreset : PEEditAction

- (long long)actionType;
- (void)applyToLoadResult:(id)arg1 completion:(id /* block */)arg2;
- (bool)forceRunAsUnadjustedAsset;

@end
