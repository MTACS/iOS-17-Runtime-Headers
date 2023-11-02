
@interface READSchemaREADRequestPreprocessingContext : SISchemaInstrumentationMessage {
    READSchemaREADRequestPreprocessingEnded * _ended;
    bool  _hasEnded;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) READSchemaREADRequestPreprocessingEnded *ended;
@property (nonatomic) bool hasEnded;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (id)dictionaryRepresentation;
- (id)ended;
- (bool)hasEnded;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
