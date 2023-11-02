
@interface ConversationKit.CallAgainHUDView : UIView {
    void avatarBottomConstraint;
    void avatarStack;
    void avatarStackVerticalSpacingDivisor;
    void avatarView;
    void bottomButtonConstraint;
    void callBackButton;
    void callTypeLabel;
    void closeButton;
    void effectsView;
    void primaryLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  recipe;
    void showCallDetailsButton;
    void videoMessageButton;
    void videoMessageStackView;
}

@property (nonatomic, readonly) UIButton *callBackButton;
@property (nonatomic, readonly) UIButton *closeButton;
@property (nonatomic, readonly) UIButton *videoMessageButton;

- (void).cxx_destruct;
- (id)callBackButton;
- (id)closeButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)videoMessageButton;

@end
