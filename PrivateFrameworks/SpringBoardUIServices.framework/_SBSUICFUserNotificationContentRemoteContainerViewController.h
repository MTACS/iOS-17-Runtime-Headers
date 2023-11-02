
@interface _SBSUICFUserNotificationContentRemoteContainerViewController : UIViewController <_SBSUICFUserNotificationContentExtensionRemoteInterface> {
    UIViewController<SBSUIUserNotificationContentProviding> * _extensionViewController;
    bool  _isLegacyContentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController<SBSUIUserNotificationContentProviding> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_trackChildViewController:(id)arg1;
- (void)_updatePreferredContentSize;
- (void)addChildViewController:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)configureWithCompletion:(id /* block */)arg1;
- (id)extensionViewController;
- (void)invalidateWithCompletion:(id /* block */)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setExtensionViewController:(id)arg1;
- (id)userNotificationContentExtensionContext;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
