
@interface ConversationKit.ParticipantGridView : UIView {
    void cachedFrameSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentAnimationInfo;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentlyFocusedParticipantIdentifier;
    void delegate;
    void deviceOrientation;
    void deviceType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fullScreenFocusedParticipantInfo;
    void isLocalMemberAuthorizedToChangeGroupMembership;
    void layoutStyle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  mostProminentParticipantIdentifier;
    void mostRecentAnimationIndex;
    void organicLayoutConfiguration;
    void participantIdentifiableTiles;
    void unfocusedParticipantOverlay;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end
