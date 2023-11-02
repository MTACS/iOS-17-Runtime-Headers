
@interface NTKGreenfieldCompanionActivityItemProvider : UIActivityItemProvider {
    <NTKGreenfieldCompanionActivityItemProviderDelegate> * _delegate;
    NTKGreenfieldDraftRecipe * _draftRecipe;
    NSURL * _emailImageUrl;
    NTKGreenfieldEncodedRecipe * _encodedRecipe;
    UIImage * _previewImage;
}

@property (nonatomic) <NTKGreenfieldCompanionActivityItemProviderDelegate> *delegate;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)delegate;
- (id)initWithDraftRecipe:(id)arg1 previewImage:(id)arg2;
- (id)item;
- (void)setDelegate:(id)arg1;
- (id)writeImageToDisk:(id)arg1 suffix:(id)arg2;

@end
