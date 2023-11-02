
@interface PXForYouRecentInterestSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXActionPerformerDelegate, PXOneUpPresentationDelegate, PXSuggestLessPeopleHelperDelegate> {
    PXForYouSuggestionAssetsDataSourceManager * _oneUpDataSourceManager;
    PXAssetReference * _oneUpInitialAssetReference;
    PXUIMediaProvider * _oneUpMediaProvider;
    PXSuggestLessPeopleHelper * _suggestLessPeopleHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addTTRActionIntoPreview:(id)arg1 forGadget:(id)arg2;
- (bool)_dismissViewController:(id)arg1 completion:(id)arg2;
- (void)_fileRadarForSuggestion:(id)arg1;
- (id)_gadgetForAssetReference:(id)arg1;
- (id)_hostViewController;
- (void)_insertRemoveSuggestionActionIntoPreview:(id)arg1 forGadget:(id)arg2;
- (void)_insertSuggestLessPersonActionIntoPreview:(id)arg1 forGadget:(id)arg2;
- (void)_insertSyndicationReplyIntoPreview:(id)arg1 forGadget:(id)arg2;
- (void)_performSuggestLessPersonActionIntoPreview:(id)arg1 forGadget:(id)arg2;
- (bool)_prepareForOneUpPresentationForSuggestion:(id)arg1 mediaProvider:(id)arg2;
- (bool)_presentViewController:(id)arg1;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)configureGadget:(id)arg1;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 localizedTitle:(id)arg2;
- (id)initWithLibraryFilterState:(id)arg1;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (bool)oneUpPresentationWantsShowInLibraryButton:(id)arg1;
- (void)presentOneUpForSuggestion:(id)arg1 withMediaProvider:(id)arg2 animated:(bool)arg3;
- (bool)suggestLessPeopleHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)suggestLessPeopleHelper:(id)arg1 presentViewController:(id)arg2;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(bool)arg3;
- (id)suggestionGadgetPreviewController:(id)arg1 withMediaProvider:(id)arg2;
- (id)undoManagerForActionPerformer:(id)arg1;

@end
