
@interface PGAggregationHighlightTitleGenerator : PGTitleGenerator

- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)_locationTitleUsingKeyAssetAddressNode:(id)arg1 curationAddressNodes:(id)arg2;
- (bool)_useSplitTimeTitlesIfNeeded;
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 titleGenerationContext:(id)arg4;
- (id)initWithMomentNodes:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 titleGenerationContext:(id)arg4;

@end
