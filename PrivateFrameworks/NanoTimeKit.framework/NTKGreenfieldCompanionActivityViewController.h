
@interface NTKGreenfieldCompanionActivityViewController : UIActivityViewController <NTKGreenfieldCompanionActivityItemProviderDelegate, UIActivityViewControllerObjectManipulationDelegate> {
    NTKGreenfieldDraftRecipe * _draftRecipe;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (void)_handleCustomizationValueChange:(id)arg1 sharingOption:(id)arg2;
- (void)companionActivityItemProvider:(id)arg1 handleError:(id)arg2;
- (id)initWithDraftRecipe:(id)arg1 previewImage:(id)arg2;

@end
