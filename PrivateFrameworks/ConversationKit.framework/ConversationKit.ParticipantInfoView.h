
@interface ConversationKit.ParticipantInfoView : UIView {
    void customCornerRadius;
    void delegate;
    void expandButton;
    void gradientView;
    void isExpanded;
    void isMomentsAvailable;
    void localParticipant;
    void nameLabel;
    void recordingLocalVideo;
    void shutterButton;
}

@property (nonatomic) bool isMomentsAvailable;
@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *nameLabel;

- (void).cxx_destruct;
- (void)didTapExpandButton;
- (void)didTapShutterButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMomentsAvailable;
- (void)layoutSubviews;
- (id)nameLabel;
- (void)setIsMomentsAvailable:(bool)arg1;

@end
