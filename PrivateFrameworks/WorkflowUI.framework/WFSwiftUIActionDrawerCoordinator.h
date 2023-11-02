
@interface WFSwiftUIActionDrawerCoordinator : NSObject <UIPopoverPresentationControllerDelegate, WFActionDrawerDelegate> {
    <WFSwiftUIActionDrawerCoordinatorDelegate> * _delegate;
    WFDrawerController * _drawerController;
    WFEditorDrawerViewController * _drawerViewController;
    UIViewController * _inspectorPaneContainerViewController;
    unsigned long long  _presentationMode;
    UIViewController * _presentedPopover;
    WFActionDrawerResultsController * _resultsController;
    UIViewController * _visibleInspectorPaneContentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFSwiftUIActionDrawerCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFDrawerController *drawerController;
@property (nonatomic, readonly) WFEditorDrawerViewController *drawerViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *inspectorPaneContainerViewController;
@property (nonatomic, readonly) unsigned long long presentationMode;
@property (nonatomic, retain) UIViewController *presentedPopover;
@property (nonatomic, readonly) WFActionDrawerResultsController *resultsController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *visibleInspectorPaneContentViewController;

- (void).cxx_destruct;
- (double)actionCanvasWidth;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)appendAction:(id)arg1;
- (void)collapseDrawer;
- (void)configureAsBottomSheetInParentViewController:(id)arg1 belowSubview:(id)arg2;
- (void)configureAsNavigationStackInParentViewController:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)drawerController;
- (id)drawerViewController;
- (void)expandDrawer;
- (id)initWithResultsController:(id)arg1;
- (id)inspectorPaneContainerViewController;
- (id)newDrawerViewControllerWithStyle:(unsigned long long)arg1;
- (void)presentDrawerViewController:(id)arg1 inPopover:(bool)arg2 withSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (unsigned long long)presentationMode;
- (id)presentedPopover;
- (void)responderDidBeginEditing:(id)arg1;
- (id)resultsController;
- (void)setDelegate:(id)arg1;
- (void)setInspectorPaneViewController:(id)arg1;
- (void)setPresentedPopover:(id)arg1;
- (void)subscribeForTextEditingNotifications;
- (void)unsubscribeFromTextEditingNotifications;
- (id)visibleInspectorPaneContentViewController;

@end
