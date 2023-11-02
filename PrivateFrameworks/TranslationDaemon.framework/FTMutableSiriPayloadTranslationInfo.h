
@interface FTMutableSiriPayloadTranslationInfo : FTSiriPayloadTranslationInfo

@property (nonatomic, copy) NSString *post_itn_payload;
@property (nonatomic, copy) NSString *pre_itn_payload;
@property (nonatomic, copy) FTRecognitionSausage *pre_sausage_payload;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)post_itn_payload;
- (id)pre_itn_payload;
- (id)pre_sausage_payload;
- (void)setPost_itn_payload:(id)arg1;
- (void)setPre_itn_payload:(id)arg1;
- (void)setPre_sausage_payload:(id)arg1;

@end
