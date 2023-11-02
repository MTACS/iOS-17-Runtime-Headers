
@interface PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1 : SISchemaInstrumentationMessage {
    struct { 
        unsigned int source : 1; 
    }  _has;
    bool  _hasPhonemes;
    NSString * _phonemes;
    int  _source;
}

@property (nonatomic) bool hasPhonemes;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *phonemes;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePhonemes;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (bool)hasPhonemes;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)phonemes;
- (bool)readFrom:(id)arg1;
- (void)setHasPhonemes:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setPhonemes:(id)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
