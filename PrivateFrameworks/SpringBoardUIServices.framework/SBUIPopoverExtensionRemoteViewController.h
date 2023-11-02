
@interface SBUIPopoverExtensionRemoteViewController : UIViewController <_SBUIPopoverExtensionRemoteInterface> {
    UIViewController<SBUIPopoverExtension> * _extensionViewController;
    <_SBUIPopoverExtensionHostInterface> * _hostService;
    NSUUID * _instanceIdentifier;
}

@property (nonatomic, retain) UIViewController<SBUIPopoverExtension> *extensionViewController;
@property (nonatomic, retain) <_SBUIPopoverExtensionHostInterface> *hostService;

+ (id)_exportedInterface;
+ (bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_invalidateSBUIPopoverExtension;
- (void)_setupChildViewController:(id)arg1;
- (void)_updateForBundleIdentifier:(id)arg1;
- (void)_updateForWidgetConfiguration:(id)arg1;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (id)extensionViewController;
- (id)hostService;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)popoverExtensionContext;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)setHostService:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
