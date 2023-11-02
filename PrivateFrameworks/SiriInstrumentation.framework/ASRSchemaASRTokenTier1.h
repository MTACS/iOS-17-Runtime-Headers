
@interface ASRSchemaASRTokenTier1 : SISchemaInstrumentationMessage {
    bool  _hasIpaPhoneSequence;
    bool  _hasPhoneSequence;
    bool  _hasText;
    NSString * _ipaPhoneSequence;
    NSString * _phoneSequence;
    NSString * _text;
}

@property (nonatomic) bool hasIpaPhoneSequence;
@property (nonatomic) bool hasPhoneSequence;
@property (nonatomic) bool hasText;
@property (nonatomic, copy) NSString *ipaPhoneSequence;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *phoneSequence;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIpaPhoneSequence;
- (void)deletePhoneSequence;
- (void)deleteText;
- (id)dictionaryRepresentation;
- (bool)hasIpaPhoneSequence;
- (bool)hasPhoneSequence;
- (bool)hasText;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)ipaPhoneSequence;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)phoneSequence;
- (bool)readFrom:(id)arg1;
- (void)setHasIpaPhoneSequence:(bool)arg1;
- (void)setHasPhoneSequence:(bool)arg1;
- (void)setHasText:(bool)arg1;
- (void)setIpaPhoneSequence:(id)arg1;
- (void)setPhoneSequence:(id)arg1;
- (void)setText:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)text;
- (void)writeTo:(id)arg1;

@end
