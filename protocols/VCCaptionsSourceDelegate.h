
@protocol VCCaptionsSourceDelegate <NSObject>

@required

- (void)streamToken:(long long)arg1 didDetectGibberish:(bool)arg2;
- (void)streamToken:(long long)arg1 didDisableCaptions:(bool)arg2 error:(NSError *)arg3;
- (void)streamToken:(long long)arg1 didEnableCaptions:(bool)arg2 error:(NSError *)arg3;
- (void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didUpdateCaptions:(VCCaptionsTranscription *)arg2;

@end
