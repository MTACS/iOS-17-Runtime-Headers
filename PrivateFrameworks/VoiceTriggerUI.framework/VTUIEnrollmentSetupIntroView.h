
@interface VTUIEnrollmentSetupIntroView : VTUIEnrollmentBaseView {
    VTUIButton * _continueButton;
    UIView * _footerView;
    NSString * _languageCode;
    VTUIButton * _laterButton;
}

@property (nonatomic, readonly) VTUIButton *continueButton;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly) VTUIButton *laterButton;

- (void).cxx_destruct;
- (id)_createFooterWithTextFieldShowlaterButton:(bool)arg1;
- (void)_setupContent;
- (id)continueButton;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)languageCode;
- (id)laterButton;
- (bool)showPrivacyTextView;

@end
