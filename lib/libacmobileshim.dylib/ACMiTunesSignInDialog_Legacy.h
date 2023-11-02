
@interface ACMiTunesSignInDialog_Legacy : ACMiTunesSignInDialog <acmAlertViewDelegateProtocol> {
    UITextField * _editingTextField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITextField *editingTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)acmAlertViewWillBecomeInvisible;
- (void)acmAlertViewWillBecomeVisible;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (void)didPresentAlertView:(id)arg1;
- (id)editingTextField;
- (void)handleRotation;
- (void)handleTextFieldShouldReturnOnNonPasswordField;
- (void)loadView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })passwordFrame;
- (void)setEditingTextField:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userNameFrame;
- (void)viewDidLoad;
- (void)willPresentAlertView:(id)arg1;

@end
