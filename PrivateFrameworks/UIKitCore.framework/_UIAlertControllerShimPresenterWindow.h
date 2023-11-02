
@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {
    UIAlertController * _alertController;
}

@property (nonatomic, readonly, retain) UIAlertController *alertController;

- (void).cxx_destruct;
- (id)_presentationViewController;
- (id)alertController;
- (id)init;
- (id)initWithWindowScene:(id)arg1;
- (void)presentAlertController:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;

@end
