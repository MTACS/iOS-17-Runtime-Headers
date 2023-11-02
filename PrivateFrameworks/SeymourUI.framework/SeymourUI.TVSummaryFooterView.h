
@interface SeymourUI.TVSummaryFooterView : UIView {
    void cooldownButton;
    void doneButton;
    void onCooldownButtonTap;
    void onDoneButtonTap;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (void)cooldownButtonTapped;
- (void)doneButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusEnvironments;

@end
