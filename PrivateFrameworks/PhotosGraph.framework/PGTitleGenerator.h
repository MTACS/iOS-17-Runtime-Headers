
@interface PGTitleGenerator : NSObject {
    PHAssetCollection * _assetCollection;
    PHAssetCollection * _curatedAssetCollection;
    PHFetchResult * _curatedAssets;
    PGTitleGeneratorDateMatching * _dateMatching;
    PGGraphYearNodeCollection * _featuredYearNodes;
    bool  _isForHighlight;
    PHAsset * _keyAsset;
    unsigned long long  _lineBreakBehavior;
    NSLocale * _locale;
    NSSet * _momentNodes;
    unsigned long long  _preferredTitleType;
    PGTitle * _subtitle;
    PGTitle * _title;
    PGTitleGenerationContext * _titleGenerationContext;
    NSSet * _usedLocationNodes;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHAssetCollection *curatedAssetCollection;
@property (nonatomic, readonly) PGTitleGeneratorDateMatching *dateMatching;
@property (nonatomic, retain) PGGraphYearNodeCollection *featuredYearNodes;
@property (nonatomic) bool isForHighlight;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic) unsigned long long preferredTitleType;
@property (nonatomic, readonly) PGTitle *subtitle;
@property (nonatomic, readonly) PGTitle *title;
@property (nonatomic, readonly) PGTitleGenerationContext *titleGenerationContext;
@property (nonatomic, retain) NSSet *usedLocationNodes;

- (void).cxx_destruct;
- (id)_addressNodeFromKeyAsset;
- (id)_addressNodesFromCuratedAssetCollection;
- (unsigned long long)_allowedTimeTitleFormats;
- (id)_defaultLocationTitle;
- (id)_defaultTimeTitle;
- (id)_defaultTitle;
- (id)_fetchAssetsFromCuratedAssetCollection;
- (void)_generateTitleAndSubtitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (double)_ratioOfAssetsWithoutLocation;
- (id)_splitTimeTitles;
- (bool)_triggerDefaultTitleGenerationIfNil;
- (bool)_useSplitTimeTitlesIfNeeded;
- (id)assetCollection;
- (id)curatedAssetCollection;
- (id)dateMatching;
- (id)featuredYearNodes;
- (id)initWithMomentNode:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6 titleGenerationContext:(id)arg7;
- (id)initWithMomentNode:(id)arg1 type:(long long)arg2 titleGenerationContext:(id)arg3;
- (id)initWithMomentNodes:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6 titleGenerationContext:(id)arg7;
- (id)initWithMomentNodes:(id)arg1 type:(long long)arg2 titleGenerationContext:(id)arg3;
- (bool)isForHighlight;
- (id)keyAsset;
- (unsigned long long)lineBreakBehavior;
- (id)locale;
- (id)momentNodes;
- (unsigned long long)preferredTitleType;
- (void)setFeaturedYearNodes:(id)arg1;
- (void)setIsForHighlight:(bool)arg1;
- (void)setLineBreakBehavior:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setPreferredTitleType:(unsigned long long)arg1;
- (void)setUsedLocationNodes:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)titleGenerationContext;
- (id)usedLocationNodes;

@end
