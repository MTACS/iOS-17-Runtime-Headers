
@interface MTSchemaMTLocalePairResolved : SISchemaInstrumentationMessage {
    bool  _hasLocalePair;
    MTSchemaMTLocalePair * _localePair;
}

@property (nonatomic) bool hasLocalePair;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MTSchemaMTLocalePair *localePair;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLocalePair;
- (id)dictionaryRepresentation;
- (bool)hasLocalePair;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)localePair;
- (bool)readFrom:(id)arg1;
- (void)setHasLocalePair:(bool)arg1;
- (void)setLocalePair:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
