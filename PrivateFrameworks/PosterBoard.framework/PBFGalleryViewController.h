
@interface PBFGalleryViewController : UIViewController <PBFPosterExtensionDataStoreObserver, PBFPosterGalleryPreviewViewControllerDelegate, PREditingSceneViewControllerDelegate> {
    PBFGalleryMutableDataProvider * _dataProvider;
    UIAction * _editingAction;
    UIBarButtonItem * _environmentItem;
    PBFPosterExtensionDataStoreXPCServiceGlue * _glue;
    <BSInvalidatable> * _inUseAssertion;
    PBFPosterGalleryPreviewViewController * _previewViewController;
    UIAction * _previewingAction;
    UIAction * _renderingAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchNewGalleryFromProactive:(unsigned long long)arg1;
- (void)_reload;
- (void)_reloadGalleryUsingProactive:(id)arg1;
- (void)_selectEditingEnvironment;
- (void)_selectPreviewingEnvironment;
- (void)_selectRenderingEnvironment;
- (void)_setupDataProvider;
- (void)dealloc;
- (void)editingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(id /* block */)arg5;
- (void)galleryViewController:(id)arg1 didSelectPreview:(id)arg2 fromPreviewView:(id)arg3;
- (void)galleryViewController:(id)arg1 willDisplayPreview:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didUpdateGalleryConfiguration:(id)arg2;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })topButtonLayoutForEditingSceneViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
