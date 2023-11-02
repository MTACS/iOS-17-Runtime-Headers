
@protocol AFUIBridgeClientDelegate <NSObject>

@optional

- (oneway void)uiBridgeClient:(AFUIBridgeClient *)arg1 detectedSpeechStartWithShouldDuckTTS:(bool)arg2;
- (oneway void)uiBridgeClient:(AFUIBridgeClient *)arg1 didStopAttendingUnexpectedlyWithReason:(unsigned long long)arg2;
- (oneway void)uiBridgeClient:(AFUIBridgeClient *)arg1 receivedSpeechMitigationResult:(unsigned long long)arg2;
- (oneway void)uiBridgeClientDetectedSiriDirectedSpeech:(AFUIBridgeClient *)arg1;
- (oneway void)uiBridgeClientDetectedSpeechStart:(AFUIBridgeClient *)arg1;
- (oneway void)uiBridgeClientDidStartAttending:(AFUIBridgeClient *)arg1;
- (oneway void)uiBridgeClientDidStartAttending:(AFUIBridgeClient *)arg1 withRootRequestId:(NSString *)arg2;
- (oneway void)uiBridgeClientReceivedShowAssetsDownloadPrompt:(AFUIBridgeClient *)arg1;
- (oneway void)uiBridgeClientWillStartAttending:(AFUIBridgeClient *)arg1;

@end
