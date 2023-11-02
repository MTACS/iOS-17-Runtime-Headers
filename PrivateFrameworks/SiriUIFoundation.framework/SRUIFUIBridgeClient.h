
@interface SRUIFUIBridgeClient : NSObject <AFUIBridgeClientDelegate> {
    AFUIBridgeClient * _client;
    <SRUIFUIBridgeClientDelegate> * _delegate;
    bool  _didDuckTTS;
    bool  _isAttending;
    SRUIFSiriSessionStateHandler * _stateHandler;
}

@property (getter=_client, retain) AFUIBridgeClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <SRUIFUIBridgeClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setIsAttending:) bool isAttending;
@property (getter=_stateHandler, retain) SRUIFSiriSessionStateHandler *stateHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_client;
- (void)_setIsAttending:(bool)arg1;
- (id)_stateHandler;
- (id)delegate;
- (void)endForReason:(long long)arg1;
- (void)idleAndQuietDidChange:(bool)arg1;
- (id)initWithStateHandler:(id)arg1;
- (bool)isAttending;
- (void)newRequestWillStart;
- (void)promptedUserForInput;
- (void)setClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStateHandler:(id)arg1;
- (void)stopAttending;
- (oneway void)uiBridgeClient:(id)arg1 detectedSpeechStartWithShouldDuckTTS:(bool)arg2;
- (oneway void)uiBridgeClient:(id)arg1 didStopAttendingUnexpectedlyWithReason:(unsigned long long)arg2;
- (oneway void)uiBridgeClient:(id)arg1 receivedSpeechMitigationResult:(unsigned long long)arg2;
- (oneway void)uiBridgeClientDidStartAttending:(id)arg1;
- (oneway void)uiBridgeClientReceivedShowAssetsDownloadPrompt:(id)arg1;
- (oneway void)uiBridgeClientWillStartAttending:(id)arg1;

@end
