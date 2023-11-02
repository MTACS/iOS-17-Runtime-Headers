
@protocol SVXUserFeedbackMutating <NSObject>

@required

- (void)setAudioContent:(SVXUserFeedbackAudioContent *)arg1;
- (void)setContentType:(long long)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setVoiceContent:(SVXUserFeedbackVoiceContent *)arg1;

@end
