
@interface QLScreenTimeItemViewController : QLItemViewController {
    STBlockingViewController * _blockingViewController;
    NSString * _bundleIdentifier;
    NSString * _categoryIdentifier;
    long long  _policy;
}

@property (nonatomic, retain) STBlockingViewController *blockingViewController;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *categoryIdentifier;
@property (nonatomic) long long policy;

- (void).cxx_destruct;
- (void)_updateBlockingViewControllerWithCurrentPolicy;
- (id)blockingViewController;
- (id)bundleIdentifier;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (id)categoryIdentifier;
- (void)hideBlockingViewControllerWithCompletionHandler:(id /* block */)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCategoryIdentifier:(id)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)policy;
- (void)setBlockingViewController:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setPolicy:(long long)arg1;
- (void)showBlockingViewControllerWithPolicy:(long long)arg1;

@end
