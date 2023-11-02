
@interface QSSMutableItnResponse : QSSItnResponse

@property (nonatomic, copy) NSArray *formatted_words_list;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)formatted_words_list;
- (id)init;
- (id)language;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (void)setFormatted_words_list:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
