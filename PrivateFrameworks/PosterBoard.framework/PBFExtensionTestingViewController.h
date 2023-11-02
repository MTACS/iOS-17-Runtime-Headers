
@interface PBFExtensionTestingViewController : UIViewController {
    UINavigationBar * _barView;
    PBFClientTesterViewController * _clientTesterController;
    PBFConfigViewController * _configController;
    ExtensionListViewController * _editingController;
    PBFGalleryViewController * _galleryController;
    UIViewController * _presentedViewController;
    ExtensionListViewController * _renderingController;
    UISegmentedControl * _variantSelector;
}

- (void).cxx_destruct;
- (void)_variantSelectorValueChanged:(id)arg1;
- (id)init;
- (void)presentPage:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
