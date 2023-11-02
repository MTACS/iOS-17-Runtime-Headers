
@interface CSActivityPickerViewController : CSCoverSheetViewControllerBase <CSDismissableModalViewControllerDelegate> {
    FCUIActivityPickerViewController * _activityPickerViewController;
    MTMaterialView * _backgroundMaterialView;
    UIView * _contentView;
    <CSActivityPickerViewControllerDelegate> * _delegate;
    UIView * _grabberView;
    CSDismissableModalViewController * _modalPresenter;
    <CSActivityPickerViewControllerParentContainer> * _parentContainer;
    _UIPortalView * _presentingPortalView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewInitialFrame;
    UITapGestureRecognizer * _tapGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSActivityPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CSDismissableModalViewController *modalPresenter;
@property (nonatomic) <CSActivityPickerViewControllerParentContainer> *parentContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissWithRepresentedActivity:(id)arg1 transitionCoordinator:(id)arg2;
- (void)_presentFromView:(id)arg1 representedActivity:(id)arg2 transitionCoordinator:(id)arg3;
- (void)addGrabberView:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)delegate;
- (void)dismiss;
- (void)dismissForHomeButton;
- (void)handleBarSwipeHomeGesturePerformed;
- (bool)handleEvent:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)modalPresenter;
- (id)parentContainer;
- (void)performCustomTransitionToVisible:(bool)arg1 withAnimationSettings:(id)arg2 completion:(id /* block */)arg3;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationTransition;
- (long long)presentationType;
- (void)setDelegate:(id)arg1;
- (void)setModalPresenter:(id)arg1;
- (void)setParentContainer:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
