
@interface PUStorageManagementBaseController : UIViewController <PSController, PXGridPresentationBarsUpdateDelegate> {
    bool  _isGridControllerEditing;
    UIViewController<PSController> * _parentController;
    PHPhotoLibrary * _photoLibrary;
    id  _preferenceValue;
    PSRootController * _rootController;
    PSSpecifier * _specifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isGridControllerEditing;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (void)didMoveToParentViewController:(id)arg1;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)isGridControllerEditing;
- (id)parentController;
- (id)photoLibrary;
- (id)photosViewConfigurationWithShouldExpunge:(bool)arg1;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)setIsGridControllerEditing:(bool)arg1;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (id)specifier;
- (void)viewController:(id)arg1 didUpdateBarsAnimated:(bool)arg2 isSelecting:(bool)arg3;
- (void)viewControllerDidUpdateNavigationItemAppearance:(id)arg1;
- (void)viewDidLoad;

@end
