
@interface ACMSignInWidget_Modern : NSObject <ACMSignInWidgetProtocol, UITextFieldDelegate> {
    UIButton * _accountClearButton;
    UITextField * _accountField;
    NSString * _accountLabelText;
    UIColor * _backgroundColor;
    <ACMSignInWidgetDelegate> * _delegate;
    bool  _hideMargin;
    bool  _hideTopSeparator;
    UIButton * _passwordClearButton;
    UITextField * _passwordField;
    NSDictionary * _placeholderAttributes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    bool  _shouldAuthenticateOnUserInput;
    UIView * _view;
}

@property (nonatomic, retain) UIButton *accountClearButton;
@property (nonatomic, readonly) UITextField *accountField;
@property (nonatomic, retain) NSString *accountLabelText;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACMSignInWidgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideMargin;
@property (nonatomic) bool hideTopSeparator;
@property (nonatomic, retain) UIButton *passwordClearButton;
@property (nonatomic, readonly) UITextField *passwordField;
@property (nonatomic, retain) NSDictionary *placeholderAttributes;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) bool shouldAuthenticateOnUserInput;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (id)accountClearButton;
- (id)accountField;
- (id)accountLabelText;
- (void)applyPlaceholderAttributes;
- (id)backgroundColor;
- (id)clearButtonImage;
- (void)clearTextField:(id)arg1;
- (id)createClearButtonForEditField:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disableControls:(bool)arg1;
- (bool)hideMargin;
- (bool)hideTopSeparator;
- (double)leftMargin;
- (id)passwordClearButton;
- (id)passwordField;
- (id)placeholderAttributes;
- (struct CGPoint { double x1; double x2; })position;
- (void)setAccountClearButton:(id)arg1;
- (void)setAccountLabelText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHideMargin:(bool)arg1;
- (void)setHideTopSeparator:(bool)arg1;
- (void)setPasswordClearButton:(id)arg1;
- (void)setPlaceholderAttributes:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldAuthenticateOnUserInput:(bool)arg1;
- (bool)shouldAuthenticateOnUserInput;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)textFieldFont;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)touchIn:(id)arg1;
- (void)touchOut:(id)arg1;
- (id)view;

@end
