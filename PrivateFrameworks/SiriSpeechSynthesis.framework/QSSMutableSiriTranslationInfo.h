
@interface QSSMutableSiriTranslationInfo : QSSSiriTranslationInfo

@property (nonatomic, copy) NSArray *itn_alignments;
@property (nonatomic, copy) NSString *post_itn_recognition;
@property (nonatomic, copy) NSArray *post_itn_tokens;
@property (nonatomic, copy) NSArray *raw_nbest_choices;
@property (nonatomic, copy) QSSRecognitionSausage *raw_sausage;
@property (nonatomic, copy) NSArray *translation_phrase;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)itn_alignments;
- (id)post_itn_recognition;
- (id)post_itn_tokens;
- (id)raw_nbest_choices;
- (id)raw_sausage;
- (void)setItn_alignments:(id)arg1;
- (void)setPost_itn_recognition:(id)arg1;
- (void)setPost_itn_tokens:(id)arg1;
- (void)setRaw_nbest_choices:(id)arg1;
- (void)setRaw_sausage:(id)arg1;
- (void)setTranslation_phrase:(id)arg1;
- (id)translation_phrase;

@end
