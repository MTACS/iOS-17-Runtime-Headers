
@interface FTMutableTextNormalizationRequest : FTTextNormalizationRequest

@property (nonatomic, copy) NSString *language;
@property (nonatomic) int nbest_variants_max;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSString *text;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (int)nbest_variants_max;
- (id)session_id;
- (void)setLanguage:(id)arg1;
- (void)setNbest_variants_max:(int)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setText:(id)arg1;
- (id)speech_id;
- (id)text;

@end
