
@interface VTUIEnrollmentLanguageOptionsView : VTUIEnrollmentBaseView {
    NSMutableArray * _continueButtons;
    NSArray * _continueButtonsLanguages;
    UIView * _footerView;
}

@property (nonatomic, readonly) NSMutableArray *continueButtons;

- (void).cxx_destruct;
- (void)_addContinueButtonsToFooter;
- (void)_setupContent;
- (id)continueButtons;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)languageSelectionOfContinueButton:(id)arg1;
- (void)setContinueButtonLanguages:(id)arg1;
- (bool)showPrivacyTextView;

@end
