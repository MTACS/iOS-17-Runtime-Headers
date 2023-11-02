
@interface WDAppleInternalConsentViewController : HKTitledBuddyViewController {
    UIViewController * _actionViewController;
    id /* block */  _completionBlock;
    UIBarButtonItem * _navigationCancelButton;
}

@property (nonatomic, retain) UIViewController *actionViewController;
@property (nonatomic, copy) id /* block */ completionBlock;

- (void).cxx_destruct;
- (void)acceptButtonTapped:(id)arg1;
- (id)actionViewController;
- (id)bodyString;
- (long long)bodyTextAlignment;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (id /* block */)completionBlock;
- (void)declineButtonTapped:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setActionViewController:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (bool)shouldCustomizeNavigationBar;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleString;
- (void)updateBodyTextAttributesWithMutableString:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
