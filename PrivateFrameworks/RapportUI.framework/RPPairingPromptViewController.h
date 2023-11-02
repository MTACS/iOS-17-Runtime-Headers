
@interface RPPairingPromptViewController : UIViewController {
    UIButton * _cancelButton;
    id /* block */  _dismissHandler;
    RPPINEntryView * _pinEntryView;
    UILabel * _progressLabel;
    UIActivityIndicatorView * _progressSpinner;
    unsigned long long  _retryDeadlineTicks;
    NSObject<OS_dispatch_source> * _retryTimer;
    UILabel * _subTitleLabel;
    UILabel * _titleLabel;
    id /* block */  _tryPasswordHandler;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, retain) RPPINEntryView *pinEntryView;
@property (nonatomic, retain) UILabel *progressLabel;
@property (nonatomic, retain) UIActivityIndicatorView *progressSpinner;
@property (nonatomic, retain) UILabel *subTitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) id /* block */ tryPasswordHandler;

+ (id)instantiateViewController;

- (void).cxx_destruct;
- (void)_retryTimer;
- (id)cancelButton;
- (id /* block */)dismissHandler;
- (void)handleCancelButton:(id)arg1;
- (void)handlePINEntered:(id)arg1;
- (id)pinEntryView;
- (id)progressLabel;
- (id)progressSpinner;
- (void)setCancelButton:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setPinEntryView:(id)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setProgressSpinner:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTryPasswordHandler:(id /* block */)arg1;
- (id)subTitleLabel;
- (id)titleLabel;
- (id /* block */)tryPasswordHandler;
- (void)updateWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
