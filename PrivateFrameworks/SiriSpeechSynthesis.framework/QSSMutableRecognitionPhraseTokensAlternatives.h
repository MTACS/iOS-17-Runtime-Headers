
@interface QSSMutableRecognitionPhraseTokensAlternatives : QSSRecognitionPhraseTokensAlternatives

@property (nonatomic) bool has_unsuggested_alternatives;
@property (nonatomic, copy) NSArray *tok_phrases;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)has_unsuggested_alternatives;
- (id)init;
- (void)setHas_unsuggested_alternatives:(bool)arg1;
- (void)setTok_phrases:(id)arg1;
- (id)tok_phrases;

@end
