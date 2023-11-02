
@interface VTUITurnOnSiriView : VTUIEnrollmentBaseView <UITextViewDelegate> {
    UIButton * _continueButton;
    NSArray * _continueButtons;
    UIView * _footerView;
    UIButton * _laterButton;
    NSArray * _siriLanguages;
    <VTUITurnOnSiriViewDelegate> * _stateViewDelegate;
}

@property (nonatomic, readonly) UIButton *continueButton;
@property (nonatomic, readonly) NSArray *continueButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *laterButton;
@property (nonatomic) <VTUITurnOnSiriViewDelegate> *stateViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupContent;
- (void)_setupTurnOnSiriUI;
- (id)continueButton;
- (id)continueButtons;
- (id)footerView;
- (double)imageOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)languageSelectionOfContinueButton:(id)arg1;
- (id)laterButton;
- (void)layoutSubviews;
- (void)prepareForLastTimeShown;
- (void)setStateViewDelegate:(id)arg1;
- (bool)showPrivacyTextView;
- (id)stateViewDelegate;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
