
@interface QSSMutableStartPronGuessRequest : QSSStartPronGuessRequest

@property (nonatomic) long long codec;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *orthography;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (long long)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (id)orthography;
- (id)session_id;
- (void)setCodec:(long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
