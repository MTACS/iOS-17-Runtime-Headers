
@interface ACMiTunesSignInDialog_Modern : ACMiTunesSignInDialog <UIAlertViewDelegate> {
    bool  _isPresented;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresented;
@property (readonly) Class superclass;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (bool)isPresented;
- (void)loadView;
- (void)setIsPresented:(bool)arg1;
- (bool)shouldPasswordTextFieldReturnOnSignInDisallowed;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;

@end
