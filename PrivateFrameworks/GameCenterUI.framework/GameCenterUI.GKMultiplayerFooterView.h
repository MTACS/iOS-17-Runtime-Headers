
@interface GameCenterUI.GKMultiplayerFooterView : UIView {
    void $__lazy_storage_$_primaryButtonFocusGuide;
    void $__lazy_storage_$_secondaryButtonFocusGuide;
    void backgroundView;
    void buttonTitle;
    void inviteFriendsHandler;
    void primaryButton;
    void secondaryButton;
    void startGameHandler;
    void statusLabel;
    void topSeparator;
}

@property (nonatomic, copy) NSString *footerStatusString;
@property (nonatomic) bool inviteFriendsButtonEnabled;
@property (nonatomic) bool inviteFriendsButtonHidden;
@property (nonatomic, copy) id /* block */ inviteFriendsHandler;
@property (nonatomic, copy) NSString *primaryButtonTitle;
@property (nonatomic, copy) NSString *secondaryButtonTitle;
@property (nonatomic) bool startGameButtonEnabled;
@property (nonatomic, copy) id /* block */ startGameHandler;

- (void).cxx_destruct;
- (void)configureUsing:(id)arg1;
- (void)didTapButton:(id)arg1;
- (void)didTapSecondaryButton:(id)arg1;
- (id)footerStatusString;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)inviteFriendsButtonEnabled;
- (bool)inviteFriendsButtonHidden;
- (id /* block */)inviteFriendsHandler;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (id)primaryButtonTitle;
- (id)secondaryButtonTitle;
- (void)setFooterStatusString:(id)arg1;
- (void)setInviteFriendsButtonEnabled:(bool)arg1;
- (void)setInviteFriendsButtonHidden:(bool)arg1;
- (void)setInviteFriendsHandler:(id /* block */)arg1;
- (void)setPrimaryButtonTitle:(id)arg1;
- (void)setSecondaryButtonTitle:(id)arg1;
- (void)setStartGameButtonEnabled:(bool)arg1;
- (void)setStartGameHandler:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)startGameButtonEnabled;
- (id /* block */)startGameHandler;
- (void)wantsMaterialBackgroundWithScrollOffset:(double)arg1;

@end
