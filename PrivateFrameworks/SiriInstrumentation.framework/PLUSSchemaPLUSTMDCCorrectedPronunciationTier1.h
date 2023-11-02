
@interface PLUSSchemaPLUSTMDCCorrectedPronunciationTier1 : SISchemaInstrumentationMessage {
    NSString * _firstNamePhonemes;
    bool  _hasFirstNamePhonemes;
    bool  _hasLastNamePhonemes;
    bool  _hasNicknamePhonemes;
    NSString * _lastNamePhonemes;
    NSString * _nicknamePhonemes;
}

@property (nonatomic, copy) NSString *firstNamePhonemes;
@property (nonatomic) bool hasFirstNamePhonemes;
@property (nonatomic) bool hasLastNamePhonemes;
@property (nonatomic) bool hasNicknamePhonemes;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *lastNamePhonemes;
@property (nonatomic, copy) NSString *nicknamePhonemes;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFirstNamePhonemes;
- (void)deleteLastNamePhonemes;
- (void)deleteNicknamePhonemes;
- (id)dictionaryRepresentation;
- (id)firstNamePhonemes;
- (bool)hasFirstNamePhonemes;
- (bool)hasLastNamePhonemes;
- (bool)hasNicknamePhonemes;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)lastNamePhonemes;
- (id)nicknamePhonemes;
- (bool)readFrom:(id)arg1;
- (void)setFirstNamePhonemes:(id)arg1;
- (void)setHasFirstNamePhonemes:(bool)arg1;
- (void)setHasLastNamePhonemes:(bool)arg1;
- (void)setHasNicknamePhonemes:(bool)arg1;
- (void)setLastNamePhonemes:(id)arg1;
- (void)setNicknamePhonemes:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
