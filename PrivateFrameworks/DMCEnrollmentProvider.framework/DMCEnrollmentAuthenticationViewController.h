
@interface DMCEnrollmentAuthenticationViewController : DMCEnrollmentTemplateTableViewController <DMCDismissalAwareViewController, UITextFieldDelegate> {
    DMCEnrollmentLinkLabelView * _bottomLinkView;
    NSString * _bottomViewText;
    NSString * _cancelButtonTitle;
    DMCEnrollmentConfirmationView * _confirmationView;
    <DMCEnrollmentAuthenticationViewControllerDelegate> * _delegate;
    bool  _isDisplayingPasswordCell;
    DMCEnrollmentTableViewTextFieldCell * _passwordCell;
    unsigned long long  _style;
    unsigned long long  _userInputSection;
    NSString * _username;
    DMCEnrollmentTableViewTextFieldCell * _usernameCell;
    bool  _usernameEditable;
}

@property (nonatomic, retain) DMCEnrollmentLinkLabelView *bottomLinkView;
@property (nonatomic, copy) NSString *bottomViewText;
@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, retain) DMCEnrollmentConfirmationView *confirmationView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DMCEnrollmentAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDisplayingPasswordCell;
@property (nonatomic, retain) DMCEnrollmentTableViewTextFieldCell *passwordCell;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long userInputSection;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, retain) DMCEnrollmentTableViewTextFieldCell *usernameCell;
@property (getter=isUsernameEditable, nonatomic) bool usernameEditable;

- (void).cxx_destruct;
- (void)_setupNavigationBar;
- (id)bottomLinkView;
- (id)bottomViewText;
- (id)cancelButtonTitle;
- (id)confirmationView;
- (void)continueButtonTapped;
- (id)delegate;
- (id)init;
- (bool)isDisplayingPasswordCell;
- (bool)isUsernameEditable;
- (void)leftBarButtonTapped:(id)arg1;
- (id)passwordCell;
- (void)setBottomLinkView:(id)arg1;
- (void)setBottomText:(id)arg1;
- (void)setBottomViewText:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setConfirmationView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setIsDisplayingPasswordCell:(bool)arg1;
- (void)setPasswordCell:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setUserInputSection:(unsigned long long)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsernameCell:(id)arg1;
- (void)setUsernameEditable:(bool)arg1;
- (void)showPasswordField:(bool)arg1;
- (unsigned long long)style;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateContinueButtonStatus;
- (unsigned long long)userInputSection;
- (id)username;
- (id)usernameCell;
- (void)viewControllerHasBeenDismissed;
- (void)viewWillAppear:(bool)arg1;

@end
