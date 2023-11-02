
@interface PGCurator_PHAsset : PGCurator

- (void)addMoviesToAssets:(id)arg1 fromFeeder:(id)arg2 maximumNumberOfAssets:(unsigned long long)arg3 debugInfo:(id)arg4;
- (id)bestAssetsForFeeder:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (void)lastPassToCompleteItems:(id)arg1 fromFeeder:(id)arg2 options:(id)arg3 maximumNumberOfItems:(unsigned long long)arg4 debugInfo:(id)arg5;
- (id)newMovieDeduperWithOptions:(id)arg1;
- (id)newSemanticalDeduperWithOptions:(id)arg1;

@end
