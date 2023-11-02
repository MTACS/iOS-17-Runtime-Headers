
@interface QSSMutableItnRequest : QSSItnRequest

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSArray *words_list;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (id)session_id;
- (void)setLanguage:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setWords_list:(id)arg1;
- (id)speech_id;
- (id)words_list;

@end
