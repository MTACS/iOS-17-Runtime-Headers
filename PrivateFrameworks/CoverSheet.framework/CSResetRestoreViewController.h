
@interface CSResetRestoreViewController : CSModalViewControllerBase {
    <CSResetRestoreStatusProviding> * _statusProvider;
}

- (void).cxx_destruct;
- (id)_currentTextForResetOrRestoreState;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)initWithStatusProvider:(id)arg1;
- (long long)presentationPriority;
- (void)viewDidLoad;

@end
