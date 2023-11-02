
@interface ConversationKit.ParticipantMonogramView : UIView {
    void audioVisualizationView;
    void colorStyle;
    void contactView;
    void customCornerRadius;
    void delegate;
    void glowClippingView;
    void glowView;
    void isInRoster;
    void participantMonogramViewLayout;
    void ringButton;
    void subtitleLabelContainer;
    void titleLabelContainer;
}

@property (nonatomic, retain) UIButton *ringButton;
@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *subtitleLabelContainer;
@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *titleLabelContainer;

- (void).cxx_destruct;
- (void)didTapRingButton;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)ringButton;
- (void)setRingButton:(id)arg1;
- (id)subtitleLabelContainer;
- (id)titleLabelContainer;

@end
