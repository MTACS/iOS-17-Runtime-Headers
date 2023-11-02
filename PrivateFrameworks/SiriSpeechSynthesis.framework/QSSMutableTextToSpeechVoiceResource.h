
@interface QSSMutableTextToSpeechVoiceResource : QSSTextToSpeechVoiceResource

@property (nonatomic, copy) NSData *data;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)data:(id /* block */)arg1;
- (id)init;
- (void)setData:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
