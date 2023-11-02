
@interface CSSpeakerRecognitionProxy : NSObject <CSSSRXPCClientDelegate> {
    <CSSpeakerRecognitionProxyProtocol> * _delegate;
    CSSSRXPCClient * _ssrXPCClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CSSpeakerRecognitionProxyProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSSSRXPCClient *ssrXPCClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)didFinishSpeakerRecognition:(id)arg1;
- (void)didReceiveSpeakerRecognitionScoreCard:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)invalidateXPCConnection;
- (void)setSsrXPCClient:(id)arg1;
- (id)ssrXPCClient;
- (void)startXPCConnection;

@end
