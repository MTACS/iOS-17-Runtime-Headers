
@interface CCUIModuleAlertViewController : UIViewController <CCUIContentModuleContainerViewControllerDelegate> {
    MTMaterialView * _blurView;
    UIView * _contentView;
    <CCUIModuleAlertViewControllerDelegate> * _delegate;
    CCUIContentModuleContainerViewController * _moduleContainerViewController;
    NSString * _moduleIdentifier;
    CCUIModuleInstance * _moduleInstance;
    CCSModulePresentationOptions * _presentationOptions;
}

@property (nonatomic) double backgroundViewWeighting;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIModuleAlertViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *moduleAlertView;
@property (nonatomic, readonly, copy) NSString *moduleIdentifier;
@property (nonatomic, readonly, copy) CCSModulePresentationOptions *presentationOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (double)backgroundViewWeighting;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })compactModeFrameForContentModuleContainerViewController:(id)arg1;
- (bool)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1;
- (id)delegate;
- (void)dismissModulePresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2;
- (void)loadView;
- (id)moduleAlertView;
- (id)moduleIdentifier;
- (id)presentationOptions;
- (void)setBackgroundViewWeighting:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
