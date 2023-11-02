
@interface ConversationKit.CaptionsClientParticipantCaptionsProvider : NSObject <AVCCaptionsClientDelegate> {
    void avcCaptionsClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void lowConfidenceThreshold;
    void participantCaptionsProviderDelegate;
}

- (void).cxx_destruct;
- (void)captionsClient:(id)arg1 didDetectGibberish:(bool)arg2;
- (void)captionsClient:(id)arg1 didDisableCaptions:(bool)arg2 error:(id)arg3;
- (void)captionsClient:(id)arg1 didEnableCaptions:(bool)arg2 error:(id)arg3;
- (void)captionsClient:(id)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)captionsClient:(id)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)captionsClient:(id)arg1 didUpdateCaptions:(id)arg2 source:(int)arg3;
- (void)captionsServerDidDie:(id)arg1;
- (void)dealloc;
- (id)init;

@end
