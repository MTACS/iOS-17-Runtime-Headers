
@interface MSDCodeEntryContentViewController : UIViewController <MSDCodeEntryViewDelegate> {
    NSArray * _activeConstraints;
    MSDCodeEntryView * _codeEntryView;
    <MSDCodeEntryContentViewControllerDelegate> * _delegate;
    NSString * _errorMessage;
    UILabel * _messageLabel;
    UILabel * _promptLabel;
    UILabel * _titleLabel;
    NSString * _verificationCode;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, retain) MSDCodeEntryView *codeEntryView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <MSDCodeEntryContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *errorMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UILabel *promptLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *verificationCode;

- (void).cxx_destruct;
- (id)activeConstraints;
- (id)codeEntryView;
- (id)delegate;
- (void)didEnterCode:(id)arg1 forEntry:(id)arg2;
- (id)errorMessage;
- (id)initWithTitle:(id)arg1 message:(id)arg2 verificationCode:(id)arg3 verificationErrorMesssage:(id)arg4 andDelegate:(id)arg5;
- (id)messageLabel;
- (id)promptLabel;
- (void)setActiveConstraints:(id)arg1;
- (void)setCodeEntryView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setPromptLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVerificationCode:(id)arg1;
- (id)titleLabel;
- (void)updateViewConstraints;
- (id)verificationCode;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
