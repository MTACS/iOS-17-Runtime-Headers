
@interface ConversationKit.ParticipantView : UIView {
    void $__lazy_storage_$_infoView;
    void alertView;
    void backgroundEffectsView;
    void contentView;
    void customCornerRadius;
    void debugLabel;
    void delegate;
    void gradientOverlayView;
    void hideAlertViewTimer;
    void hideInfoViewTimer;
    void isExpanded;
    void isInRoster;
    void kickMemberButton;
    void localParticipant;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  loggingIdentifier;
    void monogramView;
    void mostRecentViewModelHash;
    void orientationCancellable;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  participantIdentifier;
    void prominenceBorderView;
    void shouldOverrideShadowHidden;
    void videoOverlayView;
    void videoView;
}

@property (nonatomic, retain) _TtC15ConversationKit19ParticipantInfoView *infoView;
@property (nonatomic) bool isExpanded;
@property (nonatomic) bool isInRoster;
@property (nonatomic, readonly) _TtC15ConversationKit21ParticipantViewButton *kickMemberButton;
@property (nonatomic, readonly) _TtC15ConversationKit23ParticipantMonogramView *monogramView;
@property (nonatomic) bool shouldOverrideShadowHidden;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didTapKickMember;
- (id)infoView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpanded;
- (bool)isInRoster;
- (id)kickMemberButton;
- (void)layoutSubviews;
- (id)monogramView;
- (void)setInfoView:(id)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setIsInRoster:(bool)arg1;
- (void)setShouldOverrideShadowHidden:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)shouldOverrideShadowHidden;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
