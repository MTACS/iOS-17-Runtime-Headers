
@interface GameCenterUI.GKMultiplayerAddSlotCollectionViewCell : UICollectionViewCell {
    void addSlotActionHandler;
    void addSlotButton;
    void contentBackgroundView;
    void focusGuide;
    void maximumAdditionalPlayers;
    void vibrancyHost;
}

@property (nonatomic, readonly) UIButton *accessibilityAddSlotButton;
@property (nonatomic, copy) id /* block */ addSlotActionHandler;
@property (nonatomic) long long maximumAdditionalPlayers;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)accessibilityAddSlotButton;
- (id /* block */)addSlotActionHandler;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)maximumAdditionalPlayers;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (void)setAddSlotActionHandler:(id /* block */)arg1;
- (void)setMaximumAdditionalPlayers:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
