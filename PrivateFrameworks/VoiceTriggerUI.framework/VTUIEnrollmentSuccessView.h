
@interface VTUIEnrollmentSuccessView : VTUIEnrollmentBaseView {
    VTUIButton * _finishButton;
    UIView * _footerView;
}

@property (nonatomic, readonly) VTUIButton *finishButton;

- (void).cxx_destruct;
- (id)_createFooter;
- (void)_setupContent;
- (id)finishButton;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showPrivacyTextView;

@end
