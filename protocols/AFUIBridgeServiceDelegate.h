
@protocol AFUIBridgeServiceDelegate <NSObject>

@optional

- (oneway void)uiBridgeServiceDetectedSiriDirectedSpeech;
- (oneway void)uiBridgeServiceDetectedSpeechStart;
- (oneway void)uiBridgeServiceDetectedSpeechStart:(bool)arg1;
- (oneway void)uiBridgeServiceDidStart;
- (oneway void)uiBridgeServiceDidStartAttending;
- (oneway void)uiBridgeServiceDidStartAttendingWithRootRequestId:(NSString *)arg1;
- (oneway void)uiBridgeServiceDidStopAttendingUnexpectedlyWithReason:(unsigned long long)arg1;
- (oneway void)uiBridgeServiceReceivedShowAssetsDownloadPrompt;
- (oneway void)uiBridgeServiceReceivedSpeechMitigationResult:(unsigned long long)arg1;
- (oneway void)uiBridgeServiceWillStartAttending;

@end
