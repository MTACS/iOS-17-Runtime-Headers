
@interface PUSceneDebugGridViewController : PUPhotosAlbumViewController {
    NSDictionary * _assetsHighestConfidence;
    NSNumber * _sceneIdentifier;
    PFSceneTaxonomy * _sceneTaxonomy;
}

@property (nonatomic, copy) NSDictionary *assetsHighestConfidence;
@property (nonatomic, retain) NSNumber *sceneIdentifier;

- (void).cxx_destruct;
- (id)_assetResourceForAsset:(id)arg1;
- (id)_assetResourceFromAcceptableAssetResources:(id)arg1;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (id)_globalHeaderTitle;
- (bool)_isJunkSceneIdentifer:(id)arg1;
- (id)_keywordForSceneIdentifier:(id)arg1;
- (id)_labelForSceneIdentifier:(id)arg1;
- (id)_localFileURLForAssetResource:(id)arg1 error:(id*)arg2;
- (id)_newEditActionItemsWithWideSpacing:(bool)arg1;
- (id)_preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (void)_tappedFileRadarButton:(id)arg1;
- (double)_thresholdForSceneIdentifer:(id)arg1;
- (bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (bool)allowSlideshowButton;
- (bool)assetConfidenceIsAboveThreshold:(id)arg1;
- (bool)assetShouldBeSurpassedInNormalUI:(id)arg1;
- (id)assetsHighestConfidence;
- (void)configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 assetCollection:(id)arg3 thumbnailIsPlaceholder:(bool)arg4 assetMayHaveChanged:(bool)arg5;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 buttonAction:(id /* block */*)arg4;
- (double)globalHeaderHeight;
- (id)sceneIdentifier;
- (id)sceneTaxonomy;
- (void)setAssetsHighestConfidence:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;

@end
