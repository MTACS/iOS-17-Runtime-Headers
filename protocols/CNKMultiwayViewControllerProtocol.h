
@protocol CNKMultiwayViewControllerProtocol <NSObject>

@required

- (CNKBannerPresentationManager *)bannerPresentationManager;
- (TUCall *)call;
- (void)cancelVideoRecordingWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (<CNKFaceTimeMultiwayConversationViewControllerDelegate> *)delegate;
- (long long)deviceOrientation;
- (bool)didExpandIncomingCallBanner;
- (void)didTapOneToOneShutterButton;
- (bool)effectsEnabled;
- (long long)frontBoardInterfaceOrientation;
- (long long)fullScreenFocusedParticipantOrientation;
- (bool)hasParticipantVideo;
- (void)hideEffectsBrowser;
- (<CNKFaceTimeMultiwayViewControllerIOSDelegate> *)iOSDelegate;
- (bool)isAmbient;
- (bool)isCaptioningEnabled;
- (bool)isDisplayedInBanner;
- (bool)isFullScreen;
- (bool)isInVideoMessageFlow;
- (bool)isOnScreen;
- (bool)isOneToOneModeEnabled;
- (bool)isPipStashed;
- (bool)isPipped;
- (bool)isScreenSharingFullScreen;
- (bool)isShowingHUD;
- (bool)isShownAboveCoverSheet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mediaPipFrameInWindowScene;
- (void)muteVideo;
- (void)openMessagesConversation;
- (void)pipDidRotate;
- (long long)pipState;
- (UIViewController *)pipViewController;
- (struct CGSize { double x1; double x2; })preferredPIPContentAspectRatio;
- (void)prepareForAppSwitcher;
- (void)setBannerPresentationManager:(CNKBannerPresentationManager *)arg1;
- (void)setDelegate:(id <CNKFaceTimeMultiwayConversationViewControllerDelegate>)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDidExpandIncomingCallBanner:(bool)arg1;
- (void)setEffectsEnabled:(bool)arg1;
- (void)setFrontBoardInterfaceOrientation:(long long)arg1;
- (void)setIOSDelegate:(id <CNKFaceTimeMultiwayViewControllerIOSDelegate>)arg1;
- (void)setIsAmbient:(bool)arg1;
- (void)setIsCaptioningEnabled:(bool)arg1;
- (void)setIsDisplayedInBanner:(bool)arg1;
- (void)setIsFullScreen:(bool)arg1;
- (void)setIsOnScreen:(bool)arg1;
- (void)setIsPipStashed:(bool)arg1;
- (void)setIsScreenSharingFullScreen:(bool)arg1;
- (void)setMediaPipFrameInWindowScene:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPipState:(long long)arg1;
- (void)setSupportedDeviceOrientations:(long long)arg1;
- (bool)shouldDisconnectOnDismissal;
- (void)showSidebar;
- (long long)supportedDeviceOrientations;
- (void)toggleAudioMute;
- (void)toggleLocalOrientation;
- (void)toggleVideoMuteWithShouldPauseIfStopped:(bool)arg1;
- (void)updateVideoState;
- (bool)wantsApplicationDismissalStyle;
- (bool)wantsPIPRotationForLocalPreview;

@end
