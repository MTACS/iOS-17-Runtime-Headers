
@interface ACMSignInWidget : NSObject <ACMSignInWidgetProtocol, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    UITableViewCell * _accountEditCell;
    UITextField * _accountField;
    UILabel * _accountLabel;
    UIColor * _backgroundColor;
    <ACMSignInWidgetDelegate> * _delegate;
    UITableViewCell * _passwordEditCell;
    UITextField * _passwordField;
    NSDictionary * _placeholderAttributes;
    bool  _shouldAuthenticateOnUserInput;
    UITableView * _table;
}

@property (nonatomic, readonly, retain) UITableViewCell *accountEditCell;
@property (nonatomic, retain) UITextField *accountField;
@property (nonatomic, readonly, retain) UILabel *accountLabel;
@property (nonatomic, retain) NSString *accountLabelText;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACMSignInWidgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) UITableViewCell *passwordEditCell;
@property (nonatomic, retain) UITextField *passwordField;
@property (nonatomic, readonly, retain) UILabel *passwordLabel;
@property (nonatomic, retain) NSDictionary *placeholderAttributes;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) bool shouldAuthenticateOnUserInput;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) UITableView *table;
@property (nonatomic, readonly) UIView *view;

- (id)accountEditCell;
- (id)accountField;
- (id)accountLabel;
- (id)accountLabelText;
- (id)backgroundColor;
- (void)dealloc;
- (id)delegate;
- (void)disableControls:(bool)arg1;
- (void)onSignIn:(id)arg1;
- (id)passwordEditCell;
- (id)passwordField;
- (id)passwordLabel;
- (id)placeholderAttributes;
- (struct CGPoint { double x1; double x2; })position;
- (void)setAccountField:(id)arg1;
- (void)setAccountLabelText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setPlaceholderAttributes:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldAuthenticateOnUserInput:(bool)arg1;
- (bool)shouldAuthenticateOnUserInput;
- (id)table;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)view;

@end
