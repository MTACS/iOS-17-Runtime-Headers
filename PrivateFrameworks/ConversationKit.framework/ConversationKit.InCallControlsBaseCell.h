
@interface ConversationKit.InCallControlsBaseCell : UICollectionViewListCell {
    void button;
    void delegate;
    void isAccessiblityConstraintsEnabled;
    void isEnabled;
    void nameLabelFirstBaselineLayoutConstraint;
    void nameLabelLastBaselineLayoutConstraint;
    void titleLabel;
}

@property (nonatomic, readonly) _TtC15ConversationKit19InCallControlButton *button;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)button;
- (void)didTapButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
