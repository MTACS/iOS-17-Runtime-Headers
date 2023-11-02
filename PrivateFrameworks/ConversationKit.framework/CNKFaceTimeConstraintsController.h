
@interface CNKFaceTimeConstraintsController : NSObject {
    void bannerControlsHeightConstraint;
    void bannerControlsSize;
    void bannerControlsWidthConstraint;
    void bannerDodgingLayoutGuide;
    void captionsState;
    void configurableRosterCellWidth;
    void configurableRosterCellWidthConstraint;
    void floatingControlsState;
    void inCallControlsState;
    void inCallConversationBannerState;
    void isLocalReactionActive;
    void layoutIdiom;
    void localParticipantAspectRatio;
    void localParticipantState;
    void mostRecentLocalParticipantCorner;
    void participantGridState;
    void participantListState;
    void reactionPickerTipState;
    void reactionsState;
    void shouldForceAllowNextLocalParticipantStateUpdate;
    void shutterButtonState;
    void viewControllerLayout;
    void viewStateEffects;
}

@property (nonatomic) long long accessibilityLocalParticipantState;
@property (nonatomic) long long inCallControlsState;

- (void).cxx_destruct;
- (long long)inCallControlsState;
- (id)init;
- (long long)localParticipantState;
- (void)removeEffectsConstraints;
- (void)setInCallControlsState:(long long)arg1;
- (void)setLocalParticipantState:(long long)arg1;
- (void)updateConstraintsWith:(id)arg1 controlsViewController:(id)arg2 localParticipantView:(id)arg3 effectsView:(id)arg4 effectsBrowserViewController:(id)arg5;
- (void)updateFor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 deviceOrientation:(long long)arg2;

@end
