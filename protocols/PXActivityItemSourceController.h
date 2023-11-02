
@protocol PXActivityItemSourceController <NSObject>

@required

- (UIActivityViewController<PXActivityViewController> *)activityViewController;
- (NSOrderedSet *)assetItemSources;
- (NSOrderedSet *)assets;
- (bool)isPreparingIndividualItems;
- (bool)itemSourcesSupportMomentShareLinkCreation;
- (bool)itemSourcesSupportSlideshow;
- (bool)momentSharePublishAttempted;
- (PHPerson *)person;
- (long long)preferredExportFormat;
- (unsigned long long)preferredPreparationType;
- (NSURL *)publishedURL;
- (struct PXAssetMediaTypeCount { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; })requestAssetsMediaTypeCount;
- (void)setActivityViewController:(UIActivityViewController<PXActivityViewController> *)arg1;
- (void)setPerson:(PHPerson *)arg1;
- (void)setPreferredPreparationType:(unsigned long long)arg1;
- (bool)shouldExcludeAccessibilityDescriptionInAllItemSources;
- (bool)shouldExcludeCaptionInAllItemSources;
- (bool)shouldExcludeLivenessInAllItemSources;
- (bool)shouldExcludeLocationInAllItemSources;
- (bool)shouldShareAsAssetBundles;
- (bool)shouldShareAsUnmodifiedOriginals;
- (bool)shouldUseMomentShareLinkInMessagesIfThresholdMet;
- (unsigned long long)unsavedSyndicatedAssetCount;

@end
