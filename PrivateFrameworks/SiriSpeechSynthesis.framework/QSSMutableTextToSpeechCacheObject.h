
@interface QSSMutableTextToSpeechCacheObject : QSSTextToSpeechCacheObject

@property (nonatomic, copy) NSData *audio;
@property (nonatomic, copy) NSArray *word_timing_info;

- (id)audio;
- (void)audio:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAudio:(id)arg1;
- (void)setWord_timing_info:(id)arg1;
- (id)word_timing_info;

@end
