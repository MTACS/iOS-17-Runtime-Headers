
@interface QSSMutableGraphemeToPhonemeRequest : QSSGraphemeToPhonemeRequest

@property (nonatomic, copy) QSSContextWithPronHints *context_with_pron_hints;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *orthography;
@property (nonatomic, copy) NSString *session_id;

- (id)context_with_pron_hints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (id)orthography;
- (id)session_id;
- (void)setContext_with_pron_hints:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setSession_id:(id)arg1;

@end
