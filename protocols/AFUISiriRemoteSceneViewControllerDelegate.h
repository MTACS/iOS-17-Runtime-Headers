
@protocol AFUISiriRemoteSceneViewControllerDelegate <NSObject>

@required

- (void)dismissSiriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 userInfo:(NSDictionary *)arg2 withReason:(long long)arg3;
- (void)openURL:(void *)arg1 bundleId:(void *)arg2 inPlace:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didFinishTest:(NSString *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(void *)arg1 didRequestCurrentTextInputWithReplyHandler:(void *)arg2; // needs 2 arg types, found 7: AFUISiriRemoteSceneViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didRequestKeyboard:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didRequestKeyboard:(bool)arg2 minimized:(bool)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(NSArray *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)siriRemoteViewController:(void *)arg1 handlePasscodeUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 7: AFUISiriRemoteSceneViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 invalidatedForReason:(unsigned long long)arg2 explanation:(NSString *)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 reduceOrbOpacity:(bool)arg2;
- (void)siriRemoteViewController:(void *)arg1 requestsDismissalWithReason:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: AFUISiriRemoteSceneViewController *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriRemoteViewController:(void *)arg1 requestsKeyboardWithCompletion:(void *)arg2; // needs 2 arg types, found 7: AFUISiriRemoteSceneViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriRemoteViewController:(void *)arg1 requestsPresentation:(void *)arg2; // needs 2 arg types, found 7: AFUISiriRemoteSceneViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setBugReportingAvailable:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setCarDisplaySnippetMode:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setFullScreenDimmingLayerVisible:(bool)arg2 animated:(bool)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setHelpButtonEmphasized:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setRequestHandlingStatus:(unsigned long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setStatusBarHidden:(bool)arg2 animated:(bool)arg3;
- (void)siriRemoteViewController:(void *)arg1 setStatusBarHidden:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: AFUISiriRemoteSceneViewController *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setStatusViewDisabled:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setStatusViewHidden:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setStatusViewUserInteractionEnabled:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setTypeToSiriViewHidden:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 startRequestWithOptions:(SASRequestOptions *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 willStartTest:(NSString *)arg2;
- (void)siriRemoteViewControllerCancelHIDEventDefferal:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidEndEditing:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidEnterUITrackingMode:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidExitUITrackingMode:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidFinishDismissing:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidResetTextInput:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerPulseHelpButton:(AFUISiriRemoteSceneViewController *)arg1;
- (long long)siriRemoteViewControllerRequestsActivationSource:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerRequestsHIDEventDefferal:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerWillBeginEditing:(AFUISiriRemoteSceneViewController *)arg1;
- (void)startGuidedAccessForRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1;

@optional

- (void)invalidateSystemApertureAssertion;
- (void)requestBlurVisible:(bool)arg1 reason:(long long)arg2 fence:(BKSAnimationFenceHandle *)arg3;
- (void)requestSystemApertureCollapse;
- (void)setShouldDismissForSwipesOutsideContent:(bool)arg1;
- (void)setShouldDismissForTapOutsideContent:(bool)arg1;
- (void)setShouldDismissForTapsOutsideContent:(bool)arg1;
- (void)setShouldPassTouchesThroughToSpringBoard:(bool)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didChangePresentationVisualState:(unsigned long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 presentedIntentWithBundleId:(NSString *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 sceneDidActivateWithIdentifier:(NSString *)arg2;
- (void)siriRemoteViewControllerDidDeactivateScene:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidPresentKeyboard:(AFUISiriRemoteSceneViewController *)arg1;

@end
