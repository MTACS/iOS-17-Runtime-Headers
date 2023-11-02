
@interface QSSMutableStartLanguageDetectionRequest : QSSStartLanguageDetectionRequest

@property (nonatomic) long long codec;
@property (nonatomic, copy) NSArray *locales;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (long long)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)locales;
- (id)session_id;
- (void)setCodec:(long long)arg1;
- (void)setLocales:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
