
@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {
    AFConnection * _connection;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectionDelegate;
- (oneway void)aceConnectionWillRetryOnError:(id)arg1;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(bool)arg1;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)appLaunchFailedWithBundleIdentifier:(id)arg1;
- (oneway void)audioPlaybackRequestDidStart:(id)arg1;
- (oneway void)audioPlaybackRequestDidStop:(id)arg1 error:(id)arg2;
- (oneway void)audioPlaybackRequestWillStart:(id)arg1;
- (oneway void)audioSessionDidBecomeActive:(bool)arg1;
- (oneway void)audioSessionDidBeginInterruptionWithUserInfo:(id)arg1;
- (oneway void)audioSessionDidEndInterruption:(bool)arg1 userInfo:(id)arg2;
- (oneway void)audioSessionIDChanged:(unsigned int)arg1;
- (oneway void)audioSessionWillBecomeActive:(bool)arg1;
- (oneway void)cacheImage:(id)arg1;
- (oneway void)extensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;
- (oneway void)extensionRequestWillStartForApplication:(id)arg1;
- (oneway void)getBulletinContext:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 targetQueue:(id)arg2;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)musicWasDetected;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1;
- (oneway void)requestDidReceiveCommand:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)requestDidUpdateResponseMode:(id)arg1;
- (oneway void)requestHandleCommand:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedDismissAssistantWithReason:(long long)arg1;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)requestRequestedOpenURL:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (oneway void)shouldSpeakChanged:(bool)arg1;
- (oneway void)speechRecognitionDidFail:(id)arg1;
- (oneway void)speechRecognized:(id)arg1;
- (oneway void)speechRecognizedAdditionalInterpretation:(id)arg1 refId:(id)arg2;
- (oneway void)speechRecognizedPartialResult:(id)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 reply:(id /* block */)arg3;
- (oneway void)speechRecordingDidCancelWithReply:(id /* block */)arg1;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1 isDucking:(bool)arg2 isTwoShot:(bool)arg3 speechEndHostTime:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (oneway void)speechRecordingDidEndWithReply:(id /* block */)arg1;
- (oneway void)speechRecordingDidFail:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(id /* block */)arg2;
- (oneway void)speechRecordingStartpointDetectedWithReply:(id /* block */)arg1;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(id)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)startPlaybackDidFail:(long long)arg1;
- (oneway void)startUIRequestWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)startUIRequestWithText:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)willProcessAppLaunchWithBundleIdentifier:(id)arg1;
- (oneway void)willProcessStartPlayback:(long long)arg1 intent:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)willStopRecordingWithSignpostID:(unsigned long long)arg1;

@end
