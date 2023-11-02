
@protocol AFUISiriViewControllerDelegate <NSObject>

@required

- (bool)isAmbientPresented;
- (void)openURL:(void *)arg1 bundleId:(void *)arg2 inPlace:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)siriViewController:(AFUISiriViewController *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didEncounterUnexpectedError:(NSError *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didHideStatusView:(bool)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 onboardingScreenContinueButtonTappedWithRequestOptions:(SASRequestOptions *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 updateHomeAffordanceForBlurVisibilty:(bool)arg2;
- (SASRequestOptions *)siriViewController:(AFUISiriViewController *)arg1 willStartRequestWithOptions:(SASRequestOptions *)arg2;
- (void)siriViewControllerDidChangeVisibility:(AFUISiriViewController *)arg1;
- (void)siriViewControllerSessionDidResetContext:(AFUISiriViewController *)arg1;
- (bool)siriViewControllerShouldEndSession:(AFUISiriViewController *)arg1;
- (bool)siriViewControllerShouldSupportTextInput:(AFUISiriViewController *)arg1;
- (void)startGuidedAccessForSiriViewController:(AFUISiriViewController *)arg1;
- (void)userRelevantEventDidOccurInSiriViewController:(AFUISiriViewController *)arg1;

@optional

- (void)dismissSiriViewController:(AFUISiriViewController *)arg1 withReason:(long long)arg2;
- (bool)headphonesAuthenticated;
- (void)invalidateSystemApertureAssertion;
- (void)requestSystemApertureCollapse;
- (void)resetGestureBehaviors;
- (void)setShareHomeGesture:(bool)arg1;
- (void)setShouldDismissForSwipesOutsideContent:(bool)arg1;
- (void)setShouldDismissForTapOutsideContent:(bool)arg1;
- (void)setShouldDismissForTapsOutsideContent:(bool)arg1;
- (void)setShouldPassTouchesThroughToSpringBoard:(bool)arg1;
- (void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
- (void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
- (void)siriViewController:(AFUISiriViewController *)arg1 didChangePresentationVisualState:(unsigned long long)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didCompleteRequestWithError:(NSError *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didEndSession:(AFUISiriSession *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didFinishTest:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didReceiveButtonUpWithRequestOptions:(SASRequestOptions *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(NSArray *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)siriViewController:(AFUISiriViewController *)arg1 failedToLaunchAppWithBundleIdentifier:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 presentedIntentWithBundleId:(NSString *)arg2;
- (void)siriViewController:(void *)arg1 requestsDismissalWithReason:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: AFUISiriViewController *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriViewController:(void *)arg1 requestsPresentation:(void *)arg2; // needs 2 arg types, found 7: AFUISiriViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriViewController:(AFUISiriViewController *)arg1 sceneDidActivateWithIdentifier:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 voiceActivationMaskViewIsVisible:(bool)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 willProcessAppLaunchWithBundleIdentifier:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 willStartTest:(NSString *)arg2;
- (void)siriViewControllerDidChangeToListeningMode:(AFUISiriViewController *)arg1;
- (void)siriViewControllerDidDeactivateScene:(AFUISiriViewController *)arg1;
- (void)siriViewControllerDidFinishDismissing:(AFUISiriViewController *)arg1;
- (void)siriViewControllerDidPresentKeyboard:(AFUISiriViewController *)arg1;
- (void)siriViewControllerSpeechRequestCancelledFromSiriOrb;
- (void)siriViewControllerSpeechRequestStartedFromSiriOrb;

@end
