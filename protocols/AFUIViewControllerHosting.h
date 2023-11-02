
@protocol AFUIViewControllerHosting <NSObject>

@required

- (void)getScreenshotWithReplyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)handlePasscodeUnlockWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)openURL:(void *)arg1 bundleId:(void *)arg2 inPlace:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)pulseHelpButton;
- (void)serviceBulletinWithIdentifier:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFBulletin *, void*
- (void)serviceCancelHIDEventDefferal;
- (void)serviceDidDetectAudioRoutePickerTap;
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)serviceDidDetectMicButtonTap;
- (void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidEndEditing;
- (void)serviceDidEnterUITrackingMode;
- (void)serviceDidExitUITrackingMode;
- (void)serviceDidPresentConversationFromBreadcrumb;
- (void)serviceDidPresentUserInterface;
- (void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidRequestCurrentTextInput:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)serviceDidRequestKeyboard:(bool)arg1;
- (void)serviceDidRequestKeyboard:(bool)arg1 minimized:(bool)arg2;
- (void)serviceDidResetTextInput;
- (void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
- (void)serviceRequestsActivationSourceWithReplyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)serviceRequestsDismissalWithUserInfo:(NSDictionary *)arg1 withReason:(long long)arg2;
- (void)serviceRequestsHIDEventDefferal;
- (void)serviceStartGuidedAccess;
- (void)serviceStartRequestWithOptions:(SASRequestOptions *)arg1;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceViewControllerRequestsDismissalWithDismissalReason:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)serviceViewControllerRequestsKeyboardWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)serviceViewControllerRequestsPresentation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)serviceWillBeginEditing;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)setBugReportingAvailable:(bool)arg1;
- (void)setCarDisplaySnippetMode:(long long)arg1;
- (void)setFullScreenDimmingLayerVisible:(bool)arg1 animated:(bool)arg2;
- (void)setHelpButtonEmphasized:(bool)arg1;
- (void)setRequestHandlingStatus:(unsigned long long)arg1;
- (void)setStatusBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setStatusBarHidden:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setStatusViewDisabled:(bool)arg1;
- (void)setStatusViewHidden:(bool)arg1;
- (void)setStatusViewUserInteractionEnabled:(bool)arg1;
- (void)siriIdleAndQuietStatusDidChange:(bool)arg1;

@optional

- (void)invalidateSystemApertureAssertion;
- (void)presentationDidPresentKeyboard;
- (void)reduceOrbOpacity:(bool)arg1;
- (void)requestHostBlurVisible:(bool)arg1 reason:(long long)arg2 fence:(BKSAnimationFenceHandle *)arg3;
- (void)requestSystemApertureCollapse;
- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;
- (void)servicePresentationDidChangeVisualState:(unsigned long long)arg1;
- (void)servicePresentedIntentWithBundleId:(NSString *)arg1;
- (void)setShouldDismissForSwipesOutsideContent:(bool)arg1;
- (void)setShouldDismissForTapOutsideContent:(bool)arg1;
- (void)setShouldDismissForTapsOutsideContent:(bool)arg1;
- (void)setShouldPassTouchesThroughToSpringBoard:(bool)arg1;
- (void)setTypeToSiriViewHidden:(bool)arg1;

@end
