
@interface FTMutableTextNormalizationResponse : FTTextNormalizationResponse

@property (nonatomic) int error_code;
@property (nonatomic, copy) NSString *error_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSArray *tokens;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)init;
- (id)session_id;
- (void)setError_code:(int)arg1;
- (void)setError_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)speech_id;
- (id)tokens;

@end
