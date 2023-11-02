
@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView {
    double  _automaticConfirmationThreshold;
    SiriUIContentButton * _cancelButton;
    SiriUIContentButton * _confirmButton;
    SAUIConfirmationOptions * _confirmationOptions;
    SiriUIProgressBarView * _progressBarView;
    SiriUISnippetViewController * _snippetViewController;
    SiriUIKeyline * _verticalKeyline;
}

@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, readonly) UIButton *confirmButton;
@property (nonatomic, retain) SAUIConfirmationOptions *confirmationOptions;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)beginProgressAnimation;
- (id)cancelButton;
- (id)confirmButton;
- (id)confirmationOptions;
- (double)defaultAmbientHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setConfirmationOptions:(id)arg1;
- (void)setSnippetViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)snippetViewController;

@end
