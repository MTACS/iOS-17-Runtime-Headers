
@interface GameCenterUI.AvatarView : UIView {
    void arcadeBadgeView;
    void artworkView;
    void hasShadow;
    void isArcadeSubscriber;
    void messagesBadgeView;
    void showMessagesBadge;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } jet_focusedFrame;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })jet_focusedFrame;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
