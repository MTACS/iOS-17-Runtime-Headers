
@interface CPSOverlayViewController : UINavigationController <BSInvalidatable, CPSPreferredFocusManaging> {
    int  _pid;
    UIFocusGuide * _rightHandDriveGuide;
    _UINonHostingVisibilityPropagationView * _visibilityView;
    <UIFocusItem> * preferredFocusItem;
    bool  usePreferredItemOnNextUpdate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int pid;
@property (nonatomic) <UIFocusItem> *preferredFocusItem;
@property (nonatomic, readonly) UIFocusGuide *rightHandDriveGuide;
@property (readonly) Class superclass;
@property (nonatomic) bool usePreferredItemOnNextUpdate;
@property (nonatomic, retain) _UINonHostingVisibilityPropagationView *visibilityView;

- (void).cxx_destruct;
- (id)_firstFocusProvidingForViewController:(id)arg1;
- (void)_invalidateVisibilityView;
- (id)_linearFocusMovementSequences;
- (bool)_needsVisibilityView;
- (void)_resetRightHandDriveGuide;
- (void)_updateVisibilityView;
- (bool)_useRightHandDriveFocusGuide;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissTemplateAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (unsigned long long)indexOfTemplate:(id)arg1;
- (void)invalidate;
- (int)pid;
- (void)popTemplateAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)popToRootTemplateAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (void)popToTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (id)preferredFocusEnvironments;
- (id)preferredFocusItem;
- (void)presentActionSheetTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentTemplateViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentedTemplateViewController;
- (void)pushTemplateViewController:(id)arg1 animated:(bool)arg2 presentationStyle:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (bool)restoresFocusAfterTransition;
- (id)rightHandDriveGuide;
- (void)setPid:(int)arg1;
- (void)setPreferredFocusItem:(id)arg1;
- (void)setUsePreferredItemOnNextUpdate:(bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)setVisibilityView:(id)arg1;
- (bool)shouldHideNavigationBarForViewController:(id)arg1;
- (id)templates;
- (id)topTemplate;
- (void)updateVisibilityForPid:(int)arg1;
- (bool)usePreferredItemOnNextUpdate;
- (id)viewControllerForTemplate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)visibilityView;

@end
