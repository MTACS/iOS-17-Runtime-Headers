
@interface NLXSchemaCDMRepetitionResult : SISchemaInstrumentationMessage {
    unsigned int  _asrHypothesisIndex;
    struct { 
        unsigned int asrHypothesisIndex : 1; 
        unsigned int repetitionType : 1; 
    }  _has;
    int  _repetitionType;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) bool hasAsrHypothesisIndex;
@property (nonatomic) bool hasRepetitionType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int repetitionType;

- (unsigned int)asrHypothesisIndex;
- (void)deleteAsrHypothesisIndex;
- (void)deleteRepetitionType;
- (id)dictionaryRepresentation;
- (bool)hasAsrHypothesisIndex;
- (bool)hasRepetitionType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)repetitionType;
- (void)setAsrHypothesisIndex:(unsigned int)arg1;
- (void)setHasAsrHypothesisIndex:(bool)arg1;
- (void)setHasRepetitionType:(bool)arg1;
- (void)setRepetitionType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
