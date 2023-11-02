
@interface SMUTextEntryController : UIViewController <SMUTextEntryController, UISystemInputViewControllerDelegate> {
    UIButton * _doneButton;
    NSString * _doneText;
    bool  _hideAccessoryViews;
    bool  _isTouchEnabled;
    NSString * _message;
    UILabel * _messageLabel;
    id /* block */  _onCompletion;
    UIView * _preferredFocusedView;
    UISystemInputViewController * _systemInputViewController;
    NSString * _text;
    SMUTextEntryTextField * _textField;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIButton *doneButton;
@property (nonatomic, copy) NSString *doneText;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, copy) id /* block */ onCompletion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UISystemInputViewController *systemInputViewController;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic) bool textFieldAllowsFocus;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (bool)_disableAutomaticKeyboardUI;
- (void)_doneButtonPressed:(id)arg1;
- (bool)_enableAutomaticKeyboardPressDone;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)doneButton;
- (id)doneText;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (unsigned long long)maxLength;
- (id)message;
- (id)messageLabel;
- (id /* block */)onCompletion;
- (id)preferredFocusEnvironments;
- (void)setDoneText:(id)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setOnCompletion:(id /* block */)arg1;
- (void)setText:(id)arg1;
- (void)setTextFieldAllowsFocus:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (id)systemInputViewController;
- (void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(bool)arg2;
- (void)systemInputViewControllerDidAcceptRecentInput:(id)arg1;
- (id)text;
- (id)textField;
- (bool)textFieldAllowsFocus;
- (void)textFieldDidChange:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
