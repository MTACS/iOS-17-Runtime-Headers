
@interface GameCenterUI.GKMultiplayerButtonHeaderView : UIView {
    void backgroundView;
    void bottomSeparator;
    void cancelButton;
    void cancelButtonHandler;
    void iconView;
    void playerCountLabel;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)applyGame:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (id)initWithCancelButtonHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMinimumValue:(long long)arg1 maximumValue:(long long)arg2 initialValue:(long long)arg3 cancelButtonHandler:(id /* block */)arg4;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateCountWithMinPlayers:(long long)arg1 maxPlayers:(long long)arg2;
- (void)wantsMaterialBackgroundWithScrollOffset:(double)arg1;

@end
