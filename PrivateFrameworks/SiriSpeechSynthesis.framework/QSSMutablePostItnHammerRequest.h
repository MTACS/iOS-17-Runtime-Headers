
@interface QSSMutablePostItnHammerRequest : QSSPostItnHammerRequest

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *post_itn_string;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSArray *tokens;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (id)post_itn_string;
- (id)session_id;
- (void)setLanguage:(id)arg1;
- (void)setPost_itn_string:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)speech_id;
- (id)tokens;

@end
