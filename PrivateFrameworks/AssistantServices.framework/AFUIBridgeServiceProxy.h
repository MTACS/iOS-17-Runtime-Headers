
@interface AFUIBridgeServiceProxy : NSObject <AFUIBridgeServiceDelegate> {
    AFUIBridgeClient * _client;
}

@property (nonatomic) AFUIBridgeClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (id)initWithClient:(id)arg1;
- (void)setClient:(id)arg1;
- (oneway void)uiBridgeServiceDetectedSiriDirectedSpeech;
- (oneway void)uiBridgeServiceDetectedSpeechStart;
- (oneway void)uiBridgeServiceDetectedSpeechStart:(bool)arg1;
- (oneway void)uiBridgeServiceDidStart;
- (oneway void)uiBridgeServiceDidStartAttending;
- (oneway void)uiBridgeServiceDidStartAttendingWithRootRequestId:(id)arg1;
- (oneway void)uiBridgeServiceDidStopAttendingUnexpectedlyWithReason:(unsigned long long)arg1;
- (oneway void)uiBridgeServiceReceivedShowAssetsDownloadPrompt;
- (oneway void)uiBridgeServiceReceivedSpeechMitigationResult:(unsigned long long)arg1;
- (oneway void)uiBridgeServiceWillStartAttending;

@end
