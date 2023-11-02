
@interface PEAdjustmentDataCache : NSObject

+ (id)compositionControllerForAssetIfLoaded:(id)arg1 disposition:(long long*)arg2;
+ (id)entryForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 disposition:(long long*)arg3 originalAdjustmentData:(bool)arg4;
+ (void)initialize;
+ (void)requestCompositionControllerForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (id)synchronousCompositionControllerForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 disposition:(long long*)arg3 originalComposition:(bool)arg4;
+ (id)synchronousEditorBundleIDForAsset:(id)arg1;
+ (struct CGSize { double x1; double x2; })synchronousInputSizeForAsset:(id)arg1 disposition:(long long*)arg2;

@end
