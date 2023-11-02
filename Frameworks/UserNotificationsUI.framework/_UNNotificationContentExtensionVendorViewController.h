
@interface _UNNotificationContentExtensionVendorViewController : UIViewController <_UNNotificationContentExtensionVendorContainer> {
    UIViewController<UNNotificationContentExtension> * _extensionViewController;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _invalidationOnceFlag;
    UIScrollViewDelayedTouchesBeganGestureRecognizer * _touchDelayGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController<UNNotificationContentExtension> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (id)_extensionBundleIdentifier;
- (void)_invalidateExtensionContext;
- (void)_setupExtensionViewController:(id)arg1;
- (bool)_shouldForwardSystemLayoutFittingSizeChanges;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)delayed:(id)arg1;
- (id)extensionViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)notificationExtensionVendorContext;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preserveInputViews;
- (void)restoreInputViews;
- (void)setExtensionViewController:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end
