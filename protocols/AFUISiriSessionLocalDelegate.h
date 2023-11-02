
@protocol AFUISiriSessionLocalDelegate <AFUISiriSessionListener>

@required

- (void)siriSession:(AFUISiriSession *)arg1 didChangeToState:(long long)arg2 event:(long long)arg3 machAbsoluteTransitionTime:(double)arg4;
- (void)siriSession:(void *)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: AFUISiriSession *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)siriSession:(void *)arg1 didReceiveDeviceUnlockRequestWithCompletion:(void *)arg2; // needs 2 arg types, found 7: AFUISiriSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)siriSession:(AFUISiriSession *)arg1 failedToLaunchAppWithBundleIdentifier:(NSString *)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 initialBringupProcessedWithTurnIdentifier:(AFAnalyticsTurnBasedInstrumentationContext *)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 willProcessAppLaunchWithBundleIdentifier:(NSString *)arg2;
- (void)siriSessionAudioOutputDidChangePowerLevel:(float)arg1;
- (void)siriSessionAudioRecordingDidChangePowerLevel:(float)arg1;
- (void)siriSessionDidEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SAUIDelayedActionCancelCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidReceiveDelayedActionCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SAUIDelayedActionCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidReceiveSetUpdateMaskCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SAUISetUpdateMask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidReceiveStartScreenRecordingCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SADeviceControlStartScreenRecording *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidReceiveStopScreenRecordingCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SADeviceControlStopScreenRecording *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidReceiveTakeScreenshotCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SAUITakeScreenshot *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidResetContext:(AFUISiriSession *)arg1;
- (void)siriSessionImmersiveExperienceRequested;
- (void)siriSessionRecordingPreparationHasFinished:(AFUISiriSession *)arg1;
- (void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
- (void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
- (void)siriSessionWillEnd:(AFUISiriSession *)arg1;

@optional

- (void)handlePunchoutCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SAUIAppPunchOut *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)headphonesAuthenticated;
- (bool)shouldNonLocalDelegateHandlePunchouts;

@end
