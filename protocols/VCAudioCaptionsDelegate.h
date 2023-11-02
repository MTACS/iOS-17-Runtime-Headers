
@protocol VCAudioCaptionsDelegate

@required

- (void)didDisableCaptions:(bool)arg1 error:(NSError *)arg2;
- (void)didEnableCaptions:(bool)arg1 error:(NSError *)arg2;
- (void)didStartCaptioningWithReason:(int)arg1 streamToken:(long long)arg2;
- (void)didStopCaptioningWithReason:(int)arg1 streamToken:(long long)arg2;
- (void)didUpdateCaptions:(VCCaptionsTranscription *)arg1;

@optional

- (void)didUpdateCaptionsLocalLanguages:(NSSet *)arg1 remoteLanguages:(NSSet *)arg2 remoteCanDisplay:(bool)arg3;

@end
