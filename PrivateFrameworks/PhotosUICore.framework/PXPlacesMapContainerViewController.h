
@interface PXPlacesMapContainerViewController : UIViewController <PXGridPresentationBarsUpdateDelegate, PXPlacesMapBarButtonsDelegate> {
    PXPlacesMapContainerConfiguration * _configuration;
    PXPlacesMapFetchResultViewController * _fetchResultViewController;
    bool  _gridControllerEditing;
    NSArray * _initialLeftBarButtonItems;
    long long  _initialNavigationBarStyle;
    PHPhotoLibrary * _photoLibrary;
    unsigned long long  _previousNavigationBarSegmentedControlSelectedIndex;
    PXProgrammaticNavigationDestination * _px_navigationDestination;
    UISegmentedControl * _subviewControl;
}

@property (nonatomic, readonly) PXPlacesMapContainerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXPlacesMapFetchResultViewController *fetchResultViewController;
@property (nonatomic) bool gridControllerEditing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *initialLeftBarButtonItems;
@property (nonatomic) long long initialNavigationBarStyle;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long previousNavigationBarSegmentedControlSelectedIndex;
@property (nonatomic, retain) UISegmentedControl *subviewControl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetNavigationItem;
- (void)_switchToLegacyGridController;
- (void)_switchToMapController;
- (void)_updateNavigationItemTitleWithConfigurationIfPossible;
- (void)_updateShouldOptOutFromChromelessBars;
- (id)configuration;
- (id)fetchResultViewController;
- (bool)gridControllerEditing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 configuration:(id)arg2;
- (id)initialLeftBarButtonItems;
- (long long)initialNavigationBarStyle;
- (void)legacyStrategyForHandleViewController:(id)arg1 didUpdateBarsAnimated:(bool)arg2 isSelecting:(bool)arg3;
- (void)loadView;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)photoLibrary;
- (unsigned long long)previousNavigationBarSegmentedControlSelectedIndex;
- (bool)pu_shouldOptOutFromChromelessBars;
- (id)px_navigationDestination;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (void)setGridControllerEditing:(bool)arg1;
- (void)setInitialLeftBarButtonItems:(id)arg1;
- (void)setInitialNavigationBarStyle:(long long)arg1;
- (void)setNavigationBarButtons:(id)arg1;
- (void)setPreviousNavigationBarSegmentedControlSelectedIndex:(unsigned long long)arg1;
- (void)setSubviewControl:(id)arg1;
- (void)setToolbarButtons:(id)arg1;
- (id)subviewControl;
- (void)subviewControlChanged:(id)arg1;
- (void)viewController:(id)arg1 didUpdateBarsAnimated:(bool)arg2 isSelecting:(bool)arg3;
- (void)viewControllerDidUpdateNavigationItemAppearance:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
