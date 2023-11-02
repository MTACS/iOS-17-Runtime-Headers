
@interface StocksUI.TextFieldAlertController : UIViewController {
    void $__lazy_storage_$_cancelButton;
    void $__lazy_storage_$_messageLabel;
    void $__lazy_storage_$_submitButton;
    void $__lazy_storage_$_textField;
    void $__lazy_storage_$_textFieldLabel;
    void $__lazy_storage_$_titleLabel;
    void alertTitle;
    void cancelTitle;
    void configureTextField;
    void message;
    void onCancel;
    void onSubmit;
    void submitTitle;
}

@property (nonatomic, readonly) NSArray *keyCommands;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
