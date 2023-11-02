
@interface PXSearchSettings : PXSettings {
    bool  _disableTopAssetCuration;
    bool  _enableChimaeraPipeline;
    bool  _enableScopedSearchMSS;
    bool  _enableScopedSearchPhotosPicker;
    bool  _enableTopAssetInMemorySort;
    bool  _forceIndexingFooter;
    bool  _forceIndexingPausedTitle;
    unsigned long long  _indexingBannerAssetThreshold;
    unsigned long long  _maxNumberOfResultColumns;
    unsigned long long  _maxNumberOfSuggestionsToShow;
    unsigned long long  _maxNumberOfTopAssetColumns;
    unsigned long long  _maxNumberOfTopAssetRows;
    NSString * _overrideMatchedQueryText;
    unsigned long long  _standardNumberOfTopAssetRows;
    bool  _wantsAssetResults;
    bool  _wantsCollectionResults;
}

@property (nonatomic) bool disableTopAssetCuration;
@property (nonatomic) bool enableChimaeraPipeline;
@property (nonatomic) bool enableScopedSearchMSS;
@property (nonatomic) bool enableScopedSearchPhotosPicker;
@property (nonatomic) bool enableTopAssetInMemorySort;
@property (nonatomic) bool forceIndexingFooter;
@property (nonatomic) bool forceIndexingPausedTitle;
@property (nonatomic) unsigned long long indexingBannerAssetThreshold;
@property (nonatomic) unsigned long long maxNumberOfResultColumns;
@property (nonatomic) unsigned long long maxNumberOfSuggestionsToShow;
@property (nonatomic) unsigned long long maxNumberOfTopAssetColumns;
@property (nonatomic) unsigned long long maxNumberOfTopAssetRows;
@property (nonatomic, copy) NSString *overrideMatchedQueryText;
@property (nonatomic) unsigned long long standardNumberOfTopAssetRows;
@property (nonatomic) bool wantsAssetResults;
@property (nonatomic) bool wantsCollectionResults;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (bool)_isChimaeraFFEnabled;
+ (bool)isChimaeraEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)disableTopAssetCuration;
- (bool)enableChimaeraPipeline;
- (bool)enableScopedSearchMSS;
- (bool)enableScopedSearchPhotosPicker;
- (bool)enableTopAssetInMemorySort;
- (bool)forceIndexingFooter;
- (bool)forceIndexingPausedTitle;
- (unsigned long long)indexingBannerAssetThreshold;
- (unsigned long long)maxNumberOfResultColumns;
- (unsigned long long)maxNumberOfSuggestionsToShow;
- (unsigned long long)maxNumberOfTopAssetColumns;
- (unsigned long long)maxNumberOfTopAssetRows;
- (id)overrideMatchedQueryText;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setDisableTopAssetCuration:(bool)arg1;
- (void)setEnableChimaeraPipeline:(bool)arg1;
- (void)setEnableScopedSearchMSS:(bool)arg1;
- (void)setEnableScopedSearchPhotosPicker:(bool)arg1;
- (void)setEnableTopAssetInMemorySort:(bool)arg1;
- (void)setForceIndexingFooter:(bool)arg1;
- (void)setForceIndexingPausedTitle:(bool)arg1;
- (void)setIndexingBannerAssetThreshold:(unsigned long long)arg1;
- (void)setMaxNumberOfResultColumns:(unsigned long long)arg1;
- (void)setMaxNumberOfSuggestionsToShow:(unsigned long long)arg1;
- (void)setMaxNumberOfTopAssetColumns:(unsigned long long)arg1;
- (void)setMaxNumberOfTopAssetRows:(unsigned long long)arg1;
- (void)setOverrideMatchedQueryText:(id)arg1;
- (void)setStandardNumberOfTopAssetRows:(unsigned long long)arg1;
- (void)setWantsAssetResults:(bool)arg1;
- (void)setWantsCollectionResults:(bool)arg1;
- (unsigned long long)standardNumberOfTopAssetRows;
- (bool)wantsAssetResults;
- (bool)wantsCollectionResults;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)_formatIndexingStatusAlertMessageForRemainingCount:(unsigned long long)arg1 isPaused:(bool)arg2 elapsedTimeSincePause:(double)arg3;
+ (bool)_isChimaeraFFEnabled;
+ (id)settingsControllerModule;

@end
