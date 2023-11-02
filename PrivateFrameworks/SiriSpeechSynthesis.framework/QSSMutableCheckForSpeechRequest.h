
@interface QSSMutableCheckForSpeechRequest : QSSCheckForSpeechRequest

@property (nonatomic) long long end_speech_time;
@property (nonatomic) long long start_speech_time;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)end_speech_time;
- (id)init;
- (void)setEnd_speech_time:(long long)arg1;
- (void)setStart_speech_time:(long long)arg1;
- (long long)start_speech_time;

@end
