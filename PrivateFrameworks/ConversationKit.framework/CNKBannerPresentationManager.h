
@interface CNKBannerPresentationManager : NSObject {
    void value;
}

@property (nonatomic, readonly) TUCall *activeCall;
@property (nonatomic) unsigned long long applicationState;
@property (nonatomic) <CNKAudioRoutingDelegate> *audioRoutingDelegate;
@property (nonatomic, readonly) NSUUID *callUUID;
@property (nonatomic, readonly) bool conversationIsAVLess;
@property (nonatomic, retain) TUCall *handedOffCall;
@property (nonatomic, readonly) bool hasAssociatedCall;
@property (nonatomic, readonly) bool inCallControlsVisible;
@property (nonatomic, readonly) bool isMicIndicatorVisible;
@property (nonatomic, retain) <CNKLocalAudioTogglingDelegate> *localAudioTogglingDelegate;
@property (nonatomic, readonly) bool onlyHasPlaceholderCall;
@property (nonatomic, readonly) NSUUID *placeholderCallGroupUUID;
@property (nonatomic) <CNKBannerPresentationDelegate> *presentationDelegate;
@property (nonatomic, readonly) bool shouldShowCallDetailsWhenReady;
@property (nonatomic, readonly) bool wantsBannerWithoutScene;

- (void).cxx_destruct;
- (id)activeCall;
- (unsigned long long)applicationState;
- (id)audioRoutingDelegate;
- (void)bannerDismissedBySpringBoard;
- (id)callUUID;
- (bool)conversationIsAVLess;
- (void)didUpdatePresentationModeToFullScreen;
- (void)dismissPresentedBannerForReason:(id)arg1 animated:(bool)arg2;
- (id)handedOffCall;
- (void)handleLockScreenStatusChanged;
- (bool)hasAssociatedCall;
- (bool)inCallControlsVisible;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidatePersistentSystemApertureAlertWithReason:(id)arg1;
- (bool)isMicIndicatorVisible;
- (id)localAudioTogglingDelegate;
- (id)makeSystemApertureElementProvider;
- (bool)onlyHasPlaceholderCall;
- (id)placeholderCallGroupUUID;
- (void)preloadCallChanges;
- (void)presentHUDForCurrentContext;
- (void)presentReminderNotice;
- (void)presentSystemHUD;
- (id)presentationDelegate;
- (void)refreshShareableContentWithBundleIdentifier:(id)arg1;
- (void)setApplicationState:(unsigned long long)arg1;
- (void)setAudioRoutingDelegate:(id)arg1;
- (void)setHandedOffCall:(id)arg1;
- (void)setLocalAudioTogglingDelegate:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (bool)shouldShowCallDetailsWhenReady;
- (void)showAccessoryButtonEventsNoticeIfNeeded;
- (void)showHandoffHUD;
- (void)showInCallHUD;
- (void)showLagunaPullConversationHUD;
- (void)showPTTHUD;
- (void)showRemoteParticipantNoticeIfNeeded;
- (bool)wantsBannerWithoutScene;

@end
