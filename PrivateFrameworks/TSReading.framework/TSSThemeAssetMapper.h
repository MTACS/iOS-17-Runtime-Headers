
@interface TSSThemeAssetMapper : NSObject {
    TSUCustomCallBackDictionary * mAssetMap;
    TSSTheme * mFromTheme;
    TSSTheme * mToTheme;
}

@property (nonatomic, readonly) TSSTheme *fromTheme;
@property (nonatomic, readonly) TSSTheme *toTheme;

- (void)cacheAssetMappings:(id)arg1;
- (void)cacheMappingFromAsset:(id)arg1 toAsset:(id)arg2;
- (void)clearMappingCache;
- (void)dealloc;
- (id)fromTheme;
- (id)init;
- (id)initWithFromTheme:(id)arg1 toTheme:(id)arg2;
- (id)mapPresetsWithKindFromPreset:(id)arg1;
- (id)mapStyle:(id)arg1;
- (id)mappedAssetForAsset:(id)arg1;
- (bool)p_hasCachedMappingsForPresetsOfKind:(id)arg1;
- (id)toTheme;

@end
