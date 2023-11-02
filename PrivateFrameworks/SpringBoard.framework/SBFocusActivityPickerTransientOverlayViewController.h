
@interface SBFocusActivityPickerTransientOverlayViewController : SBTransientOverlayViewController {
    FCUIActivityPickerViewController * _activityPickerViewController;
    MTMaterialView * _backgroundMaterialView;
    UIView * _contentView;
    <SBFocusActivityPickerTransientOverlayViewControllerDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredExpandedContentSize;
    UITapGestureRecognizer * _tapGesture;
}

@property (nonatomic) <SBFocusActivityPickerTransientOverlayViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_dismiss:(bool)arg1;
- (void)_handleTap:(id)arg1;
- (id)delegate;
- (void)handleGestureDismissal;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
