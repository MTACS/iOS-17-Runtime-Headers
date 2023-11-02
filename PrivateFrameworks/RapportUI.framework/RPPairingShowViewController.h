
@interface RPPairingShowViewController : UIViewController {
    UIButton * _cancelButton;
    id /* block */  _dismissHandler;
    NSString * _password;
    UILabel * _subTitleLabel;
    UILabel * _titleLabel;
    UILabel * _verificationCodeLabel;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) UILabel *subTitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *verificationCodeLabel;

+ (id)instantiateViewController;

- (void).cxx_destruct;
- (void)_updatePasswordUI;
- (id)cancelButton;
- (id /* block */)dismissHandler;
- (void)handleCancelButton:(id)arg1;
- (id)password;
- (void)setCancelButton:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setPassword:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVerificationCodeLabel:(id)arg1;
- (id)subTitleLabel;
- (id)titleLabel;
- (id)verificationCodeLabel;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
