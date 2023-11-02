
@interface ConversationKit.BannerPresentationManager : NSObject <ConversationKit.SystemBannerHostViewControllerDelegate, TUConversationManagerDelegate> {
    void _conversationControlsManager;
    void audioRoutingDelegate;
    void callCenter;
    void defaults;
    void features;
    void handedOffCall;
    void inCallConversationControlsDelegate;
    void placeholderCallCenter;
    void presentationDelegate;
    void presentedBanner;
    void presentedBannerDismissalTimer;
    void presentedSystemApertureElement;
    void previouslyHadMultipleCalls;
    void shouldRequestHUDPresentationOnAVUpgradeOrDowngrade;
    void systemApertureElementDismissalTimer;
    void updateWorkItem;
}

@property (nonatomic, readonly) NSSet *backgroundActivitiesToSuppress;
@property (nonatomic, readonly) bool hasPresentedFullScreenCallUI;
@property (nonatomic, readonly) bool inCallControlsVisible;
@property (nonatomic, readonly) NSString *inCallSceneSessionIdentifier;
@property (nonatomic, readonly) bool isPresentingFullScreenCallUI;
@property (nonatomic, readonly) bool isSpringBoardLocked;
@property (nonatomic, retain) _TtC15ConversationKit30SystemBannerHostViewController *presentedBanner;

- (void).cxx_destruct;
- (id)backgroundActivitiesToSuppress;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2 fromOldConversation:(id)arg3;
- (void)deepLinkToFullScreenCallDetailsView;
- (void)deepLinkToFullScreenCallUI;
- (void)didDismiss:(id)arg1 reason:(long long)arg2;
- (void)didUpdatePresentationModeToFullScreen;
- (void)dismissPresentedBannerForReason:(id)arg1 animated:(bool)arg2;
- (void)handleAppLaunchWantsHUDDismissal:(id)arg1;
- (void)handleCallStatusDidChange:(id)arg1;
- (bool)hasPresentedFullScreenCallUI;
- (bool)inCallControlsVisible;
- (id)inCallSceneSessionIdentifier;
- (id)init;
- (void)invalidatePersistentSystemApertureAlertWithReason:(id)arg1;
- (bool)isPresentingFullScreenCallUI;
- (bool)isSpringBoardLocked;
- (id)presentedBanner;
- (void)setPresentedBanner:(id)arg1;

@end
