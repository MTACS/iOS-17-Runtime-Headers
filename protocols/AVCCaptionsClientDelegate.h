
@protocol AVCCaptionsClientDelegate <NSObject>

@optional

- (void)captionsClient:(AVCCaptionsClient *)arg1 didDetectGibberish:(bool)arg2;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didDisableCaptions:(bool)arg2 error:(NSError *)arg3;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didEnableCaptions:(bool)arg2 error:(NSError *)arg3;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didUpdateCaptions:(AVCCaptionsResult *)arg2 source:(int)arg3;
- (void)captionsServerDidDie:(AVCCaptionsClient *)arg1;

@end
