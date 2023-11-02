
@interface _UIUserDefaultsHostActivity : _UIUserDefaultsActivity {
    UIViewController * _presentableActivityViewController;
}

@property (nonatomic, retain) UIViewController *presentableActivityViewController;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_prepareActivityViewControllerIfNeeded;
- (void)_settingsViewControllerDidDismiss:(id)arg1;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityViewController;
- (id)presentableActivityViewController;
- (void)setPresentableActivityViewController:(id)arg1;

@end
