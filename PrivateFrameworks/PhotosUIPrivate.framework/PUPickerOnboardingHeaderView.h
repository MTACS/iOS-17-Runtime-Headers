
@interface PUPickerOnboardingHeaderView : UIView {
    void closeButton;
    void contentView;
    void delegate;
    void icon;
    void learnMoreButton;
    void platterView;
    void separatorHeightConstraint;
    void separatorView;
    void subtitle;
    void title;
}

@property (nonatomic) <PUPickerOnboardingHeaderViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)didMoveToWindow;
- (void)hovering:(id)arg1;
- (id)initWithClientDisplayName:(id)arg1 isLimitedLibraryPicker:(bool)arg2 closeAction:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
