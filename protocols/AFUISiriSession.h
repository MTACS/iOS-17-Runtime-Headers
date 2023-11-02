
@protocol AFUISiriSession <NSObject>

@required

- (bool)attendingState;
- (void)audioRoutePickerWillDismiss;
- (void)audioRoutePickerWillShow;
- (void)cancelSpeechRequest;
- (void)clearContext;
- (void)didGainAttentionWithEvent:(long long)arg1;
- (void)didLoseAttentionWithEvent:(long long)arg1;
- (void)duckTTSToVolume:(void *)arg1 rampTime:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: float, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)end;
- (void)endForReason:(long long)arg1;
- (void)fetchAttendingState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)forceAudioSessionActive;
- (void)forceAudioSessionActiveWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, NSError *, void*
- (void)forceAudioSessionInactive;
- (void)idleAndQuietStatusDidChange:(bool)arg1;
- (void)launchedIntoListeningAtTime:(double)arg1;
- (void)notifyStateManagerPresentationTransitionBegan;
- (void)notifyStateManagerPresentationTransitionEnded;
- (void)notifyStateManagerSpeakingBegan;
- (void)notifyStateManagerSpeakingEnded;
- (void)notifyStateManagerTransactionBegan;
- (void)notifyStateManagerTransactionEnded;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1 turnIdentifier:(NSUUID *)arg2 machAbsoluteTime:(double)arg3;
- (void)preheat;
- (void)promptedUserForInput;
- (void)recordMetricsContext:(NSString *)arg1 forDisambiguatedAppWIthBundleIdentifier:(NSString *)arg2;
- (void)recordRequestMetricEvent:(NSString *)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(AFMetrics *)arg1;
- (void)requestDidPresentViewForErrorCommand:(SABaseClientBoundCommand *)arg1;
- (void)requestDidPresentViewForUICommand:(SABaseClientBoundCommand *)arg1;
- (void)resetContextTypes:(long long)arg1;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)resultDidChangeForAceCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AceObject<SAAceCommand> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (void)resumeInterruptedAudioPlaybackIfNeeded;
- (void)rollbackClearContext;
- (void)setAlertContext;
- (void)setAnnouncementRequestsPermittedByPresentationWhileActive:(bool)arg1;
- (void)setApplicationContext;
- (void)setCarDNDActive:(bool)arg1;
- (void)setDeviceInStarkMode:(bool)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)showAssetsDownloadNotificationPrompt;
- (void)siriUIDidPresentDynamicSnippetWithInfo:(NSDictionary *)arg1;
- (void)speechSynthesisDidFinish:(AFSpeechSynthesisRecord *)arg1;
- (void)speechSynthesisDidUpdatePowerLevelTo:(float)arg1;
- (void)startCorrectedRequestWithText:(NSString *)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(AFUserUtteranceSelectionResults *)arg3 turnIdentifier:(NSUUID *)arg4 machAbsoluteTime:(double)arg5;
- (void)startRequestWithOptions:(SASRequestOptions *)arg1;
- (void)startRequestWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SASRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopAttending;
- (void)stopRecordingSpeech;
- (void)stopRequestWithOptions:(SASRequestOptions *)arg1;
- (void)telephonyRequestCompleted;
- (void)updateRequestOptions:(SASRequestOptions *)arg1;

@end
