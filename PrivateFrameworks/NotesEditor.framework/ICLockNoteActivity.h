
@interface ICLockNoteActivity : ICActivity {
    long long  _contextPath;
    ICNoteLockManager * _lockManager;
    UIViewController * _presentingViewController;
}

@property (nonatomic) long long contextPath;
@property (nonatomic, readonly) ICNoteLockManager *lockManager;
@property (nonatomic, readonly) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (void)accessibilityAnnounceToggledLock;
- (id)accessibilityLabel;
- (id)activityImage;
- (id)activityTintColor;
- (id)activityTitle;
- (id)activityType;
- (long long)contextPath;
- (id)initWithNote:(id)arg1 presentingViewController:(id)arg2;
- (id)lockManager;
- (void)performActivityWithCompletion:(id /* block */)arg1;
- (id)presentingViewController;
- (void)setContextPath:(long long)arg1;

@end
