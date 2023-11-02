
@interface PXContentSyndicationAssetSavingHelper : NSObject {
    bool  _allowSkippingUnsavedAssets;
    <PXDisplayAssetCollection> * _assetCollection;
    <PXPresentationEnvironment> * _presentationEnvironment;
    bool  _skipUserPromptForSavingAssets;
    NSArray * _unsavedAssetsToSkip;
    bool  _userCanContinueAfterSavingSyndicatedAssets;
}

@property (nonatomic) bool allowSkippingUnsavedAssets;
@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, retain) <PXPresentationEnvironment> *presentationEnvironment;
@property (nonatomic) bool skipUserPromptForSavingAssets;
@property (nonatomic, readonly) NSArray *unsavedAssetsToSkip;
@property (nonatomic) bool userCanContinueAfterSavingSyndicatedAssets;

+ (id)assetSavingHelperFromAssetCollectionActionPerformer:(id)arg1;

- (void).cxx_destruct;
- (bool)allowSkippingUnsavedAssets;
- (id)assetCollection;
- (id)initWithAssetCollection:(id)arg1;
- (void)performSaveActionIfNeededOnUnsavedSyndicatedAssetsWithCompletion:(id /* block */)arg1;
- (void)presentSaveAlertForUnsavedSyndicatedAssets:(id)arg1 canContinueAfterSaving:(bool)arg2 allowSkippingUnsavedAssets:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)presentationEnvironment;
- (void)saveUnsavedSyndicatedAssetsWithCompletion:(id /* block */)arg1;
- (void)setAllowSkippingUnsavedAssets:(bool)arg1;
- (void)setPresentationEnvironment:(id)arg1;
- (void)setSkipUserPromptForSavingAssets:(bool)arg1;
- (void)setUserCanContinueAfterSavingSyndicatedAssets:(bool)arg1;
- (bool)skipUserPromptForSavingAssets;
- (id)unsavedAssetsToSkip;
- (bool)userCanContinueAfterSavingSyndicatedAssets;

@end
