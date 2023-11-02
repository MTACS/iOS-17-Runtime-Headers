
@interface WeatherMaps.WeatherMapViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    void $__lazy_storage_$_supplementaryOverlayContainerView;
    void bannerUpdateBlock;
    void canAddLocationHandler;
    void canViewLocationHandler;
    void interactiveViewController;
    void isCrossfadingSnapshot;
    void isResizing;
    void lastViewBounds;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastViewModel;
    void locationActionHandler;
    void locationPickerViewController;
    void locationPopoverViewController;
    void onMapEventHandler;
    void prefersControlsHidden;
    void previewViewController;
    void resizeTimer;
    void resolver;
    void snapshotViewController;
    void store;
    void storeObserver;
    void supplementaryOverlayViewController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewModelToUpdate;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)mapSnapshotViewDidRetrieveSnapshot:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;

@end
