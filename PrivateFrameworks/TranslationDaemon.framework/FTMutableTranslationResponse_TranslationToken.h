
@interface FTMutableTranslationResponse_TranslationToken : FTTranslationResponse_TranslationToken

@property (nonatomic) bool add_space_after;
@property (nonatomic) float confidence;
@property (nonatomic, copy) FTAlignment *mt_alignment;
@property (nonatomic, copy) NSString *token;

- (bool)add_space_after;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)mt_alignment;
- (void)setAdd_space_after:(bool)arg1;
- (void)setConfidence:(float)arg1;
- (void)setMt_alignment:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
