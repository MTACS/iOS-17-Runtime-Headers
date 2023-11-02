
@protocol AFClientServiceDelegate <NSObject>

@required

- (oneway void)aceConnectionWillRetryOnError:(NSError *)arg1;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(bool)arg1;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)appLaunchFailedWithBundleIdentifier:(NSString *)arg1;
- (oneway void)audioPlaybackRequestDidStart:(AFAudioPlaybackRequest *)arg1;
- (oneway void)audioPlaybackRequestDidStop:(AFAudioPlaybackRequest *)arg1 error:(NSError *)arg2;
- (oneway void)audioPlaybackRequestWillStart:(AFAudioPlaybackRequest *)arg1;
- (oneway void)audioSessionDidBecomeActive:(bool)arg1;
- (oneway void)audioSessionDidBeginInterruptionWithUserInfo:(NSDictionary *)arg1;
- (oneway void)audioSessionDidEndInterruption:(bool)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)audioSessionIDChanged:(unsigned int)arg1;
- (oneway void)audioSessionWillBecomeActive:(bool)arg1;
- (oneway void)cacheImage:(INImage *)arg1;
- (oneway void)extensionRequestFinishedForApplication:(NSString *)arg1 error:(NSError *)arg2;
- (oneway void)extensionRequestWillStartForApplication:(NSString *)arg1;
- (oneway void)getBulletinContext:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)musicWasDetected;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1;
- (oneway void)requestDidUpdateResponseMode:(NSString *)arg1;
- (oneway void)requestHandleCommand:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: AceObject<SAAceCommand> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, NSError *, void*
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedDismissAssistantWithReason:(long long)arg1;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(void *)arg1 URL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)requestRequestedOpenURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)setUserActivityInfo:(NSDictionary *)arg1 webpageURL:(NSURL *)arg2;
- (oneway void)shouldSpeakChanged:(bool)arg1;
- (oneway void)speechRecognitionDidFail:(NSError *)arg1;
- (oneway void)speechRecognized:(SASSpeechRecognized *)arg1;
- (oneway void)speechRecognizedAdditionalInterpretation:(AFSpeechInterpretation *)arg1 refId:(NSString *)arg2;
- (oneway void)speechRecognizedPartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(void *)arg1 audioSessionID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)speechRecordingDidCancelWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)speechRecordingDidChangeAVRecordRoute:(void *)arg1 isDucking:(void *)arg2 isTwoShot:(void *)arg3 speechEndHostTime:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 9: NSString *, bool, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)speechRecordingDidEndWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)speechRecordingDidFail:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(NSArray *)arg1 utterances:(NSArray *)arg2 refId:(NSString *)arg3;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, NSError *, void*
- (oneway void)speechRecordingStartpointDetectedWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(NSString *)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: AFXPCWrapper *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)startPlaybackDidFail:(long long)arg1;
- (oneway void)startUIRequestWithInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AFRequestInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)startUIRequestWithText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)willProcessAppLaunchWithBundleIdentifier:(NSString *)arg1;
- (oneway void)willProcessStartPlayback:(void *)arg1 intent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (oneway void)willStopRecordingWithSignpostID:(unsigned long long)arg1;

@end
