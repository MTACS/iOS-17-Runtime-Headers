
@interface CNVSchemaCNVIntentReformationEnded : SISchemaInstrumentationMessage {
    bool  _hasReformedIntent;
    USOSchemaUSOGraph * _reformedIntent;
}

@property (nonatomic) bool hasReformedIntent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) USOSchemaUSOGraph *reformedIntent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteReformedIntent;
- (id)dictionaryRepresentation;
- (bool)hasReformedIntent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)reformedIntent;
- (void)setHasReformedIntent:(bool)arg1;
- (void)setReformedIntent:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
